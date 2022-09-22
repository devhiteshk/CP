s = input()

d = {'--':'2', '-.':'1', '.':'0'}

ans = ""
i = 0
curr = ""
while i<len(s):

    curr += s[i]

    if curr in d:
        ans += d[curr]
        curr = ""
    
    i += 1

print(ans)