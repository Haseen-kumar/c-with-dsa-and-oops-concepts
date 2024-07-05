#include<iostream>
using namespace std;


 int palidrome (char a[],char b[]){
   int i=0;
   int j=0;
   while(a[i]!='\0' || b[j]!='\0'){
    if(a[i]!=b[j]){
        return 0;
    }
    else if(a[i]==b[j]){
        i++;
        j++;
    }
  
   }



return 1;
}

int main(){

char a[]="haseen kumar";
char b[]="haseen kumar";


cout<<palidrome(a,b);






    return 0;
}