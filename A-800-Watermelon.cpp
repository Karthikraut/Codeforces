#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
   bool flag =false;
   for(int i=2; i<w; i++){
        if(i%2==0 && ((w-i)%2)==0){
            flag=true;
            break;
        }
   }
   if(flag){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   

}