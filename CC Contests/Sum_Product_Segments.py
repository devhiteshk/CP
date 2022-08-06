t = int(input())
while(t):
    try:
        X,Y = map(int, input().split(" "))

        arrSet = []
        for l in range(max(X,Y) + 1):
            for r in range(l, max(X,Y) + 1):
                if(l+r) == X:
                    arrSet.append([l,r])
                elif(l*r == Y):
                    arrSet.append([l,r])

        arrSet.sort(key = lambda a:a[0])
        print(arrSet)

        arrAns = []
        # logic ???????

    except:
        pass
    t -= 1