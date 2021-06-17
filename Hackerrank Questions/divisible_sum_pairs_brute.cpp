#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,k;
     cin>>n>>k;
     vector<int> vec(n);
     for(int i=0; i<n; i++){
          cin>>vec[i];
     }
     int count = 0;
     for(int i=0; i<n; i++){
          for(int j=i+1; j<n; j++){
               if((vec[i] + vec[j]) % k == 0 )
                    count++;
          }
     }    
     cout<<count;
}