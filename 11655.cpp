#include<bits/stdc++.h>
using namespace std;

string s;
int main(){
	getline(cin, s);
	for(int i=0; i<s.size(); i++){
		if(s[i]>='a' && s[i]<='m' || s[i]>='A' && s[i]<='M'){
			cout<<(char)(s[i]+13);
		}else if(s[i]>='n' && s[i]<='z' || s[i]>='N'&& s[i]<='Z'){
			cout<<(char)(s[i]-13);
		}else{
			cout<<s[i];
		}
	}
	return 0;
}
