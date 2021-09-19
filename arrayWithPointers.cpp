#include<iostream>
using namespace std;

int main(){
	int *p;
  int arr[5];
  cout<<"enter 5 values :"<<endl;
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  p=arr;
  cout<<"entered values along with there adrresses are :"<<endl;
  for(int i=0;i<5;i++)
  {
    cout<<"address: "<<p<<", value: "<<*p<<endl;
    p++;
  }
}
