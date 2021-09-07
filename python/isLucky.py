def isLucky(n):
   if len(str(n)) % 2 != 0:
      return False
   nums = [int(num) for num in str(n)]
   if sum(nums[:len(nums)//2]) == sum(nums[len(nums)//2:]):
      return True
   return False
