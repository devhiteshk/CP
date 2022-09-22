
def findDisappearedNumbers(nums):
        
        # [4,3,2,7,8,2,3,1]
        
        i = 0
        while i<len(nums):
            print(nums[nums[i] - 1])
            
            curr = nums[i]
            print(curr)
            if nums[curr - 1] == nums[i] :
                i += 1
                
            else:
                temp = nums[nums[i] - 1]
                nums[nums[i]-1] = nums[i]
                nums[i] = temp
            print(nums)
        return nums

arr = [4,3,2,7,8,2,3,1]
findDisappearedNumbers(arr)