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

bool powerOf2(ll num){

     for(int i=0; i<64; i++){
          ll x = 1 << i;
          if(x == num)
               return true;
          if(x > num)
               return false;
     }

     return false;
}

int main(){
     ll t;
     cin>>t;
     while(t--){
          ll a,b;
          cin>>a>>b;
          if(b<a){
               cout<<"No"<<endl;
               continue;
          }

          if(b == a or a == 0){
               cout<<"Yes"<<endl;
               continue;
          }

          if(a == 1 and powerOf2(b)){
               cout<<"Yes"<<endl;
               continue;
          }

          cout<<"No"<<endl;
     }
}