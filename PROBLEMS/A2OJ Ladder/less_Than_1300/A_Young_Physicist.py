n = int(input())
x = 0 
y = 0
z = 0
while(n>0):
    arr = list(map(int, (input().split())))
    x += arr[0]
    y += arr[1]
    z += arr[2]
    n -= 1

if x == 0 and y == 0 and z == 0:
    print("YES")
else:
    print("NO")

