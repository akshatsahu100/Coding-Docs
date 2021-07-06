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
     while(t--){
          int n,k;
          cin>>n>>k;
          vi vec(n);
          inp_vector(vec);
          vi mapped(32, 0);
          for(int i=0; i<n; i++){
               int count = 0;
               int num = vec[i];
               while(num){
                    if((num & 1)){
                         mapped[count]++;
                    }
                    num = num >> 1;
                    count++;
               }

          }
          int operations = 0;
          for(int i=0; i<32; i++){
               operations += mapped[i]/k;
               if(mapped[i] % k != 0)
                    operations++;
          }
          cout<<operations<<endl;
     }
}