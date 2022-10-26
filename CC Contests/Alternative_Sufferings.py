t = int(input())

def solve(S):
    arr = [i for i in S]

    hash = []

    for i in range(len(arr)):
        if arr[i] == "1":
            hash.append(1)
        else:
            hash.append(0)

    for i in range(1,len(arr)):
        if hash[i] == 1:
            if arr[i-1] == "0":
                arr[i-1] = "1"

            if i<len(arr):
                if arr[i+1] == "0":
                    arr[i+1] = "1"

    for i in range(len(arr)):
        if hash[i] == 1:
            arr[i] = "0"

    return "".join(arr)

while t:
    
    n,k = map(int, input().split())

    S = input()

    for i in range(k):
        temp = solve(S)
        S = temp
    
    print(S)

    t -= 1
