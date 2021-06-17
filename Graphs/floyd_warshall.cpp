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

void floyd_warshall(vector<vector<int>>&matrix){
     // Code here
     // relax the nodes k times
     for(int k = 0; k<matrix.size(); k++){
          
          // relaxation process by iterating the entire matrix
          for(int i=0; i<matrix.size(); i++){
               for(int j = 0; j<matrix[i].size(); j++){
                    // -1 vali condition checks ki pehle se koi raasta ni hai to chahe kaisa 
                    // bhi raasta mile simply update kardo
                    if(matrix[i][j] == -1 || matrix[i][j] > matrix[i][k] + matrix[k][j]){
                    // ho sakta hai raasta ho hi na i -> ka or k -> j, us case me don't
                    // update anything
                    if(matrix[i][k] != -1 and matrix[k][j] != -1)
                         matrix[i][j] = matrix[i][k] + matrix[k][j];
                    }
               }
          }
     }
}
int main(){
     int V;
     cin>>V;
     vvi matrix(V, vi(V, -1));
     inp_vvi(matrix);
     floyd_warshall(matrix);
     disp_vvi(matrix);
}