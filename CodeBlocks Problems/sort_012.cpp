#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int zcount = 0, ocount = 0, tcount = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == 0)
			zcount++;
		else if(arr[i] == 1)
			ocount++;
		else
			tcount++;
	}
     int k=0;
	for(int i=0; i<zcount; i++)
          arr[k++] = 0;
	for(int i=0; i<ocount; i++)
          arr[k++] = 1;
	for(int i=0; i<tcount; i++)
		arr[k++] = 2;
          
	for(int i=0; i<n; i++)
          cout<<arr[i]<<` `;
	
}