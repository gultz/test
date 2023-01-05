#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	vector<int> d(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		d[i] = a[i];
		if(a[i]<d[i-1]+a[i]) d[i] = d[i-1] +a[i];
	}
	int ans = d[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		if(ans<d[i]) ans = d[i];
	}
	cout<<ans<<'\n';
	return 0;
}