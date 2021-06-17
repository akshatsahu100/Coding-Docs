#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> pile(n);
    vector<int> temp(101, 0);

    for(int i=0; i<n; i++){
        cin>>pile[i];
        temp[pile[i]]++;
    }
    int pairs = 0;
    for( int i=0; i<101; i++){
        pairs += temp[i]/2;
        /// means same as pairs = pairs + temp[i]/2;
    }

    cout<<pairs;
}