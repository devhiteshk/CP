import bisect
t = int(input())

# def lower_bound(begin,end,compare,array):
#     lb = len(array)-1
#     for i in range(begin, end):
#         if array[i] >= compare:
#             lb = i
#             break
#     return lb


while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    if arr[1] == arr[n-1] or arr[0] == arr[n-2] or arr[0] == arr[-1]:
        print("YES")

    else:
        print("NO")

    t -= 1