class Solution {
  public:
  int func(int n,int W,vector<int> &val, vector<int> &wt,vector<vector<int>> &dp)
  {
      if(n<0) return 0;
      if(W == 0) return 0;
      if(dp[n][W] !=-1) return dp[n][W];
      
      int ans1 = func(n-1,W,val,wt,dp);
      int ans2 = INT_MIN;
      if(W - wt[n] >=0) ans2 = func(n-1,W-wt[n],val,wt,dp) + val[n];
     return dp[n][W] = max(ans1,ans2);
      
      
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        return func(n-1,W,val,wt,dp);
        
    }
}; 