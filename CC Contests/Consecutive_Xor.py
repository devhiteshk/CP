t = int(input())
while t:

    n = int(input())

    arr = list(map(int, input().split()))

    for i in range(1, len(arr)):
        arr[i] = arr[i]^arr[i-1]
        arr[i-1] = 0

    count = n

    for i in range(len(arr)):
        if arr[i] > 0:
            count -= 1

    if count == n:
        print("YES")

    elif count == n-1:
        if (n-1)%2 == 1:
            print("NO")
        else:
            print("YES")
    else:
        print("NO")



    t-=1