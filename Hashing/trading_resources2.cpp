#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
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

int main(){
     int n,m;
     cin>>n>>m;
     unordered_map<int,int> civ;
     while(m--){
          int x,y;
          cin>>x>>y;
          civ[x] = y;
     }

     bool ansfound = false;
     for(auto entry:civ){
          if(civ[entry.second] == 0)
               continue;

          if(civ[entry.first] != civ[entry.second] && civ[civ[entry.second]] != entry.first){
               cout<<"NO";
               ansfound = true;
               break;
          }
     }

     if(!ansfound)
          cout<<"YES";
}