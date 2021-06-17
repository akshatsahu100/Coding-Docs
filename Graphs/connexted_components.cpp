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

void addedge(vi graph[], int vertex1, int vertex2){
     graph[vertex1].push_back(vertex2);
     graph[vertex2].push_back(vertex1);
}

void dfs(vi graph[], int s, vi &vis){
     if(vis[s])
          return;
     vis[s] = 1;
     for(auto v:graph[s])
          if(!vis[v])
               dfs(graph, v, vis);
}

int getsize(vi graph[], int s, vi &vis){
     if(vis[s])
          return 0;
     int ans = 1;
     vis[s] = 1;
     for(auto v:graph[s]){
          if(!vis[v]){
               ans = ans + getsize(graph, v, vis);
               // vis[v] = 1;
          }
     }
     return ans;
}

int main(){
     int v,e;
     cin>>v>>e;
     vi graph[v];

     for(int i=0; i<e; i++){
          int u,v;
          cin>>u>>v;
          addedge(graph, u, v);
     }

     // no of connected components
     vi vis(v,0);
     int cc = 0;
     for(int i=0; i<v; i++){
          if(!vis[i]){
               cc = cc + 1;
               dfs(graph, i, vis);
          }
     }
     cout<<"No of connected comp : "<<cc<<endl;

     // find size of all connected components and store them in an array
     vi conn_comp;
     fill(vis.begin(), vis.end(), 0);

     for(int i=0; i<v; i++){
          if(!vis[i]){
               conn_comp.push_back(getsize(graph,i,vis));
          }
     }
     for(auto i:conn_comp)
          cout<<i<<" ";
     
}