'''
in : strs : List[str]
o/p : str
[geek geeko geetama]

Comparing min and max string character by character
When become unequal break and return the min string's characters compared breaking

'''



class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ''
        s1 = min(strs)
        s2 = max(strs)
        for i, c in enumerate(s1):
            if c != s2[i]:
                return s1[:i]
        return s1