#include<bits/stdc++.h>
using namespace std;

int n, w, h, r;
vector<pair<int, int>> v;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> w >> h;
		v.push_back({w, h});
	}
	for(auto a:v){
		r=1;
		for(auto b:v){
			if(a.first < b.first && a.second < b.second) r++;
		}
		cout << r << " ";
	}
}
