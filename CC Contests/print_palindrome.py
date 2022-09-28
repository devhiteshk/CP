def isPalin(S):
    len_S = len(S)//2
    j = -1
    for i in range(len_S):
        if S[i] != S[j]:
            return False
        j -= 1
    return True

def print_palin(S):
    d = {}
    for i in range(len(S)):
        
        for j in range(i,len(S)):
            curr = ""
            for k in range(i,j+1):
                curr += S[k]

        print(curr)
        if curr in d:
            continue

        else:
            d[curr] = curr
            if isPalin(curr):
                print(curr)

S = input()
print_palin(S)