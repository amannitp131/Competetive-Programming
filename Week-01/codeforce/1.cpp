#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int n,k=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])!= 5 && abs(arr[i]-arr[i+1])!=7){
            cout<<"No"<<endl;
            k=0;
            break;
        }
    }
    if(k){
        cout<<"Yes"<<endl;
    }
}

}