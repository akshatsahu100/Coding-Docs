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


long long int topdown(int w, vi &wt, vi &val, int n, vector<vector<ll>> &memo){
     if(n==0 or w ==0)
          return 0;
     if(memo[n-1][w] != -1)
          return memo[n-1][w];
     if(wt[n-1] > w)
          return memo[n-1][w] = topdown(w, wt, val, n-1, memo);
     else
     return memo[n-1][w] = max(val[n-1] + topdown(w - wt[n-1], wt, val, n-1, memo), topdown(w, wt, val, n-1, memo));
}

long long int bottomup(int w, vi &wt, vi &val, int n){
     long long int dp[n+1][w+1];
     for(int i=0; i<n+1; i++){
          for(int j=0; j<w+1; j++){
               if(i == 0 or j == 0)
                    dp[i][j] = 0;
          }
     }

     for(int i=1; i<n+1; i++){
          for(int j=0; j<w+1; j++){
               if(wt[i-1] > j)
                    dp[i][j] = dp[i-1][j];
               else 
                    dp[i][j] = max(dp[i-1][j],val[i-1] + dp[i-1][j-wt[i-1]]);
          }
     }
     return dp[n][w];
}

int main(){
     int n,w;
     cin>>n>>w;
     vi value(n), weight(n);
     for(int i=0; i<n; i++)
          cin>>weight[i]>>value[i];

     vector<vector<ll>> memo(n+1, vector<ll>(w+1, -1));
     // cout<<topdown(w, weight, value, n, memo)<<endl;
     cout<<bottomup(w, weight, value, n)<<endl;
}