t = int(input())

while(t):
    empty = input().split()
    x1, y1 = map(int,(input().split()))
    x2, y2 = map(int,(input().split()))
    x3, y3 = map(int,(input().split()))

    S12 = False
    S23 = False
    S31 = False

    if x2-x1 == 0 or y2-y1 == 0:
        S12 = True 
    if x3-x2 == 0 or y3-y2 == 0:
        S23 = True
    if x3-x1 == 0 or y3-y1 == 0:
        S31 = True

    if (S12 and S23) or (S23 and S31) or (S31 and S12):
        print("NO")
    else:
        print("YES")

    t -= 1