import math

t = int(input())

while(t):

    n = int(input())
    arr = list(map(int, input().split()))

    d = {}

    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    max_val = -99999999
    for key in d:
        max_val = max(d[key],max_val)

    if max_val == 0:
        print(0)

    else:
        print(math.ceil(math.log2(max_val)))

    t -= 1