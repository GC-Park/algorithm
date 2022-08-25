#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
const int max_n=104;
int n, x, y, ret=1, ny, nx, t;
int a[max_n][max_n], b[max_n][max_n], visited[max_n][max_n];

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i=0; i<4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny<0 || nx<0 || ny>=n || nx>=n) continue;
		if(b[ny][nx]==0 && !visited[ny][nx]){
			dfs(ny, nx);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	for(int d=1; d<=100; d++){
		t = 0;
		fill(&visited[0][0], &visited[0][0]+104*104, 0);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(b[i][j]==1) continue;
				if(a[i][j]<=d) b[i][j]=1;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(b[i][j]==0 && !visited[i][j]){
					t++;
					dfs(i, j);
				}
			}
		}
		ret = max(ret, t);
	}
	cout << ret;
	return 0;
}
