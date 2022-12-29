#include <iostream>
#include <vector>
using namespace std;

int a[21][21];


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int ans =-1;

    for(int i=0; i<(1<<n); i++){
        vector<int> first,second;
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                first.push_back(j);
            }else{
                second.push_back(j);
            }
        }
            if(first.size() !=n/2) continue;
            int t1 =0;
            int t2=0;
                for(int i=0; i<n/2; i++){
                    for(int j=0; j<n/2; j++){
                        if(i==j) continue;
                            t1+=a[first[i]][first[j]];
                            t2+=a[second[i]][second[j]];
                         }
                }

            int diff =t1-t2;
            if(diff<0) diff= -diff;
            if(ans==-1 || ans>diff){
                ans =diff;
            }
        }
    
    
    cout<<ans<<'\n';
    return 0;

}

