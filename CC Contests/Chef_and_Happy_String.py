from itertools import count


t = int(input())

while t:
    d = {'a','e','i','o','u'}

    S = input()
    count = 0
    i = 0
    flag = False
    while i<len(S):
        if count>2:
            flag = True
        if S[i] in d:
            count += 1
        else:
            count = 0
        i += 1

    if flag:
        print("Happy")
    else:
        print("Sad")

    t -= 1