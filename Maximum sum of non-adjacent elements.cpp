
int func(int n,vector<int> &v,vector<int>&dp)
{
    if(n == 0) return v[n];
    if(n<0) return 0;
    if(dp[n] !=-1) return dp[n];

    int pick = v[n] + func(n-2,v,dp);
    int NotPick  = func(n-1,v,dp);
    return dp[n] = max(pick,NotPick);
}
int maximumNonAdjacentSum(vector<int> &v){
    // Write your code here.
    int n = v.size();
    vector<int>dp(n+1,-1);
    return func(n-1,v,dp);

}