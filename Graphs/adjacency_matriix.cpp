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


void addedge(int graph[][5], int vertex1, int vertex2){
     graph[vertex1][vertex2] = 1;
}

int main(){
     int graph[5][5] = {0};
     addedge(graph, 0, 4);
     addedge(graph, 4, 2);
     addedge(graph, 1, 3);
     addedge(graph, 1, 2);
     for(int i=0; i<5; i++){
          for(int j = 0; j<5; j++)
               cout<<graph[i][j]<<" ";
          cout<<endl;
     }
}