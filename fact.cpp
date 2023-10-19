#include<bits/stdc++.h>
using namespace std;
// const int N = 1e7+10;
// long long hsh[N];
// long long int ar[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		string s;
		cin>>s;
		while(q--){
			int l,r;
			cin>>l>>r;
			int hsh[26];
			for(int i =0; i<26; ++i){
				hsh[i] =0;
			}
			l--,r--;
			for(int i=l; i<=r; ++i){
				hsh[s[i]-'a']++;
			}
			int oddct =0;
			for(int i =0; i<26; ++i){
				if(hsh[i] % 2 !=0) oddct++;
			}
			if(oddct > 1) cout<<"no\n";
			else cout<<"yes\n";
		}
	}
}