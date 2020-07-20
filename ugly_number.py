'''
Ugly Number II

Solution
Write a program to find the n-th ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.

Draw a tree,to find N = 2^p * 3^q * 5^r and various possible numbers by multiplying with 2/3/5

Then draw a table with rows as various ugly number,and maintain three indexes. fill the min of rows in an ugly array and also increment its respective index.

'''

class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly = [1]*n
        count = 1
        idx2, idx3, idx5 = 0, 0, 0
        while count < n:
            val2 = ugly[idx2]*2
            val3 = ugly[idx3]*3
            val5 = ugly[idx5]*5
            val = min(val2, val3, val5)
            if val == val2: idx2 += 1
            if val == val3: idx3 += 1
            if val == val5: idx5 += 1
            ugly[count] = val
            count += 1

        return ugly[n-1]

      
