#include <iostream>
#include <algor>
using namespace std;
int a[1001][3];
int d[1001][3];

int main(){
	 ios_base::sync_with_stdio(false);

	int n;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		/* code */
		for (int j=0; j<3; ++j)
		{
			/* code */
			cin>>a[i][j];
		}
	}

	for (int i = 1; i <=n; ++i)
	{
		/* code */
		d[i][0] = min(d[i-1][1],d[i-1][2])+a[i][0];
		d[i][1] = min(d[i-1][0],d[i-1][2])+a[i][1];
		d[i][2] = min(d[i-1][0],d[i-1][1])+a[i][2];

	}

	cout<<min({d[n][0],d[n][1],d[n][2]})<<'\n';
	return 0;


}