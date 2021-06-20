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

void solve(){

}

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<int> heights(n), res,extra;
          inp_vector(heights);
          while(heights.size() > 0 and heights[0] != heights[heights.size() -1]){
               int count = 0, e = n-2;
               sort(heights.begin(), heights.end());

               while(e>=0){
                    if(heights[e] != heights[e+1]){
                         res.push_back(heights[e]);
                         res.push_back(heights[e+1]);
                         count +=2;
                         e -= 2;
                    }
                    else{
                         extra.push_back(heights[e]);
                         count++;
                         e--;
                    }
               }
               if(count != n)
                    res.push_back(heights[e+1]);
               heights = extra;
          }

          for(int i=0; i<heights.size(); i++)
               res.push_back(heights[i]);
          disp_vector(res);
          cout<<endl;


     }
}