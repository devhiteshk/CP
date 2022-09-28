t = int(input())

while(t):

    n = int(input())
    arr = list(map(int, input().split()))
    # print(n,arr)

    d = {}
    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    max_count = 0
    for key in d:
        curr = d[key]
        max_count = max(max_count, curr)

    print(n - max_count)

    t -= 1