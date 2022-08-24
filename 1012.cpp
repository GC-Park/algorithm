#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

const int max_n = 104;
int c, n, m, l, ys, xs, ret, ny, nx;
int a[max_n][max_n], visited[max_n][max_n];

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i=0; i<4; i++){
		ny = y+dy[i];
		nx = x+dx[i];
		if(ny < 0 || nx < 0 || ny>=n || nx>=m) continue;
		if(a[ny][nx] == 1 && !visited[ny][nx]){
			dfs(ny, nx);
		}
	}
	return ;
}

int main(){
	cin >> c;
	for(int t=0; t<c; t++){
		ret = 0;
		if(t>0){
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					a[i][j]=0;
					visited[i][j]=0;
				}
			}
		}
		scanf("%d %d %d", &m, &n, &l);
		for(int i=0; i<l; i++){
			scanf("%d %d", &xs, &ys);
			a[ys][xs]= 1;
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]==1 && !visited[i][j]){
					ret++; dfs(i, j);
				}
			}
		}
		cout << ret << "\n";
	}
	return 0;
}
