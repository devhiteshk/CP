t = int(input())

while(t):

    n = int(input())

    S = input()

    flag = 1

    if "L" not in [i for i in S] or "R" not in [i for i in S]:
        flag = -1

    if flag > 0:
        o = 0
        l_l = 0
        f_r = 0
        
        for i in range(len(S)-1):
            
            if S[i] == "L" and S[i+1] == "R":
                o += 1
                l_l = i+1

            if S[i] == "R" and S[i+1] == "L":
                f_r += 1

        if f_r > 0:
            print(0)
        else:
            if o > 0:
                print(l_l)
            else:
                print(-1)
        
    else:
        print(-1)

    t -= 1