t = int(input())

while(t):

    n = int(input())
    s = input()

    if len(s)%2 == 1:
        print("NO")
    
    else:
        s1 = s[:n//2]
        s2 = s[n//2:]

        if s1+s2 == s and s2+s1 == s:
            print("YES")

        else:
            print("NO")

    t -= 1