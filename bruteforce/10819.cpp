#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(vector<int> &a){
    int n= a.size();
    int sum =0;
    for(int i=1; i<n; i++){
        sum +=abs(a[i]-a[i-1]);
    }
    return sum;
}


int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int ans =0;

    do{
        int temp = calculate(a);
        ans = max(ans,temp);

    }while(next_permutation(a.begin(),a.end()));

    cout<<ans<<'\n';

    return 0;



}

