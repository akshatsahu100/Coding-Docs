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
    string s;
    cin>>s;

    if(s.length() <= 3){
        cout<<"Error"<<endl;
        continue;
    }
    else if(s[0] == '<' && s[1] == '/' && s[s.length()-1] == '>'){
        if( (s[2] >= 'a' && s[s.length()-2] <= 'z') ||  (s[2] >= '0' && s[s.length()-2] <= '9') ){
            cout<<"Success"<<endl;
          //   continue;
        }
    }
    else{
        cout<<"Error"<<endl;
    }


}
}