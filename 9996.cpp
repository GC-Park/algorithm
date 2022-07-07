#include<bits/stdc++.h>
using namespace std;

int main(){
	
}

//string s;
//int n;
//vector<string> v;
//
//vector<string> split(string input, string delimiter) {
//	vector<string> ret;
//	long long pos=0;
//	string token = "";
//	while((pos=input.find(delimiter)) != string::npos){
//		token = input.substr(0, pos);
//		ret.push_back(token);
//		input.erase(0, pos+delimiter.length());
//	}
//	ret.push_back(input);
//	return ret;
//}
//
//int main(){
//	int c;
//	cin >> n;
//	cin >> s;
//	vector<string> a = split(s,"*");
//	for(int i=0; i<n; i++){
//		c=0;
//		string b;
//		cin>> b;
//		if((s.size()-1)>b.size()){
//			v.push_back("NE");
//			continue;
//		}
//		for(int j=0; j<a[0].size(); j++){
//			if(a[0][j]!=b[j]){
//				c=1;
//			}
//		}
//		for(int j=0; j<a[1].size(); j++){
//			int s1, s2;
//			s1= a[1].size()-1;
//			s2=b.size()-1;
//			
//			if(a[1][s1-j]!=b[s2-j]){
//				c=1;
//			}
//		}
//		if(c==1){
//			v.push_back("NE");
//		}else{
//			v.push_back("DA");
//		}
//	}
//	int i;
//	for(i=0; i<n-1; i++){
//		cout << v[i] << "\n";
//	}
//	cout << v[i] ;
//	return 0;
//}
