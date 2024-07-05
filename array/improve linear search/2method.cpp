#include<iostream>
using namespace std;

 int linear(int arr[],int n,int k){
        for(int i=0;i<n;i++){
            if(k==arr[i]){
                // thi sis called move to head or move to front method
                swap(arr[i],arr[0]);
                return 0;
            }

        }
        return -1;

    }
int main(){
    int arr[10];
    int n;
    cout<<"enter the length of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element u want to search"<<endl;
    cin>>k;
    cout<<linear(arr,n,k);
    return 0;

}
