/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;

        if(x1 > x2 || y1 > y2 || z1 < z2 ){
            cout<<"No"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
           cin>>v[i];
        }
        vector<int> freq(8,0);
        //freq[0] = -1;
        int cnt = 0;
        for(int i=0 ; i< v.size();i++){
            int sum = accumulate(freq.begin(),freq.end(),0);
     //    cout<<"sum "<< sum<<endl;
            if(sum == 7){
                break;
            }
            if(v[i] >= 1 and v[i] <= 7){
               freq[v[i]]++;
            }
             cnt++;


            }
            cout<<cnt<<endl;
        }

    return 0;
}
