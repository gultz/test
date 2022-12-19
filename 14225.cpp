#include <iostream>
using namespace std;

bool c[20*100000+10];
int n;
int a[21];
void go(int index,int sum){
    if(index==n){
        c[sum] = true;
        return;
    }
    go(index+1,sum+a[index]);
    go(index+1,sum);
}

int main(){
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    go(0,0);
    for(int i=1;; i++){
        if(!c[i]){
            cout<<i<<'\n';
            break;
        }
    }

    return 0;

}