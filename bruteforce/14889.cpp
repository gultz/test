#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
char a[20];
bool check[20];
int n;
vector<string> ans;
bool ok(string num){
    for(int i=0; i<n; i++){
        if(a[i]=='>'){
            if(num[i] < num[i+1]) return false;
        }else if(a[i]=='<'){
            if(num[i] > num[i+1]) return false;
        }
    }
    return true;

}

void go(int index, string num){
    if(index ==n+1){
        if(ok(num)){
            ans.push_back(num);
        }
        return ;
    }

    for(int i=0; i<=9; i++){
        if(check[i]) continue;
        check[i] = true;
        go(index+1,num+to_string(i));
        check[i] = false;
    }
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    go(0,"");
    auto p = minmax_element(ans.begin(),ans.end());
    cout<<*p.second<<'\n';
    cout<<*p.first<<'\n';

    return 0;

    
}