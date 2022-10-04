#include<bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, x, y, visited[104][104], mx=-1;
string s;
char a[104][104];
vector<pair<int, int>> ld;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i=0; i<n; i++){ 
		cin >> s;
		for(int j=0; j<m; j++){
			a[i][j]=s[j];
			if(a[i][j]=='L'){
				ld.push_back({i, j});
			}
		}
	}
	
	for(pair<int, int> ml:ld){
		fill(&visited[0][0], &visited[0][0]+104*104, 0);
		queue<pair<int, int>> q;
		visited[ml.first][ml.second] = 1;
		q.push({ml.first, ml.second});
		while(q.size()){
			tie(y, x) = q.front(); q.pop();
			for(int i=0; i<4; i++){
				int ny = y + dy[i];
				int nx = x + dx[i];
				if(ny<0 || ny>=n || nx<0 || nx>=m || a[ny][nx]=='W') continue;
				if(visited[ny][nx]) continue;
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny, nx});
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				mx=max(mx, visited[i][j]);
			}
		}
	}
	
	cout << mx-1;
}
