t = int(input())

while(t):

    A,B = map(int, input().split())

    if B%A:
        if B>2*A:
            print("YES")

        else:
            print("NO")
    
    else:
        print("YES")

    t -= 1