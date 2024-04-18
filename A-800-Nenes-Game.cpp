#include<iostream>
#include<vector>
using namespace std;
void helper( ){
    int asize,nsize;
    cin>>asize>>nsize;
    vector<int> a(asize);
    vector<int> n(nsize);

    for(int i=0;i<asize;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<nsize;i++){
        cin>>n[i];
    }
    for(int i=0;i<n.size();i++){
        cout<<min(a[0]-1,n[i])<<" ";
    }
    cout<<endl;
} 

int main(){
    int k;//numbers of test cases
    
    cin>>k;
    

    for(int i=0;i<k;i++){
        helper();
    }

}