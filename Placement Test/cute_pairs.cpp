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

vi solve(vvi &queries){
     vector<int> ans; 
     for(int i=0; i<queries.size(); i++){
          int l = queries[i][0], r = queries[i][1];
          int x = 0;
          for(int i=1; i<=9; i++){
               int t = round(pow(10, i)) - 1;
               if(t >= l and t<= r)
                    x++;
               if(t> r)
               break;
          }
          ans.push_back(((r-l+1)*x) % MOD);
     }
     disp_vector(ans);
     return ans;
}

int main(){
     int n;
     cin>>n;
     vvi queries(n, vi(2));
     inp_vvi(queries);
     vi ans = solve(queries);
}