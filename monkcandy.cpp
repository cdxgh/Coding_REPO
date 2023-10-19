#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		multiset<long long> bags;
		for(int i =0;i<n; ++i){
			long long  ccnt;
			cin>>ccnt;
			bags.insert(ccnt);

		}
		long long tc = 0;
		for(int i =0; i<k; ++i){
			auto last_it = (--bags.end());
			long long  ccnt = *last_it;
			tc += ccnt;
			bags.erase(last_it);
			bags.insert(ccnt/2);

		}
		cout<< tc <<endl;

	}
}