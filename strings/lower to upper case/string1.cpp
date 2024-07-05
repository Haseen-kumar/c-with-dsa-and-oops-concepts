#include<iostream>
using namespace std;
int main(){

char p[]="haseen";
int i;
// for(i=0;p[i]!='\0';i++){

// }
// cout<<i<<endl;
for(i=0;p[i]!='\0';i++){
  p[i]=p[i]-32;
}
cout<<p<<endl;





    return 0;
}