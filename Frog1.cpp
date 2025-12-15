#include<bits/stdc++.h>
typedef long long ll;
#define endl '\n'
#define INF 1000000000
const double PI=3.141592653589793238460;
#define  M 1000000007
const int N=1e5+10;
long long int fact[N];
using namespace std;

long long func(int n,vector<int>&h,vector<long long>&dp)
{
  if(n==0) return 0;
  //if(n<0) return 0;
  if(dp[n]!= -1) return dp[n];
  
  long long left = abs(h[n] - h[n-1]) + func(n-1,h,dp);
  long long right = LLONG_MAX;
  if(n-2 >=0) right = abs(h[n] - h[n-2]) + func(n-2,h,dp);
   return dp[n] = min(left,right);
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
  
   int n ; cin>>n;
   vector<int>h(n);
   for(int i=0;i<n;i++) cin>>h[i];
    vector<long long>dp(n+1,-1);
  n--;
  
   cout<<func(n,h,dp);
    
 
  
}