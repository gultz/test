#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int a[1001][1001];
int d[1001][1001];

int go(int i, int j){
	if(i <1 || j<1) return 0;
	if(d[i][j] >=0) return d[i][j];
	d[i][j] = max(go(i-1,j),go(i,j-1))+a[i][j];
	return d[i][j];
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}

	memset(d,-1,sizeof(d));
	cout<<go(n,m)<<'\n';
	return 0;


}