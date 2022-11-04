#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int hsh[N];
int multiples_ct[N];
int main(){

int n;
cin>>n;
int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		hsh[x]++;
	}
	for(int i=0;i<N;++i){
		for(int j=i;j<N;j+=i){
			multiples_ct[i]+=hsh[j];
		}
	}
	for(int i=0;i<10;++i){
		cout<<i<<" "<<multiples_ct[i]<<endl;
	}
int q;
cin>>q;
while(q--){
	int p,q1;
	cin>> p>> q1;
	long long lcm= p* 1LL * q1 / __gcd(p,q1);
	long ans = multiples_ct[p]+ multiples_ct[p];
	if(lcm < N){
		ans -= multiples_ct[lcm];

	}
	cout<<ans<<"\n";
}

}