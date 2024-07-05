#include<iostream>
using namespace std;
int main(){
    char a[]="finding";
    int i,j;

    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                cout<<"duplicate "<<a[j]<<endl;
            }
        }
       
    }
    







    return 0;
}