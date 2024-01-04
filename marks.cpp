#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,multiset<string>>m;
	int n;
	cin>>n;
	for(int i =0; i<n; ++i){
		int marks;
		string name;
		cin>>name>>marks;
		m[marks].insert(name);
	}

	auto it = --m.end();
	while(true){
		auto &s = (*it).second;
		int marks = (*it).first;
		for(auto student : s){
			cout<<student << " "<<marks<<endl;
		}
		if(it == m.begin()) break;
		it--;
	}
}