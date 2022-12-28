import sys, io , os

import sys
fastio = sys.stdin.readline

def inp():
    return(int(fastio().rstrip('\n')))
def inps():
    return(fastio().rstrip('\n'))
def inlt():
    return(list(map(int,fastio().split())))
def insr():
    s = fastio()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,fastio().split()))


t = inp()

while(t):

    n = inp()

    st2 = inps()

    st1 = st2[::-1]

    dp = [[0 for i in range(n+1)] for j in range(n+1)]
    
    for i in range(1, n+1):
        for j in range(1, n+1):
            if st2[i-1] == st1[j-1]:
                dp[i][j] = 1 + dp[i-1][j-1]
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])

    sys.stdout.write(str(dp[n][n]//2)+"\n")

    t -= 1