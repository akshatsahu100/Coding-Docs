#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int candles[n];
    for(int i=0; i<n; i++){
        cin>>candles[i];
    }
    int greatest_height = 0;
    for(int i=0; i<n; i++){
        if(candles[i] > greatest_height)
            greatest_height = candles[i];
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(candles[i] == greatest_height)
            count++;
    }
    cout<<count;
   
}