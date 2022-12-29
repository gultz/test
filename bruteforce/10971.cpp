#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int w[20][20];

int main(){
    int n;
    cin>>n;

    vector<int> d(n);

    for(int i=0; i<n; i++){
        d[i] = i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>w[i][j];
        }
    }

    int ans =2147483647;
    do{
        if(d[0] !=0) break;
        int sum =0;
        bool ok = true;
        for(int i=0; i<n-1; i++){
            if(w[d[i]][d[i+1]] !=0){
                sum+=w[d[i]][d[i+1]];
            }else{
                ok =false;
            }
        }
        if(w[d[n-1]][0] ==0){
            ok = false;
        }
        if(ok && w[d[n-1]][0] !=0){
            sum+=w[d[n-1]][0];
        }
      
        if(ok && ans>sum) ans= sum;
    }while(next_permutation(d.begin()+1,d.end()));

    cout<<ans<<'\n';

    return 0;


}