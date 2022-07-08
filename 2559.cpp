#include<bits/stdc++.h>
using namespace std;

int n, c, s;
int a[100004], p[100004];
vector<int> v;
int main(){
	cin >> n >> c;
	
	for(int i=1; i<=n; i++){
		cin >> a[i];
		p[i]=p[i-1]+a[i];
	}
	
	for(int i=c; i<=n; i++){
		s=p[i]-p[i-c];
		v.push_back(s);
	}
	
	s= *max_element(v.begin(), v.end());
	cout << s;
	return 0;
	
}
