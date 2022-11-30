t = int(input())

while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    arr.sort()

    ans = 0
    x = 0

    for i in range(len(arr)):
        for j in range(i, len(arr)):
            min_val = arr[i]
            arr[j] -= arr[i]
        ans += min_val

    print(ans)

    t -= 1