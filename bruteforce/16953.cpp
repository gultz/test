#include <iostream>
#include <algorithm>
using namespace std;
int go(int a, int b){
	if(a==b) return 1;
	if(a>b) return -1;
	int t1 = go(a*2,b);
	int t2 = go(a*10+1,b);
	if(t1 ==-1 && t2 ==-1) return -1;
	if(t1 ==-1) return t2+1;
	if(t2 ==-1) return t1+1;
	return min(t1,t2)+1;

}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<go(a,b)<<'\n';
	return 0;
}