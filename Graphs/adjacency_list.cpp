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

     // Weighted graph now 
     vector<pair<int,int>> weighted_graph[5];
     addedge_weighted(weighted_graph, 0, 2, 5);
     addedge_weighted(weighted_graph, 3, 1, 6);
     addedge_weighted(weighted_graph, 2, 4, 3);
     addedge_weighted(weighted_graph, 2, 3, 4);

     for(int i=0; i < vertices; i++){
          cout<<i;
          for(int j=0; j < weighted_graph[i].size(); j++){
               cout<<" -> "<<weighted_graph[i][j].first<<","<<weighted_graph[i][j].second;
          }
          cout<<endl;
     }

}