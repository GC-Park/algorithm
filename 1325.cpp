#include<bits/stdc++.h>
using namespace std;

int n, n2, s, f, mx, ret, visited[10004];
vector<int> v[10004];
map<int, int> m;

int dfs(int here){
	ret++;
	visited[here] = 1;
	for(int there : v[here]){
		if(visited[there]) continue;
		dfs(there);
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> n2;
	for(int i=0; i<n2; i++){
		cin >> s >> f;
		v[f].push_back(s);
	}
	for(int i=1; i<=n; i++){
		fill(&visited[0], &visited[0]+10004, 0);
		ret = 0;
		m[i]=dfs(i);
		mx=max(mx, m[i]);
	}
	for(auto i : m){
		if(i.second==mx) cout << i.first << " ";
	}
	return 0;
}
