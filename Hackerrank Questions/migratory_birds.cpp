#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxans = 0,type = 0;
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> temp(6,0);

    for(int i=0; i<n; i++){
        cin>> vec[i];
        temp[vec[i]]++;
    }

    for(int i=0; i<6; i++){
        if(temp[i] > maxans){
            maxans = temp[i];
            type = i;
        }
    }   
    cout<<type;
}