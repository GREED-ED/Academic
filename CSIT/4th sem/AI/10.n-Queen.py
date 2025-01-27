def print_board(board):
    for row in board:
        print(" ".join(["Q" if x else "." for x in row]))

def is_safe(board, row, col, n):
    for i in range(row):
        if board[i][col] == 1:
            return False

    for i, j in zip(range(row - 1, -1, -1), range(col - 1, -1, -1)):
        if board[i][j] == 1:
            return False
        
    for i, j in zip(range(row - 1, -1, -1), range(col + 1, n)):
        if board[i][j] == 1:
            return False

    return True

def solve_nqueen(board, row, n):
    if row == n:
        print_board(board) 
        print("\nSolution found\n")
        return True 

    for col in range(n):
        if is_safe(board, row, col, n):
            board[row][col] = 1 
            if solve_nqueen(board, row + 1, n):
                return True
            board[row][col] = 0 

    return False 

def n_queen(n):
    board = [[0] * n for _ in range(n)] 

    if not solve_nqueen(board, 0, n):
        print("No solution exists.")

try:
    n = int(input("Enter the size of the chessboard (N): "))
    if n < 4:
        print("There is no solution for N < 4.")
    else:
        n_queen(n)
except ValueError:
    print("Please enter a valid integer.")
