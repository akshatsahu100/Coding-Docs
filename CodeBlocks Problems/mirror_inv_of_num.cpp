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
void disp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cout<<a[i]<<` `;  }}
void disp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++){ for(int j=0; j<(int)vec[i].size(); j++) cout<<vec[i][j]<<` `; cout<<endl;}}
void inp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++) for(int j=0; j<(int)vec[i].size(); j++) cin>>vec[i][j]; }


void mirror_inv(vi vec){
     bool ans = true;
    for(int i=0; i<vec.size(); i++){
         int idx = vec[i];
         int val = i;
         if(vec[idx] != val){
              ans = false;
              break;
         }
    }
     if(ans) cout<<`true`;
     else cout<<`false`;
     cout<<endl;
}
int main(){
     int t;
     cin>>t;
     while(t--){
          string s;
          cin>>s;
          vi vec;
          for(int i=0; i<s.size(); i++){
               int temp = s[i] - '0' - 1;
               vec.push_back(temp);
          }
          // disp_vector(vec);
          reverse(vec.begin(), vec.end());
          mirror_inv(vec);

     }
}