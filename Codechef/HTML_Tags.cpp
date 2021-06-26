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
          string tag;
          cin>>tag;
          bool flag = false;
          if((int)tag.size() <= 3){
               cout<<"Error"<<endl;
               continue;
          } 
          
          if(tag[0] != '<' or tag[1] != '/' or tag[(int)tag.size() - 1] != '>'){
               cout<<"Error"<<endl;
               continue;
          }
          for(int i=2; i<(int)tag.size() - 1; i++){
               if(!(('0' <= tag[i] and tag[i] <= '9') or (tag[i] >= 'a' and tag[i] <= 'z'))){
                    cout<<"Error"<<endl;
                    flag = true;
                    break;
               }
          }
          if(flag)
               continue;
          cout<<"Success"<<endl;

     }
}