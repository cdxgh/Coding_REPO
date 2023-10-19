#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long pro = 1;
		for(int i =0; i<n; ++i){
			int x;
			cin>>x;
			pro = pro * x;

		}
		int digit = pro % 10;
		if(digit == 2 || digit == 5 || digit ==3){
			cout<<"YES\n";
		}	
		else{
			cout<<"NO\n";
		}
	}
}