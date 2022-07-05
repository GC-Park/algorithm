#include<bits/stdc++.h>
using namespace std;
//int A, B, C, a[3], b[3];
//
//int main(){
//	int sum = 0, s=0;
//	int p;
//	cin >> A >> B >> C;
//	B*=2;
//	C*=3;
//	for(int i=0; i<3; i++){
//		cin >> a[i] >> b[i];
//	}
//	sort(a, a+3);
//	sort(b, b+3);
//	for(int i=a[0]; i<=b[2]; i++){
//		p = count(a, a+3, i);
//		s=s+p;
//		p = count(b, b+3, i);
//		s=s-p;
//		
//		if(s==1){
//			sum+=A;
//		}else if(s==2){
//			sum+=B;
//		}else if(s==3){
//			sum+=C;
//		}
//	}
//	cout << sum;
//}
int A, B, C, cnt[104], a, b, s=0;
int main(){
	cin >> A >> B >> C;
	for(int i=0; i<3; i++){
		cin >> a >> b;
		for(int j=a; j<b; j++){
			cnt[j]+=1;
		}
	}
	for(int i=0; i<100; i++){
		if(cnt[i]==1) s+=A;
		else if(cnt[i]==2) s+=(B*2);
		else if(cnt[i]==3) s+=(C*3);
	}
	cout << s;
}
