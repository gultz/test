#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<string> &a,int start_row, int end_row, int start_col, int end_col){

    int n = a.size();
    //가로체크
    int ans =1;
    for(int i=start_row; i<=end_row; i++){
        int cnt =1;
        for(int j=1; j<n; j++){
            if(a[i][j-1] == a[i][j]){
                cnt+=1;
            }else{
                cnt=1;
            }
            if(ans<cnt) ans= cnt;
        }
    }
    //세로차크
    for(int i =start_col; i<=end_col; i++){
        int cnt=1;
        for(int j=1; j<n; j++){
            if(a[j-1][i] == a[j][i]){
                cnt+=1;
            }else{
                cnt=1;
            }
            if(ans<cnt) ans =cnt;
        }

    }
    return ans;
    
}

int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans =1;

    //swap
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //가로스왑
            if(j+1<n){
                swap(a[i][j],a[i][j+1]);
                int temp = check(a,i,i,j,j+1);
                if(ans<temp) ans=temp;
                swap(a[i][j+1],a[i][j]);
            }
            //세로스왑
            if(i+1<n){
                swap(a[i+1][j],a[i][j]);
                int temp =check(a,i,i+1,j,j);
                if(ans<temp) ans=temp;
                swap(a[i+1][j],a[i][j]);
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}