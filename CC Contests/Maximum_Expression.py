t = int(input())

while(t):
    n = int(input())
    S = input()

    d = {'+': 0, '-': 0}

    arr = []

    for i in range(len(S)):
        if S[i] in d:
            d[S[i]] += 1

        else:
            arr.append(S[i])
    
    arr.sort()
    count_plus = d['+']
    count_minus =d['-']

    ans = ""

    i = len(arr)
    while i>count_plus + count_minus:
        ans += arr[-1]
        i -= 1
        arr.pop()
    
    while count_plus:
        ans += '+'
        ans += arr[-1]
        count_plus -= 1
        arr.pop()
    
    while count_minus:
        ans += '-'
        ans += arr[-1]
        count_minus -= 1
        arr.pop()

    print(ans)

    t -= 1