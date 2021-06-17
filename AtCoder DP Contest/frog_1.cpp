#include<bits/stdc++.h>
using namespace std;
////// All macros
#define ll long long
#define vi vector<int>
#define vp vector<pair<int,int>> 
#define vc vector<char>


////// all consts reqd
ll MOD = 1e9 + 7;
double pi = 3.14159;


//////// all helper functions
void inp_vector(vi &a){
     for(int i=0; i<(int)a.size(); i++){
          cin>>a[i];
     }
}
void disp_vector(vi &a){
     for(int i=0; i<(int)a.size(); i++){
          cout<<a[i]<<" ";
     }
}

int frogjump(vi vec, int idx){
     if(idx == (int)vec.size() - 1)
          return 0;
     if(idx >= (int)vec.size())
          return INT_MAX/5;
     
     int ans1 = abs(vec[idx] - vec[idx + 1]) + frogjump(vec, idx + 1);
     int ans2 = INT_MAX/2;
     if(idx + 2 < (int)vec.size())
          ans2 = abs(vec[idx] - vec[idx + 2]) + frogjump(vec, idx + 2);

     return min(ans1,ans2);

}
int main(){
     int dp[100001];
  int n;
  cin>>n;
  vi heights(n);
  for(int i=0; i<n; i++){
       cin>>heights[i];
  }

  cout<<frogjump(heights, 0);

}