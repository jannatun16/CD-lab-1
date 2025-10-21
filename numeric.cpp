#include<iostream>
using namespace std;
bool isnumeric(string input){
for(int i=0; i<input.length();i++){
    if(input[i]<'0'||input[i]>'9'){
        return false;
    }
} return true;
}
int main(){
string input;
cout<<"enter:"<<endl;
cin>>input;
if(isnumeric(input))
    cout<<"numeric constant"<<endl;
else
     cout<<"not numeric"<<endl;
return 0;
}
