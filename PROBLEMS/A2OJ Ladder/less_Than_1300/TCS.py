S= input()
s = [i for i in S]
d = ['1','2','3','4','5','6','7','8','9','0']

low = 0
high = len(s) - 1

while low<high:
    if s[low] in d:
        low += 1
    elif s[high] in d:
        high -= 1
    
    else:
        s[low],s[high] = s[high],s[low]
        low += 1
        high -= 1

print("".join(s))