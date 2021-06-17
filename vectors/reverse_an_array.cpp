#include<bits/stdc++.h>
using namespace std;


void rev(vector<int> &arr, int start, int end){
     while(start<=end){
          swap(arr[start++], arr[end--]);
     }
}

int main(){
     vector<int> arr = { 1, 2 , 3 , 4, 5};
     rev(arr, 0, 3);
     for(int i=0; i<arr.size(); i++)
          cout<<arr[i]<<" ";
}