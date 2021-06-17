#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
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

 bool canPair(vector<int> nums, int k) {
        // Code here.
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % k != 0 || nums.size() % 2 != 0)
            return false;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i] % k]++;
        }
        
        for(auto i:mp){
            if(i.first*2 == k && i.second>=2)
                return true;
            else if(i.first*2 ==k && i.second <2)
                return false;
            else if(mp[k - i.first])
                return true;
        }
        
        return false;
    }

int main(){
    int n,k;
    cin>>n>>k;
    vi arr(n);
    inp_vector(arr); 
    cout<<canPair(arr,k);
}