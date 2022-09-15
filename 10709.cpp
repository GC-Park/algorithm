#include<bits/stdc++.h>
using namespace std;

int h, w, n,ch=0;
char c[104][104];
string s;

int main(){
	cin >> h >> w;
	for(int i=0; i<h; i++){
		cin >> s;
		for(int j=0; j<s.size(); j++){
			if(s[j]=='c'){
				ch=1;
				n=0;
				cout << "0" << " ";
			}else{
				if(ch==0){
					cout << "-1" << " ";
				}else if(ch==1){
					n++;
					cout << n << " ";
				}
			}
		}
		ch=0;
		n=0;
		cout << "\n";
	}
}
