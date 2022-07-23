# cook your dish here
def checkpalin(s):          # PALINDROME HELPER
    e = -1
    for i in range(len(s)//2):
        if s[i] != s[e]:
            return False
        e -= 1
    return True


def solve(s):              # MAIN SOLVER
    if(checkpalin(s) == True):
        return s
    else:
        if(len(s) < 2):
            return s
        else:
            low = 0
            high = len(s)
            arr = [char for char in s]
            while low<high:
                if arr[low] != arr[high - 1]:
                    s = "".join(arr[: low - 1] + arr[low + 1: ])
                    # print(s)
                    solve(s)
                else:
                    continue
                low += 1
                high -=1

# HANDLE INPUT
t = int(input())
while(t):
    try:
        n = int(input())
        s = input()
        # print(n,s)
        st = solve(s)
        print(st)  # SOLVE QUESTION
    except:
        pass
    t = t-1

