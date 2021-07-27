#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n = str.length();
    int m  = ceil(float(sqrt(n))); // calculate the size of the smallest square
    vector<vector<char>>arr(m,vector<char>(m,'.')); // make a square

    int r=m-1,c=0,i=0;
    while(i<n){  // bcz we are rotating the matrix after filling 
        arr[r][c]=str[i]; // so we are filling rotated matrix
        i++;
        r--;
        if(r<0){
            c++;
            r=m-1;
        }
    }
    for(int i=0;i<m;i++){ // print the matix as told in the question
        for(int j=0;j<m;j++)
            cout<<arr[i][j];
    }
    return 0;
}
