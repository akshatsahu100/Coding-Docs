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

int main(){
     int n;
     cin>>n;
     vi vec1(n), vec2(n);
     inp_vector(vec1);
     inp_vector(vec2);
     unordered_map<int,int> f;
     for(int i=0; i<n; i++)
          f[vec1[i]]++;
     vi ans;
     for(int i=0; i<vec2.size(); i++){
          if(f[vec2[i]]){
               ans.push_back(vec2[i]);
               f[vec2[i]]--;
          }
     }
     sort(ans.begin(), ans.end());
     cout<<`[`;
     for(int i=0; i<ans.size()-1; i++)
          cout<<ans[i]<<`, `;
     cout<<ans[ans.size() - 1];
     cout<<`]`;


}