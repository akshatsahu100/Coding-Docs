#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>> 
#define vvp vector<vector<pair<int,int>>> 
#define vc vector<char>
ll MOD = 1e9 + 7;
double pi = 3.14159;
void inp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cin>>a[i]; }}
void disp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cout<<a[i]<<" ";  }}
void disp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++){ for(int j=0; j<(int)vec[i].size(); j++) cout<<vec[i][j]<<" "; cout<<endl;}}
void inp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++) for(int j=0; j<(int)vec[i].size(); j++) cin>>vec[i][j]; }

int msto_td(int n, vi dp){
     if(n == 1)
          return 0;
     if(dp[n] != 0)
          return dp[n];
     int ans1 = INT_MAX/5;
     int ans2 = INT_MAX/5;
     int ans3 = INT_MAX/5;
     if(n%3 == 0)
          ans1 = msto_td(n/3, dp);
     if(n%2 == 0)
          ans2 = msto_td(n/2, dp);
     ans3 = msto_td(n-1, dp);
     return dp[n] = 1 + min(ans1, min(ans2, ans3));
}
int msto_bu(int n){
     vi dp(n+1, -1);
     dp[1] = 0;
     for(int i=2; i<=n; i++){
          int ans1 = INT_MAX/5;
          int ans2 = INT_MAX/5;
          int ans3 = INT_MAX/5;
          if(i%3 == 0)
               ans1 = dp[i/3];
          if(i%2 == 0)
               ans2 = dp[i/2];
          ans3 = dp[i-1];
          dp[i] = 1 + min(ans1, min(ans2, ans3));
     }
     return dp[n];
}

int main(){
     int n;
     cin>>n;
     vi dp(n+1, 0);
     cout<<msto_td(n, dp)<<endl;
     cout<<msto_bu(n)<<endl;
}