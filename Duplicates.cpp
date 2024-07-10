#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> mp;
	int res=0;
	while(n--){
		int val;
		cin>>val;
		mp[val]++;
		if(mp[val]>1){
			res++;
		}
	}
	cout<<"Elements to be deleted: "<<res;
}
