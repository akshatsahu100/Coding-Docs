#include<bits/stdc++.h>
using namespace std;

int main(){
    ////////// without declaring size ////////////
    vector<int> vec;
    
    for(int i=0; i<5; i++){
        int temp;   
        cin>>temp;
        vec.push_back(temp);
    }

    cout<<"vector size : "<<vec.size()<<endl;
    ///////////// sort function /////////////////
    sort(vec.begin(), vec.end());
    
    for(int i=0; i<5; i++){
        cout<<vec[i]<<" ";
    }

}