// SAME AS FIBONACCI NUMBER PROBLEM WITH SLIGHT DIFFERENT.


class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 1;
        int prev  = 1;
        if(n<=1)
         return 1;
        for(int i=2;i<=n;i++)
        {
            int curr = prev +prev2; 
            prev2 = prev;
            prev = curr;
        }
       
        return prev; 
    }
};
