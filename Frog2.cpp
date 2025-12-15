#include<bits/stdc++.h>
typedef long long ll;
#define endl '\n'
using namespace std;

long long func(int n,int k,vector<int>&h,vector<long long>&dp)
{
  if(n==0) return 0;
  if(n<0) return 0;
  if(dp[n]!= -1) return dp[n];
  
   long long mn = LLONG_MAX;
   for(int i=1;i<=k;i++)
   {
    if(n-i >=0)
    {
      
     long long tmp = abs(h[n] - h[n-i]) + func(n-i,k,h,dp);
     mn  = min(mn,tmp);
    }
   }
  
  
 
   return dp[n] = mn;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
  
   int n,k ; cin>>n>>k;
   vector<int>h(n);
   for(int i=0;i<n;i++) cin>>h[i];
    vector<long long>dp(n+1,-1);
   n--;
  
   cout<<func(n,k,h,dp);
    
 
  
}