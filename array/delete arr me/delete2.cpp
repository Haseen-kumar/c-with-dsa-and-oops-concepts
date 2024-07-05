#include<iostream>
using namespace std;


int  del(int arr[],int &n,int k){
    int x=0;
    if(k>=0 && k<n){
        x=arr[k];
        for(int i=k;i<n;i++){
            arr[i]=arr[i+1];
            
        }
        n--;
            return x;


    }
    return 0;
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}



int main(){
    int arr[10];
    int n;
    cout<<" enter the length of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the index of element u want to delete "<<endl;
    cin>>k;
    cout<<del(arr,n,k)<<endl;
    print(arr,n);





    return 0;
}