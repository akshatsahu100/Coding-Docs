#include<bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    int pcount = 0, ncount = 0, zcount = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < 0)
            ncount++;
        else if(arr[i] > 0)
            pcount++;
        else
            zcount++;
    }
    
    float pratio = (float)pcount/arr.size();
    float nratio = (float)ncount/arr.size();
    float zratio = (float)zcount/arr.size();
    cout<<pratio<<endl<<nratio<<endl<<zratio;
    
}

int main(){
    ////////// without declaring size ////////////
    vector<int> vec;
    
    for(int i=0; i<5; i++){
        int temp;   
        cin>>temp;
        vec.push_back(temp);
    }
    plusMinus(vec);
    
    
}