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

int find(int x, vector<int> &parent){
     if(parent[x] == -1)
          return x;
     return parent[x] = find(parent[x], parent);
}

void dsu_union(int x, int y, vector<int> &parent, vector<int> &rank){
     int s1 = find(x,parent);
     int s2 = find(y,parent);
     if(rank[s1] < rank[s2]){
          parent[s1] = s2;
          rank[s2] += rank[s1];
     }
     else{
          parent[s1] = s2;
          rank[s2] += rank[s1];
     }
}

int spanningTree(int V, vector<vector<int>> adj[])
{
     vector<vector<int>> edgelist;
     for(int i=0; i<V; i++){
          for(auto j:adj[i]){
               int u = i, v = j[0], wt = j[1];
               edgelist.push_back({wt, u, v});
          }
     }
     sort(edgelist.begin(), edgelist.end());
     
     // creating DSU logic
     vector<int> parent(V, -1);
     vector<int> rank(V, 1);
     int mst = 0;
     for(auto edge: edgelist){
          int u = edge[1];
          int v = edge[2];
          int wt = edge[0];

          if(find(u,parent) != find(v,parent)){
               dsu_union(u,v, parent, rank);
               mst += wt;
          }
     }
     
     return mst;
}

int main(){
     int V, edges;
     
     cin>>V>>edges;
     vvi weighted_graph[V];
     for(int i=0; i<edges; i++){
          int u,v,wt;
          cin>>u>>v>>wt;
          weighted_graph[u].push_back({v,wt});
          weighted_graph[v].push_back({u,wt});

     }
     int mst = spanningTree(V, weighted_graph);
     cout<<mst;
}