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

int fib_top_down(int n, vi dp){
     if(n ==0 or n == 1)
          return n;
     if(dp[n] != -1)
          return dp[n];
     return dp[n] = fib_top_down(n-1, dp) + fib_top_down(n-2, dp);
}

int fib_bottom_up(int n){
     vi dp(n+1, -1);
     dp[0] = 0;
     dp[1] = 1;

     for(int i=2; i<n+1; i++){
          dp[i] = dp[i-1] + dp[i-2];
     } 

     return dp[n];
}

int fib_bottom_up_space_opt(int n){
     int a = 0;
     int b = 1;
     int c;
     for(int i=2; i<n+1; i++){
          c = a + b;
          a = b;
          b = c;
     } 

     return c;
}

int main(){
     int n;
     cin>>n;
     vi dp(n+1, -1); 
     cout<<fib_top_down(n, dp)<<endl;
     cout<<fib_bottom_up(n)<<endl;
     cout<<fib_bottom_up_space_opt(n)<<endl;
}