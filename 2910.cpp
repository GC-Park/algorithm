#include<bits/stdc++.h>
using namespace std;

int n, c, se, mvn=1;
map<int, int> m;
map<int, int> mv;

bool cmp(const pair<int, int>& a, const pair<int, int>&b){
	if(a.second == b.second) return mv[a.first] < mv[b.first];
	return a.second > b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n >> c;
	for(int i=0; i<n; i++){
		cin >> se;
		m[se]++;
		if(mv[se]==0){
			mv[se] = mvn;
			mvn++;
		}
	}
	vector<pair<int, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), cmp);
	
	for (auto num : vec) {
		for(int i=0; i<num.second; i++){
			cout << num.first << " ";
		}
	}

	return 0;
}
