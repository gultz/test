#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[1001];
int d[1001];
int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
		d[i] = 1;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]<a[j] && d[i]<d[j]+1){
				d[i] = d[j]+1;
			}
		}
	}
	int ans =1;

	for(int i=0; i<n; i++){
		if(d[i]>ans) ans = d[i];
	}

	cout<<ans<<'\n';
	return 0;
}