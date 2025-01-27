def diaplay(board):
    for row in board:
        print(" ".join("Q" if cell else "." for cell in row))
    print("\n")

def safe(board, row, col, n):
    for i in range(col):
        if board[row][i]:
            return False
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j]:
            return False
    for i, j in zip(range(row, n), range(col, -1, -1)):
        if board[i][j]:
            return False
    return True

def solve(board, col, n, solutions):
    if col >= n:
        solutions.append([row[:] for row in board])
        return
    for i in range(n):
        if safe(board, i, col, n):
            board[i][col] = 1
            solve(board, col + 1, n, solutions)
            board[i][col] = 0

def solveQ(n):
    board = [[0 for _ in range(n)] for _ in range(n)]
    solutions = []
    solve(board, 0, n, solutions)
    print(f"Total solutions for {n}x{n} board: {len(solutions)}\n")
    for solution in solutions:
        diaplay(solution)

if __name__ == "__main__":
    try:
        N = int(input("Enter the value of N: "))
        if N <= 0:
            print("Please enter a positive integer.")
        else:
            solveQ(N)
    except ValueError:
        print("Invalid input. Please enter a positive integer.")