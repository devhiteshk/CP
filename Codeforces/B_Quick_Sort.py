t = int(input())

while t:

    a,b = map(int, input().split())

    arr = list(map(int, input().split()))

    c = 0

    d = 1

    for i in arr:
        if i == d:
            c += 1
            d += 1

    e = a - c

    if e%b == 0:
        print(e//b)
    else:
        print(e//b + 1)

    t -= 1