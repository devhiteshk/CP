t = int(input())

while t:

    n = int(input())

    C = list(map(int, input().split()))

    max_ = 0          # Finding maximum element index 
    for i in range(n):
        if C[i]>C[max_]:
            max_ = i
    
    if max_ == 0:     # It is not possible for maximum element to be at 0th index
        print(-1)

    else:
        print(max_)

        for i in range(max_):
            print(C[i], end = " ")
        print("")

        print(n-max_)
        
        for i in range(max_, n):
            print(C[i], end=" ")
        print("")
        

    t -= 1