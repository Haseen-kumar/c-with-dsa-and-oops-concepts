#include<iostream>
using namespace std;
int main(){

int a[]={5,25,75};
int n= sizeof(a)/sizeof(a[0]);
cout<<n<<endl;
int k=100;
int i,j;
for(i=0;i<=n-2;i++){
    for(j=i+1;j<=n-1;j++){
        if(a[i]+a[j]==k){
            cout<<i+1<<" "<<j+1<<endl;
        }


    }
}



    return 0;
}