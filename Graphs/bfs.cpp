#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vp vector<pair<int,int>> 
#define vc vector<char>
ll MOD = 1e9 + 7;
double pi = 3.14159;
void inp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cin>>a[i]; }}
void disp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cout<<a[i]<<" ";  }}

// for undirected graph non weighted
void addedge(vi graph[], int vertex1, int vertex2){
     graph[vertex1].push_back(vertex2);
     graph[vertex2].push_back(vertex1);
}
void addedge_weighted(vector<pair<int,int>> graph[], int vertex1, int vertex2 ,int weight){
     graph[vertex1].push_back({vertex2, weight});
     graph[vertex2].push_back({vertex1, weight});
}

void bfs(vi graph[], int start){
     queue<int> q;
     q.push(start);
     vector<bool> visited(5, false);
     visited[start] = true;
     while(!q.empty()){
          int v = q.front();
          cout<<v<<" ";
          q.pop();

          for(int i=0; i<graph[v].size(); i++){
               if(!visited[graph[v][i]]){
                    q.push(graph[v][i]);
                    visited[graph[v][i]] = true;
               }
          }
     }
}

int main(){
     int vertices = 5;
     vi graph[vertices];

     // undirected graph non weighted
     addedge(graph, 0, 2);
     addedge(graph, 3, 1);
     addedge(graph, 2, 4);
     addedge(graph, 2, 3);


     for(int i=0; i<vertices; i++){
          cout<<i;
          for(int j=0; j<graph[i].size(); j++){
               cout<<" -> "<<graph[i][j];
          }
          cout<<endl;
     }

     

     /// BFS Traversal ///
     bfs(graph, 0);
}
