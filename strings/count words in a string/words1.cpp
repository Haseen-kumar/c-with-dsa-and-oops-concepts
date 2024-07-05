#include<iostream>
using namespace std;
int main(){
    char p[]="how       are you";

      int i=0;
      int count =0;
     for(i=0;p[i]!='\0';i++){
        if(p[i]==' ' && p[i-1]!=' '){
            count++;
        }


     }
     cout<<" space is "<<count;
     cout<<" words are "<<1+count;
     




    return 0;
}