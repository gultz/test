#include <iostream>
#include <algorithm>
using namespace std;

int a[10];
bool c[10];
int num[10];

void go(int index, int start, int n, int m){
    if(index ==m){
        for(int i=0; i<m; i++){
            cout<<num[a[i]]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i=start; i<n; i++){
        if(c[i]) continue;
        c[i] = true;
        a[index] = i;
        go(index+1,i+1,n,m);
        c[i] = false;
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }

    sort(num,num+n);
    go(0,0,n,m);
    return 0;


}