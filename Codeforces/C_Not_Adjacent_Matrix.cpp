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
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          if(n == 2)
               cout<<"-1"<<endl;
          else if(n == 1)
               cout<<"1"<<endl;
          else{
               vvi mat(n, vi(n, 0));
               int startj = 1;
               int num = 1;
               for(int i=0; i<n; i++){
                    for(int j = startj; j<n; j+=2){
                         mat[i][j] = num++;
                    }
                    startj = (startj + 1) % 2;
               }
               if(n %2 == 0)
                    startj = (startj + 1)%2;

               for(int i=0; i<n; i++){
                    for(int j = startj; j<n; j+=2){
                         mat[i][j] = num++;
                    }
                    startj = (startj + 1) % 2;
               }
               disp_vvi(mat);
               cout<<endl;

          }
     }
}