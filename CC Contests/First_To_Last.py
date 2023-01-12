t = int(input())

def helper(r,c,arr,ans, path,Sp):
    if r == len(arr)-1 and c == len(arr[0])-1:
        ans.append(path)
        return

    elif r>=0 and c>=0 and r<len(arr) and c<len(arr[0]) and arr[r][c] == 1:
        arr[r][c] = "#"

        if [r+1,c+1] in Sp:

            helper(r+1,c+1,arr,ans, path + 1, Sp)
            helper(r-1,c-1,arr,ans, path + 1, Sp)
            helper(r+1,c-1,arr,ans, path + 1, Sp)
            helper(r-1,c+1,arr,ans, path + 1, Sp)

        # TOP
        helper(r-1,c,arr,ans, path + 1, Sp)
        # RIGHT
        helper(r,c+1,arr,ans, path + 1, Sp)
        # BOTTOM
        helper(r+1,c,arr,ans, path + 1, Sp)
        # LEFT
        helper(r,c-1,arr,ans, path + 1, Sp)

        arr[r][c] = 1

    else:
        return


while(t):
    
    N, M, K = map(int, input().split())
    Sp = []

    for i in range(K):
        Sp.append(list(map(int, input().split())))

    matrix = [[1 for i in range(N)] for j in range(M)]

    ans = []
    i = 0
    j = 0
    path = 0

    helper(i, j, matrix, ans, path, Sp)

    print(min(ans))

    t -= 1