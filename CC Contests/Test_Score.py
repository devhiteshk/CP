t = int(input())

while(t):

    n,x,y = map(int,input().split())

    for i in range(0,n+1):
        curr = i*x
        if curr == y:
            print("YES")
            break

    else:
        print("NO")

    t -= 1