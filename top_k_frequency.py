'''
 Top K Frequent Elements

Solution
Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

creates a dict count -> element,count is the key
like a max heap
    

'''

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        if len(nums) is k:
            return nums
         
        counts = Counter(nums)
        return heapq.nlargest(k,counts.keys(),key = counts.get) 
