#include<bits/stdc++.h>
using namespace std;

int n, m, sum;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		scanf("%1d", &m); 
		sum+=m;
	}
	cout << sum;
}
