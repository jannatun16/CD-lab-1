#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    int sum;
    cout<<"enter"<<n<<"number";
    for(int i=0;i<n;i++){

        cin>>arr[i];
        sum=sum+arr[i];
    }

    float avg=(float)sum/n;
    cout<<avg;
    return 0;
}
