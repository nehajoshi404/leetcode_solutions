class Solution {
public:
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
    int reverse(int x) {
    int num = x;
    bool negativeFlag = false; 
    
    int rev_num = 0; 
    while (num != 0) 
    { 
        int curr_digit = num % 10; 
  
        
        if (rev_num > INT_MAX/10 || rev_num < INT_MIN/10){
             return 0;
        }
        rev_num = (rev_num * 10) + curr_digit; 
        num = num / 10; 
    } 
  
    return rev_num;
    }
}; 