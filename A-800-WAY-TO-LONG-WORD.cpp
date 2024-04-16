#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    for(int i=0; i<n; i++){
        cin>>a;
        int k=a.length();
        if(k>10){
            cout<<a[0]<<k-2<<a[k-1]<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }

}

 