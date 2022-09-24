n = int(input())

# AMAZING SOLUTION OF FIBONACCI


def fib(n):
    pre = [1, 1]
    curr = ""
    i = 0
    j = 1
    while len(curr) != n:
        pre.append(pre[i]+pre[j])

        if len(str(pre[-1])) == n:
            print(pre[-1])
            break
        else:
            i += 1
            j += 1


if n == 1:
    print(1)
else:
    fib(n)
