#include <bits/stdc++.h>
using namespace std;
void printf(int index,vector<int> &ds,int arr[],int n){
    if(index==n){
        for(auto i : ds){
            cout<< i << " ";
        }
        cout<<endl;
        return;
    } 
    ds.push_back(arr[index]);
    printf(index+1,ds,arr,n);
    ds.pop_back();
    printf(index+1,ds,arr,n);
}
int solve(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
     }
    vector<int> ds;
    printf(0,ds,arr,n);

    cout<<"\n\n";
}

int main() {

ios::sync_with_stdio(false);
cin.tie(nullptr);
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
int t;
cin>> t;
while(t--){
    solve();
}
return 0;

}
