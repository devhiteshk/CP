t = int(input())

while(t):

    x,y = map(int, input().split())

    print(x//y + x%y)

    t -= 1