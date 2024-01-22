#include<bits/stdc++.h>;
using namespace std;
/**Given Q queries, Q <= 10^5
*in each query given V,
* print subtree sum of V & Number of evevn numbers
* Print subtree sum V & Number of even numbers
* kin subtree of V
**/
const int N 1e5 + 10;
int subtree_sum[N];
int even_ct[N];
vector<int>g[N];
void dfs(int vertex, int par){
	if(vertex % 2 == 0) {
		even_ct[vertex]++;}

	subtree_sum[vertex]+= vertex;
	for(int child : g[vertex]){
		if(child == par) continue;
		dfs(child, vertex);
		subtree_sum[vertex] += subtree_sum[child];
		even_ct[vertex] += even_ct[child];
	}
}
int main(){
	int n;
	cin>>n;
	int x, y;
	cin>>x>>y;
	g[x].push_back(y);
	g[y].push_back(x);

}
dfs(1);
for(int i = 1; i <=n; ++i){
	cout<<subtree_sum[i]<<" " << even_ct<<endl;

}
// int q;
// while(q--){
// 	int v;
// 	cin>>v;
// 	cout<<subtree_sum[v]<<" " << even_ct[v]<<endl;

//}