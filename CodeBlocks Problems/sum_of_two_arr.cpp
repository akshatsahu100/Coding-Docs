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

void print(vi vec,vi vec2){
     int carry = 0, k=0;
     for(int i=0; i<min(vec.size(),vec2.size()); i++){
          int temp = vec[i] + vec2[i] + carry;
          int rem = temp%10;
          carry = temp/10;
          vec[i] = rem;
          k++;
     }
     for(int i=k; i<vec.size(); i++){
          int temp = vec[i] + carry;
          int rem = temp%10;
          carry = temp/10;
          vec[i] = rem;
     }
     if(carry)
          vec.push_back(carry);
     for(int i=vec.size() - 1; i>=0; i--)
          cout<<vec[i]<<`, `;
     cout<<`END`;
}
int main(){
     int n;
     cin>>n;
     vi vec(n);
     inp_vector(vec);
     int m;
     cin>>m;
     vi vec2(m);
     inp_vector(vec2);
     reverse(vec.begin(), vec.end());
     reverse(vec2.begin(), vec2.end());
     if(n > m)
          print(vec, vec2);
     else
          print(vec2, vec);

}