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

bool undirected_cycle(vi graph[], int s, vi &vis, int parent){
     if(vis[s])
          return true;
     
     vis[s] = 1;
     bool found = false;
     for(auto v:graph[s]){
          if(v != parent)
               found =  found || undirected_cycle(graph, v, vis, s);
     }
     return found;
}

bool directed_cycle(vi graph[], int s, vi &vis, vi &order){
     if(order[s])
          return true;
     order[s] = 1;
     vis[s] = 1;
     for(auto v:graph[s]){
          if(!vis[v]){
               bool found = directed_cycle(graph, v, vis, order);
               if(found == true)
                    return true;
          }
          else if(order[v]) return true;
     }
     order[s] = 0;
     return false;

}

int main(){

     int n,m;
     cin>>n>>m;

     // must be an undirected graph
     vi graph[n];
     for(int i=0; i<m; i++){
          int u,v;
          cin>>u>>v;
          graph[u].push_back(v);
          graph[v].push_back(u);
     }
     vi vis(n, 0);
     bool f = false;
     for(int i=0; i<n; i++){
          f = f || undirected_cycle(graph, i, vis, -1);
     }
     cout<<f<<endl;

     fill(vis.begin(), vis.end(), 0);
     
     // now for directed graph
     cout<<endl<<"Next Directed graph"<<endl;
     vi directed_graph[n];
     for(int i=0; i<m; i++){
          int u,v;
          cin>>u>>v;
          directed_graph[u].push_back(v);
     }
     vi stk(n,0);
     int found = false;
     for(int i=0; i<n; i++){
          if(!vis[i])
               found = found || directed_cycle(directed_graph, i, vis, stk);
     }
     cout<<found;



}