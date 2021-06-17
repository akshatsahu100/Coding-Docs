#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int mat[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}