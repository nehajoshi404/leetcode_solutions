'''
all subsets 

'''
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        output = [[]]
        n = len(nums)
        for num in nums:
            output += [current + [num] for current in output]
                
        
           
        
        
        return output
        
    

