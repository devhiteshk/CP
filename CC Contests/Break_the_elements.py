t = int(input())

while(t):

    n = int(input())
    arr = list(map(int, input().split()))

    d = {'even':0, 'odd':0}

    for i in arr:
        if i%2 == 0:
            d['even'] += 1
        else:
            d['odd'] += 1

    ans = 0

    if d['even'] == 0 or d['odd'] == 0:
        print(0)

    else:
        print(n - d['odd'])

    t -= 1