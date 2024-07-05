#include<iostream>
using namespace std;

    
int main(){

    char a[]="haseen";
    char b[]="haseenn";
    int i,j;
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
           break;
        }
        if(a[i]==b[j]){
        cout<<"equal"<<endl;
        }
        else if(a[i]<b[j]){
            cout<<"smaller";
        }
        else{
            cout<<"greater"<<endl;
        }

       

    }
return 0;
}


