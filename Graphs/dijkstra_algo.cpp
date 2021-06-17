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

vi dijkstra(vvi adj[], int source, int vertices){
     vi dist(vertices, INT_MAX);
     vb vis(vertices, false);
     set<pair<int,int>> spset;

     dist[source] = 0;
     vis[source] = true;
     spset.insert({dist[source], source});

     while(!spset.empty()){
          auto x = *spset.begin();
          spset.erase(x);
          int u = x.second;
          vis[u] = true;

          for(auto nbr:adj[u]){
               int v = nbr[0];
               int wt = nbr[1];
               if(!vis[v] and dist[v] > dist[u] + wt){
                    spset.erase({dist[v], v});
                    dist[v] = dist[u] + wt;
                    spset.insert({dist[v], v});
               }
          }
     }
     return dist;
}

int main(){
     int V,edges;
     cin>>V>>edges;
     vvi adj[V+1];
     for(int i=0; i<edges; i++){
          int u,v,wt;
          cin>>u>>v>>wt;
          adj[u].push_back({v,wt});
          // adj[v].push_back({u,wt});
     }

     vi dist;
     dist = dijkstra(adj, 0, V);
     disp_vector(dist);

}