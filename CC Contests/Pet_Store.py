t = int(input())

while(t):

    n_an = int(input())

    arr = list(map(int, input().split()))

    d = {}

    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    flag = True
    for key in d:
        if d[key]%2 != 0:
            flag = False
            break

    if flag:
        print("YES")
    else:
        print("NO")
    t -= 1