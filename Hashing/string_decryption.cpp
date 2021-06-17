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

string decrypt(string str, int n){
     int sum = 0;
     int temp = 0;
     char c;
     string decrypted = "";
     for(int i=0; i<str.size(); i++){
          if(str[i]>= '0' && str[i] <= '9')
               temp = temp*10 + (str[i] - '0');
          else{
               for(int j=0; j<temp; j++)
                    decrypted += c;
               temp = 0;
               c = str[i];
          }
     }
     for(int j=0; j<temp; j++)
          decrypted += c;
     return decrypted;
}

string decrypt_adv(string str, int n){
     int sum = 0;
     int temp = 0;
     string c = "";
     string decrypted = "";
     for(int i=0; i<str.size(); i++){
          if(str[i]>= '0' && str[i] <= '9')
               temp = temp*10 + (str[i] - '0');
          else{
               for(int j=0; j<temp; j++)
                    decrypted += c;
               if(temp == 0 && c != "")
                    c += str[i];
               else{
                    c = str[i];
                    temp = 0;
               }
          }
     }
     for(int j=0; j<temp; j++)
          decrypted += c;
     return decrypted;
}

int main(){
     string str;
     cin>>str;
     int n;
     cin>>n;

     // cout<<decrypt(str,n);
     cout<<decrypt_adv(str,n);
}