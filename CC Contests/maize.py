def isValid(n, maze, x, y, vis):
    if x >= 0 and y >= 0 and x < n and y < n and maze[x][y] == 1 and vis[x][y] == 0:
        return True
    return False

def RatInAMaze(n, maize):
    ans = []
    vis = [[0 for i in range(n)] for i in range(n)]
    path = []
    getMaizePath(0, 0, path, maize, ans, n, vis)
    return ans

def getMaizePath(r, c, path, maize, ans, n, vis):
    if r == n-1 and c == n-1:
        ans.append(list("".join(path)))
        return
    
    vis[r][c] = -1

    # down
    x = r + 1
    y = c
    if isValid(n, maize, x, y, vis):
        path.append("D")
        getMaizePath(x, y, path, maize, ans, n, vis)
        path.pop()

    # up
    x = r - 1
    y = c 
    if isValid(n, maize, x, y, vis):
        path.append("U")
        getMaizePath(x, y, path, maize, ans, n, vis)
        path.pop()

    # left
    x = r
    y = c - 1
    if isValid(n, maize, x, y, vis):
        path.append("L")
        getMaizePath(x, y, path, maize, ans, n, vis)
        path.pop()

    # right
    x = r
    y = c + 1
    if isValid(n, maize, x, y, vis):
        path.append("R")
        getMaizePath(x, y, path, maize, ans, n, vis)
        path.pop()

    vis[r][c] = 0

n = 4
maize = [[1, 0, 0, 0],
        [1, 1, 0, 1], 
        [1, 1, 0, 0],
        [0, 1, 1, 1]]

RatInAMaze(n, maize)