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
void inp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cin>>a[i]; }}
void disp_vector(vi &a){ for(int i=0; i<(int)a.size(); i++){ cout<<a[i]<<" ";  }}
void disp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++){ for(int j=0; j<(int)vec[i].size(); j++) cout<<vec[i][j]<<" "; cout<<endl;}}
void inp_vvi(vvi &vec){ for(int i=0; i<(int)vec.size(); i++) for(int j=0; j<(int)vec[i].size(); j++) cin>>vec[i][j]; }

void generatePrimeFactors(int MAX, int factor[])
{
    factor[1] = 1;
 
    for (int i = 2; i < MAX; i++)
        factor[i] = i;
 
    for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;
 
    for (int i = 3; i * i < MAX; i++) {
        if (factor[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}

int calculateNoOFactors(int n, int factor[]){
     if (n == 1)
        return 1;
 
    int ans = 1;
    int dup = factor[n+1];
    int c = 1;
    int j = (n+1) / factor[n+1];
    while (j != 1) {
        if (factor[j] == dup)
            c += 1;
        else {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }
        j = j / factor[j];
    }
    ans = ans * (c + 1);
    return ans;
}    

int solve(int n){
     int factor[n+1] = { 0 };
     generatePrimeFactors(n+1, factor);
     long long ans = 0;
     for(int i=1; i<n; i++){
          ans += calculateNoOFactors(i, factor);
     }
     return ans;
}

int main(){
     int n;
     cin>>n;
     cout<<solve(n);
}