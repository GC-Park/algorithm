#include<bits/stdc++.h>
using namespace std;
#define prev geun
int n, w, A=0, B=0, a, b, rA=0, rB=0, ch=0;
string s, prev;

void goA(){
	if(ch==1){
		a=48*60;
		b=atoi(prev.substr(0,2).c_str())*60+atoi(prev.substr(3,2).c_str());
		rA += a-b;
		return;
	}
	a=atoi(s.substr(0,2).c_str())*60+atoi(s.substr(3,2).c_str());
	b=atoi(prev.substr(0,2).c_str())*60+atoi(prev.substr(3,2).c_str());
	rA += a-b;
}

void goB(){
	if(ch==1){
		a=48*60;
		b=atoi(prev.substr(0,2).c_str())*60+atoi(prev.substr(3,2).c_str());
		rB += a-b;
		return;
	}
	a=(atoi(s.substr(0,2).c_str())*60)+atoi(s.substr(3,2).c_str());
	b=(atoi(prev.substr(0,2).c_str())*60)+atoi(prev.substr(3,2).c_str());
	rB += a-b;
}

void prinT(int r){
	if((r/60)<10){
		cout << "0" << r/60 << ":";
	}else{
		cout << r/60 << ":";
	}
	if((r%60)<10){
		cout << "0" << r%60 << "\n";
	}else{
		cout << r%60 << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> w >> s;
		if(A>B) goA();
		else if(B>A) goB();
		if(w==1) A++;
		else B++;
		prev = s;
	}
	ch=1;
	if(A>B) goA();
	else if(B>A) goB();
	prinT(rA);
	prinT(rB);
	return 0;
}
