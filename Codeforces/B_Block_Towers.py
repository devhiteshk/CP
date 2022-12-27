t = int(input())

while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    fi = arr[0]

    arr1 = arr[1:]
    arr1.sort()

    j = 0

    while j<len(arr1):

        if arr1[j] > fi:
            if (arr1[j] - fi) % 2 == 0:
                fi += (arr1[j] - fi)//2
                arr1[j] -= (arr1[j] - fi)//2
            else:
                fi += (arr1[j] - fi)//2 + 1
                arr1[j] -= ((arr1[j] - fi)//2 - 1)
        
        j += 1
    print(fi)

    t -= 1