t = int(input())

while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    sum_arr = []

    odd = 0  # if none gives NZEC

    flag = True
    for i in arr:
        if flag == True and i%2 == 1:
            odd = i
            flag = False
        else:
            sum_arr.append(i)

    if odd*sum(sum_arr) % 2 == 1:
        print("YES")

    else:
        print("NO")

    t -= 1
