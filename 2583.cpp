#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int xc, yc, k, x1, yst, x2, y2, ret, ny, nx, t, tn;
int a[104][104], tarray[104];
int visited[104][104];
void dfs(int y, int x){
	visited[y][x] = 1;
	t++;
	for(int i=0; i<4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >=yc || nx >=xc) continue;
		if(a[ny][nx] == 0 && !visited[ny][nx]){
			dfs(ny, nx);
		}
	}
	return;
}

int main(){
	cin >> xc >> yc >> k;
	for(int i=0; i<k; i++){
		cin >> x1 >> yst >> x2 >> y2;
		for(int xs=x1; xs<x2; xs++){
			for(int ys=yst; ys<y2; ys++){
				a[xs][ys] = 1;
			}
		}
	}
	for(int i=0; i<yc; i++){
		for(int j=0; j<xc; j++){
			if(a[i][j] == 0 && !visited[i][j]){
				ret++;
				dfs(i, j);
				tarray[tn] = t;
				t=0;
				tn++;
			}
		}
	}
	sort(tarray, tarray+tn);
	cout << ret << '\n';
	for(int i=0; i<tn; i++){
		cout << tarray[i] << " ";
	}
	return 0;
}
