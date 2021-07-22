#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> oldrow; 
    int spaces = n-1;
    while(n--){
        vector<int> newrow;

        if(oldrow.empty()){
            newrow.push_back(1);
        }
        else{
            newrow.push_back(1);
            for(int i=1; i<oldrow.size(); i++){
                int num = oldrow[i] + oldrow[i-1];
                newrow.push_back(num);
            }
            newrow.push_back(1);
        }
        for(int i=0; i<spaces; i++)
            cout<<` `;
        spaces--;
        for(int i=0; i<newrow.size(); i++)
            cout<<newrow[i]<<` `;
        cout<<endl;

        oldrow.clear();
        oldrow = newrow;
    }
}
