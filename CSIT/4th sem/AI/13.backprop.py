
def is_valid(board, row, col, num):
    for i in range(9):   #check row
        if board[row][i] == num:
            return False

    for i in range(9):  #check column
        if board[i][col] == num:
            return False

    start_row, start_col = 3 * (row // 3), 3 * (col // 3)  #check grid
    for i in range(start_row, start_row + 3):
        for j in range(start_col, start_col + 3):
            if board[i][j] == num:
                return False

    return True

def solve_sudoku(board):
    # Find the first empty cell (denoted by 0)
    for row in range(9):
        for col in range(9):
            if board[row][col] == 0: 
                for num in range(1, 10):
                    if is_valid(board, row, col, num): 
                        board[row][col] = num
                        
                        if solve_sudoku(board):
                            return True
                        
                        board[row][col] = 0
                return False 
    
    return True 

def print_board(board):
    for row in range(9):
        for col in range(9):
            print(board[row][col], end=" ")
        print()

board = [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
]

if solve_sudoku(board):
    print("Solved Sudoku:")
    print_board(board)
else:
    print("No solution exists.")
