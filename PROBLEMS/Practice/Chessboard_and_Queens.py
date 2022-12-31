# Brute force Approach
def isSafe(row, col, board, n):
    r = row
    c = col
    if board[r][c] == "*":
        return False
    
    # check for Queen in each row
    while(c>=0):
        if board[r][c] == "Q":
            return False        
        c -= 1
    
    # check for queen in upper diagonal
    r = row
    c = col
    while(r>=0 and c>=0):
        if board[r][c] == "Q":
            return False
        r -= 1
        c -= 1
        
    # check for queen in lower diagonal
    r = row
    c = col
    while(r<n and c>=0):
        if board[r][c] == "Q":
            return False
        r += 1
        c -= 1
        
    return True
    

def getQueens(col, ans, board, n):
    if col == n:
        ans.append(["".join(i) for i in board])
        return
    
    for row in range(n):
        if isSafe(row, col, board, n) == True:
            board[row][col] = 'Q'
            getQueens(col + 1, ans, board, n)
            board[row][col] = '.'


ans = []
board = []
n = 8
for i in range(8):
    board.append([i for i in input()])

getQueens(0, ans, board, 8)
print(len(ans))