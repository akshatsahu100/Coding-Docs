#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {4 , 5 ,8 , 8, 9};
    int target = 90;
    int found = 0;

    for(int i=0; i<5; i++){
        if(arr[i] == target){
            cout<<"Target found"<<endl;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout<<"Number not found"<<endl;

}