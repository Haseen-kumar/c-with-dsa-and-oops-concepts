#include<iostream>
using namespace std;
int main(){
    int a[4]={3,2,2,3};
    int n=4;
    int v=3;
    int i=0;
    while(i<n){
        if(a[i]==v){
            a[i]=0;
            i++;
        }
        else{
            i++;
        }
       
    }
     for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }





    return 0;
}