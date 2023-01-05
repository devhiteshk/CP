n = int(input())

arr = list(map(int, input().split()))

dp = [0 for i in range(n+1)]

min_e = arr[0]
for i in range(1,n+1):
        min_e = min(min_e, arr[i-1])
        dp[i] = dp[i-1] + min_e*(i-1 - 1)**2

print(dp)


