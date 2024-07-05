#include<iostream>
using namespace std;

int main(){
    char a[]="haseen";

   int j,i;
   char t; //t can be int ;
    for(j=0;a[j]!='\0';j++){

    }
    j=j-1;
    for(i=0;i<j;i++,j--){
      t=a[i];
      a[i]=a[j];
      a[j]=t;  
    }
    cout<<a<<endl;
    

return 0;
}