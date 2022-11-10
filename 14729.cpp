#include<bits/stdc++.h>
using namespace std;

priority_queue<double> pq;
vector<double> v;

int n;
double t;
int main(){
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> t;
		if(pq.size()==7){
			pq.push(t); pq.pop();
		}else{
			pq.push(t);
		}
	}
	while(pq.size()){
		v.push_back(pq.top()); pq.pop();
	}
	reverse(v.begin(), v.end());
	for(double i : v) printf("%.3lf\n", i);
	return 0;
}
