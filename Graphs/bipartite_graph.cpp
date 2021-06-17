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

void colorit(vvi graph, vi &color, int i, int curr_col, bool &bipart){
     if(color[i] != -1 && color[i] != curr_col){
            bipart = false;
            return;
        }
        color[i] = curr_col;
        for(auto v:graph[i]){
            if(color[v] == -1)
                colorit(graph, color, v, (curr_col + 1)%2, bipart);
            else if(color[v] != -1 && color[v] != (curr_col + 1)%2){
                bipart = false;
                return;
            }
        }
}
int main(){
     int n,m;
     cin>>n>>m;

     vvi graph(n);
     for(int i=0; i<m; i++){
          int u,v;
          cin>>u>>v;
          graph[u].push_back(v);
          graph[v].push_back(u);
     }

     vi color(n, -1);
     bool isbipartite = true;
     for(int i=0; i<n; i++)
          if(color[i] == -1)
               colorit(graph, color, i, 0, isbipartite);
     
     if(isbipartite) cout<<"its bipartite";
     else cout<<"not bipartite";

}