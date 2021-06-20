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
     int n,q;
     cin>>n>>q;
     vi vec(n);
     inp_vector(vec);
     sort(vec.begin(), vec.end());
     while(q--){
          int x; cin>>x;
          int sign = 1;
          bool found = binary_search(vec.begin(), vec.end(), x);
          if(found)
               cout<<"0"<<endl;
          else{
               int idx = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
               if((n - idx) % 2 == 0)
                    cout<<"POSITIVE"<<endl;
               else
                    cout<<"NEGATIVE"<<endl;
          }
     }
}