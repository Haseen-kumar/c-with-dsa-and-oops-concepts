#include<iostream>
using namespace std;
int main(){


char p[]="how are you";

int i;
int count=0;
int x=0;

for(i=0;p[i]!='\0';i++){
    if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U'){
        count++;
    }
    else if((p[i]>=65 && p[i]<=90)||(p[i]>=97 && p[i]<=122)){
        x++;
    }
}
cout<<" wowels are "<<count<<endl;
cout<<"consonents are "<<x<<endl;
return 0;
}
