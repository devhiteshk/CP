from collections import Counter
k = int(input())
for i in range(k):
    n = int(input())
    ar = list(map(int,input().split(" ")))
    c = Counter(ar)
    valu = list(c.values())
    print(c,valu)
    valu.sort()
    print(valu)
    if valu[-1]%2 == 0:
        valu[-1] = valu[-1]//2
    else:
        valu[-1] = (valu[-1] + 1) //2
    valu.sort()
    # print(valu[-1])
