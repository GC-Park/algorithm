#include<bits/stdc++.h>
using namespace std;
int N, K, words[51];
string s;

int count(int mask){
	int cnt = 0;
	for(int word:words){
		if(word && (word & mask)==word)cnt++;
	}
	cout << "count : " << cnt << "\n";
	return cnt;
}
int go(int index, int k, int mask){
	if(k<0) return 0;
	if(index == 26) return count(mask);
	int ret = go(index+1, k-1, mask | (1<<index));
	if(index != 'a'-'a' && index != 'n'-'a' && index != 't'-'a' && index != 'i'-'a' && index != 'c'-'a'){
		cout << index <<" " << k << "\n";
		ret = max(ret, go(index+1, k, mask));
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> K;
	for(int i=0; i<N; i++){
		cin >> s;
		for(char str : s){
			words[i] |= (1 << (str-'a'));
		}
	}
	cout << go(0, K, 0) << "\n";
	return 0;
}
