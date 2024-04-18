#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helper(){
    int  n,count=0;
    
    cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    sort(a.begin(),a.end());
    
    for(int i=1;i<n;i++){
        
        if(a[i-1]==a[i]){
            count = count+1;
        }
    }
    cout<<count<<endl;
    
}

int main(){
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        helper();
    }
}