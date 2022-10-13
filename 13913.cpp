#include<bits/stdc++.h>
using namespace std;
#define prev aaa
const int MAX=200004;
int visited[MAX], prev[MAX], ret;
vector<int> v;

int main(){
	int n, m;
	cin >> n >> m;
	visited[n]=1;
	queue<int> q;
	q.push(n);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==m){
			ret=visited[m];
			break;
		}
		for(int next : {now-1, now+1, now*2}){
			if(0>next || next >= MAX || visited[next]) continue;
			q.push(next);
			visited[next] = visited[now]+1;
			prev[next]=now;
		}
	}
	
	for(int i=m; i!=n; i=prev[i]){
		v.push_back(i);
	}
	v.push_back(n);
	reverse(v.begin(), v.end());
	cout << ret-1 << "\n";
	for(auto a:v) cout << a << " ";
	return 0;
}
