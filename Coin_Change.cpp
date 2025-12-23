class Solution {
public:
 int f(int ind,int T,vector<int>& v,vector<vector<int>>& dp)
 {
    if(T == 0) return 0;
    if(ind <0)  return 1e9;
    if(dp[ind][T] !=  -1) return dp[ind][T];

    int NotTake = f(ind-1,T,v,dp);
    int Take = INT_MAX;
    if(v[ind] <=T) Take = 1 + f(ind,T-v[ind],v,dp);

   return dp[ind][T] =  min(Take,NotTake);
 }

    int coinChange(vector<int>& v, int amount) {

     int n = v.size();
     vector<vector<int>>dp(n,vector<int>(amount+1,-1));
     int ans = f(n-1,amount,v,dp);
     if(ans >=1e9) return -1;
     else return ans;   
    }
};