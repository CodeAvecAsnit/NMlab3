#include<iostream>
using namespace std;

int main(){

  int a,b;
  cout<<"Enter the divident : ";
  cin>>a;
  

  cout<<"Enter the divisor : ";
  cin>>b;
try{

    cout<<"The required output is : "<<a/b;
}catch(exception e){
  cout<<"There was a Error in the input nigga"<<endl;
}
return 0;

}

