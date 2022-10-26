def max_subarray(numbers):

    """Find a contiguous subarray with the largest sum."""
    best_sum = float('-inf')
    best_start = best_end = 0  # or: None
    current_sum = 0
    for current_end, x in enumerate(numbers):
        if current_sum <= 0:
            # Start a new sequence at the current element
            current_start = current_end
            current_sum = x
        else:
            # Extend the existing sequence with the current element
            current_sum += x

        if current_sum > best_sum:
            best_sum = current_sum
            best_start = current_start
            best_end = current_end + 1  # the +1 is to make 'best_end' match Python's slice convention (endpoint excluded)

    return best_sum, best_start, best_end


t = int(input())

while t:

    n = int(input())

    A = list(map(int, input().split()))

    m = int(input())

    B = list(map(int, input().split()))

    Best_Sum, start_i,end_j = max_subarray(A)

    # print(Best_Sum, start_i, end_j)

    min_index_of_A = 0

    max_index_of_A = len(A)-1

    best_left = 0
    best_right = 0

    for i in range(0,start_i):
        best_left += A[i]

    best_left += Best_Sum

    for i in range(end_j, len(A)-1):
        best_right += A[i]

    best_right += Best_Sum

    if best_left>best_right:
        for k in B:
            if k>0:
                best_left += k
        print(best_left)

    else:
        for k in B:
            if k>0:
                best_right += k
        print(best_right)

    t -= 1