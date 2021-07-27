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



bool bottomup(vi &nums, int N, int sum){
     bool dp[N+1][sum+1];
        for(int i=0; i<N+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0 and j>0)
                    dp[i][j] = false;
                else if (j==0)
                    dp[i][j] = true;
            }
        }
        for(int n=1; n<N+1; n++){
            for(int w=1; w<sum+1; w++){
                if(nums[n-1] > w)
                    dp[n][w] = dp[n-1][w];
                else 
                    dp[n][w] = dp[n-1][w] || dp[n-1][w - nums[n-1]];
            }
        }
        
        return dp[N][sum];
     
     
}

int main(){
     int n,sum;
     cin>>n>>sum;
     vi nums(n);
     inp_vector(nums);
     
     cout<<bottomup(nums, n, sum);
     
}