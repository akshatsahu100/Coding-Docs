#include<bits/stdc++.h>
using namespace std;

void call_by_val(int x, int y){
     x = x + 100;
     y = y + 100;
}

void call_by_ref(int &x, int &y){
     x = x + 100;
     y = y + 100;
}

int main(){
     int a = 3, b = 5;
     cout<<a<<" "<<b<<endl;
     call_by_val(a,b);
     cout<<a<<" "<<b<<endl;

     call_by_ref(a,b);
     cout<<a<<" "<<b;
}