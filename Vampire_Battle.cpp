#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=accumulate(arr, arr + n, 0);
	int res=0;
	sort(arr,arr+n,greater<int>());
	for(int i=0;i<n;i++){
		if(res>=sum) break;
		res+=arr[i];
		sum-=arr[i];
	}
	cout<<res;
}
