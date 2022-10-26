t = int(input())

while (t):

    n = int(input())
    attack_ty = list(map(int, input().split()))
    attack = list(map(int, input().split()))

    cal_fire = []
    cal_frost = []
    for i in range(n):
        if attack_ty[i] == 0:
            cal_fire.append(attack[i])
        else:
            cal_frost.append(attack[i])

    cal_fire.sort()
    cal_frost.sort(reverse=True)

    print(cal_fire, cal_frost)

    if not cal_frost:
        print(sum(cal_fire))

    elif not cal_fire:
        print(sum(cal_frost))


    t -= 1
