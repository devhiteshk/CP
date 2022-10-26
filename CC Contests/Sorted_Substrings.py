
t = int(input())

while(t):

    n = int(input())
    S = input()

    ans = 0
    for i in range(1,n):
        if S[i] == "0" and S[i-1] == "1":
            ans += 1

    print(ans)

    t -= 1