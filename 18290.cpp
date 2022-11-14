#include <iostream>
using namespace std;

int a[10][10];
bool c[10][10];
int n,m,k;
int ans = -2147483647;
int dx[] ={0,0,1,-1};
int dy[] = {1,-1,0,0};
void go(int px, int py, int cnt, int sum){

}

int main(){
    cin>>n>>m>>k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    go(0,0,0,0);
    cout<<ans<<'\n';
    return 0;

}