#include <iostream>
#include <vector>
using namespace std;

int n,s;
int cnt =0;
void go(vector<int> &a,int index, int sum){
    if(index==n && sum ==s){
        cnt+=1;
        return;
    }
    if(index==n && sum !=s) return;
    go(a,index+1,sum+a[index]);
    go(a,index+1,sum);
    
}

int main(){
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    go(a,0,0);
    if(s==0) cnt-=1;
    cout<<cnt<<'\n';
    return 0;


}
