#include<iostream>
using namespace std;
int main(){
    int k,n,a,b;
    cin>>k;
    
    for(int i=0;i<k;i++){
        cin>>n>>a>>b;
        cout<<min(a*n, b*(int)(n/2) + a*(n%2))<<endl;
    }
}