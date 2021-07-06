#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>> 
#define vvp vector<vector<pair<int,int>>> 
#define vc vector<char>
ll MOD = 1e9 + 7;
double pi = 3.14159;
void inp_vector(vi &input2){ for(int i=0; i<(int)input2.size(); i++){ cin>>input2[i]; }}
void disp_vector(vi &input2){ for(int i=0; i<(int)input2.size(); i++){ cout<<input2[i]<<" ";  }}
void disp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++){ for(int j=0; j<(int)vec[i].size(); j++) cout<<vec[i][j]<<" "; cout<<endl;}}
void inp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++) for(int j=0; j<(int)vec[i].size(); j++) cin>>vec[i][j]; }

int main(){
     int maxCost(int input1, int input2[])
{
 int l = 1, r = 1;
    int mx = 0, k;
    for (int i = 0; i < input1; ++i)
        mx = max(mx, input2[i]);
    int count[mx + 1];
    memset(count, 0, sizeof(count));
 
    for (int i = 0; i < input1; i++)
        count[input2[i]]++;
    int res[mx + 1];
    res[0] = 0;
    l = min(l, r);
    for (int num = 1; num <= mx; num++) {
 
        k = max(num - l - 1, 0);

        res[num] = max(res[num - 1], num * count[num] + res[k]);
    }
    return res[mx];
}
     
}