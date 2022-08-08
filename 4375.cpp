#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	while(scanf("%d", &n)!=EOF){
		int c=1, r=1;
		while(1){
			if(c%n==0){
				cout << r << "\n";
				break;
			}else{
				c=(c*10)+1;
				c %= n;
				r++;
			}
		}
	}
	return 0;
}
