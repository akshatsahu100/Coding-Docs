#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void inp_vector(vi &a){ for(int j=0; j<(int)a.size(); j++){ cin>>a[j]; }}

int main(){
     int t;
     cin>>t;

     while(t--){
          int m;
          cin>>m;

          vi arr(m);
          inp_vector(arr);
          
          sort(arr.begin(), arr.end());

          for(int j=0; j<arr.size(); j++){
               if(arr[j] % 2 == 0)
                    cout<<arr[j]<<" ";
          }

          for(int j=arr.size() - 1; j>= 0; j--){
               if(arr[j] % 2 != 0)
                    cout<<arr[j]<<" ";
          }

          cout<<endl;

     }
}