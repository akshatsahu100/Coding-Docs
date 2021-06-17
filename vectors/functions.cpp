#include<bits/stdc++.h>
using namespace std;

int evencount(vector<int> vec){
    
}


int main(){
    ////////// without declaring size ////////////
    vector<int> vec;
    
    for(int i=0; i<5; i++){
        int temp;   
        cin>>temp;
        vec.push_back(temp);
    }
    int count = evencount(vec);
    
    vector<int> vec2 = {1,2,4,6,7,8};
    int count2 = evencount(vec2);

    cout<<count<<" "<<count2;
    
}