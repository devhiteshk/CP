t = int(input())

while t:

    n = int(input())
    S = input()

    arr = [i for i in S]
    
    A = []
    B = []

    ans = ""
    a = 0
    b = len(S)-1

    while a<b:
        A.append(arr[a])
        a += 1
        B.append(arr[b]) 
        b -= 1

    if len(arr)%2 == 1:
        A.append(arr[len(A)])

    while A and B:
        a1 = A.pop(0)
        if a1 == "1":
            ans = ans + "1"
        else:
            ans = "0" + ans

        b1 = B.pop(0)
        if b1 == "1":
            ans = "1" + ans
        
        else:
            ans = ans + "0"

    if A:
        a1 = A.pop(0)
        if a1 == "1":
            ans = ans + "1"
        else:
            ans = "0" + ans

    print(ans)

    t -= 1
