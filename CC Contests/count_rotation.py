def count_rotations_binary(nums):
    lo = 0
    hi = len(nums)-1
    
    while lo<hi:
        mid = (lo+hi)//2

        mid_number = nums[mid]
        
        # Uncomment the next line for logging the values and fixing errors.
        print("lo:", lo, ", hi:", hi, ", mid:", mid, ", mid_number:", mid_number)
        
        if mid>0 and nums[mid - 1]>nums[mid]:
            # The middle position is the answer
            return mid
        
        if nums[mid] <= nums[hi]:
            # Answer lies in the left half
            hi = mid 
        
        else:
            # Answer lies in the right half
            lo = mid
    
    return mid + 1 if mid>0 else 0

nums = list(map(int, input().split()))
print(count_rotations_binary(nums))