t = int(input())

while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    ans = arr[0]
    arr.sort()

    for i in range(1,len(arr)):
        temp = arr[i]*arr[i-1]
        arr[i-1] = 1
        arr[i] = temp

    print(sum(arr)*2022)

    t -= 1