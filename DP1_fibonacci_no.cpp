class Solution {
public:
    int fib(int n) {
        //checking base case
        if(n<=1)
          return n;
        // dp[0] = 0, dp[1] = 1 changes to prev2 and prev respectively.
        int prev2 = 0;
        int prev = 1;
       // start from idx 2 to n 
        for(int i=2;i<=n;i++){
            int cur_i = prev + prev2; // dp[i] = dp[i-1] + dp[i-2] -----> cur_i = prev + prev2;
            prev2 = prev;
            prev = cur_i;
        }
         
         return prev;
    
    }
};
