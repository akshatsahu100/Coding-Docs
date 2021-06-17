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
     int n,m;
     cin>>n>>m;
     vvi graph(n);
     vi indeg(n, 0);

     // input and create a directed graph
     for(int i=0; i<m; i++){
          int x,y;
          cin>>x>>y;
          graph[x].push_back(y);
          indeg[y]++;
     }

     queue<int> q;
     for(int i=0; i<n; i++){
          if(indeg[i] == 0)
               q.push(i);
     }

     while(!q.empty()){
          int u = q.front();
          cout<<u<<" ";
          q.pop();

          for(auto i:graph[u]){
               indeg[i]--;
               if(indeg[i] == 0)
                    q.push(i);
          }
     }

}