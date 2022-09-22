n ,t = map(int, input().split())

s = input()

S = [i for i in s]

while(t):
    i = 0
    while i <len(S)-1:
        if S[i] == 'B' and S[i+1] == 'G':
            S[i],S[i+1] = S[i+1], S[i]
            i += 2
        else:
            i += 1
    t -= 1


print("".join(S))