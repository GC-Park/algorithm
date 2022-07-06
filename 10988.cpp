#include<bits/stdc++.h>
using namespace std;

int s;
	
int main(){
	string v;
	cin >> v; 
	
	s = v.size()/2;
	
	for(int i=0; i<s; i++){
		if(v[i]!=v[v.size()-1-i]){
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
