#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    int b[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    for(int i=0; i<3; i++){
        cin>>b[i];
    }

    int a_pts = 0, b_pts = 0;
    for(int i=0; i<3; i++){
        if(a[i] > b[i])
            a_pts++;
        else if(a[i] < b[i])
            b_pts++;
    }

    cout<<a_pts<<" "<<b_pts;
}