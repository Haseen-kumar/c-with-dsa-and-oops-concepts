#include<iostream>
using namespace std;
int main(){

   char p[]="HaSeEn";
   for(int i=0;p[i]!='\0';i++){
      if(p[i]>=65 && p[i]<=90){
        p[i]=p[i]+32;
      }
      else if(p[i]>='a' && p[i]<=122){     // 'a'=97 also
        p[i]-=32;
      }

   }
   cout<<p<<endl;



    return 0;

}