t = int(input())

def find_gcd(x, y):
    while(y):
        x, y = y, x % y
  
    return x

while(t):

    n = int(input())

    arr = list(map(int,input().split()))

    arr.sort()

    if arr[0] == arr[-1]:
        print(0)
    else:
        x = arr[0]
        for i in range(1, len(arr)):
            x = find_gcd(x,arr[i])

        max_i = 0
        count = 0

        for i in range(len(arr)):
            if arr[i] == x:
                count += 1

        print(n - count)

    t -= 1