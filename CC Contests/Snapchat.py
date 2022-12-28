t = int(input())


while t:

    N_days = int(input())

    Chef = list(map(int, input().split()))
    Chefina = list(map(int, input().split()))

    max_s = -float('inf')
    streak = 0
    for i in range(len(Chef)):
        if Chef[i] > 0 and Chefina[i] > 0:
            streak += 1
            max_s = max(max_s, streak)
        else:
            streak = 0

    if max_s>0:
        print(max_s)
    else:
        print(0)


    t -= 1