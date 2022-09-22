t = int(input())

while t:

    n = int(input())

    arr = list(map(int, input().split()))

    q = int(input())

    while q:

        p, k = map(int, (input().split()))

        hash_v = []

        for i in arr:
            if i % p == 0:
                hash_v.append(1)
            else:
                hash_v.append(0)

        # print(hash_v)

        max_dish = []

        for i in arr:
            if i % p == 0:
                max_dish.append(i)

        max_dish.sort()
        # print(max_dish)

        ans = []
        j = len(max_dish) - 1
        for i in range(k):
            if hash_v[i] == 1:
                if j >= 0:
                    ans.append(max_dish[j])
                    j -= 1
            else:
                ans.append(arr[i])

        print(sum(ans))

        q -= 1

    t -= 1
