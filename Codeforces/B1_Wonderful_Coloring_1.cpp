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

int main(){
     int t;
     cin>>t;
     while (t--){
          string str;
          cin>>str;
          unordered_map<char,int> freq;
          for(int i=0; i<str.size(); i++){
               freq[str[i]]++;
          }
          int r=0, b = 0, alt = 0;
          for(auto i:freq){
               if(i.second >= 2){
                    r++,b++;
               }
               else{
                    if(alt == 0)
                         r++;
                    else
                         b++;
                    alt = (alt + 1)%2;
               }
          }
          cout<<min(r,b)<<endl;
          
     }
     
}