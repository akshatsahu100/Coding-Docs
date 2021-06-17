#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int arr[5];
    long long int maximum = 0, minimum = LONG_MAX, sum = 0;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        if(arr[i] > maximum)
            maximum = arr[i];
        if(arr[i] < minimum)
            minimum = arr[i];
        sum = sum + arr[i];
    }
    
    cout<<(sum - maximum)<<" "<<(sum - minimum);
}