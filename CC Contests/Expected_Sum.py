t = int(input())
MOD = 998244353
while(t):

    C1, C2 = map(int,input().split())

    N = C1+C2

    Chef = 0
    Chefina = 0


    while(C1):
        Chef += (1/2)*(1/(C1))
        C1 -= 1

    print(Chef%MOD)


    t -= 1