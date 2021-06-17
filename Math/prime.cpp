#include<bits/stdc++.h>
using namespace std;

bool isprime(long long int x){
    if(x == 1)
        return false;
    if(x == 2)
        return true;
    
    for(long long int i=3; i*i<x; i= i + 2){
        if(x % i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    long long int x;
    cin>>x;
    bool t = isprime(x);
    if(t)
        cout<<x<<" is prime";
    else
        cout<<x<<" is not prime";
}