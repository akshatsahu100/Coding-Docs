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


int isNegativeWeightCycle(int n, vector<vector<int>>edgeList){

	vector<int> dist(n, INT_MAX/2);
     dist[0] = 0;

     // relax all edges n - 1 times
    	for(int i = 0; i < n-1; i++) {
    		for(auto e: edgeList) {
    			if(dist[e[0]] == INT_MAX)
    				continue;
    			if(dist[e[0]] + e[2] < dist[e[1]]) {
    				dist[e[1]] = dist[e[0]] + e[2];
    			}
    		}
    	}

    	// one more relaxation to be done to check for neg weight cycle
    	vector<int> temp = dist;
    	for(auto e: edgeList) {
          if(dist[e[0]] == INT_MAX)
               continue;
          if(dist[e[0]] + e[2] < dist[e[1]]) {
               dist[e[1]] = dist[e[0]] + e[2];
          }
     }
     
    	if(temp != dist)
    	return 1;
    	return 0;
    	
        
	}

int main(){
     int n,edges;
     cin>>n>>edges;
     vvi edgelist;
     for(int i = 0; i<edges; i++){
          int u,v,wt;
          cin>>u>>v>>wt;
          edgelist.push_back({u,v,wt});
     }
     // use bellman ford algo to determine if a neg wt cycle is present of not
     cout<<isNegativeWeightCycle(n,edgelist);
}