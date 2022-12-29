#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	vector<int> d(n+1);

	//vector 기본값이 0이구나 이제야 알앗네~ ㅅㅂ 

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			d[i] = max(d[i],d[i-j] + a[j]);
		}
	}
	cout<<d[n]<<'\n';
	return 0;

	 
	
}