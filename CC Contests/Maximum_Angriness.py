t = int(input())

while(t):

    N,K = map(int,input().split())

    if N == 1:
        print(0)

    else:
        s = (N*(N-1)) // 2

        if K<N//2:
            x = N-2*K
            s -= (x*(x-1))//2

        print(s)

    t -= 1