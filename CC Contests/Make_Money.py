t = int(input())

while(t):

    N,X,C = map(int,input().split())

    A_i = list(map(int, input().split()))

    sum_initial = sum(A_i)
    cost = 0

    for i in range(N):
        if X - A_i[i] > C:
            A_i[i] = X
            cost += C
        else:
            continue

    print(max(sum_initial, sum(A_i) - cost))

    t -= 1