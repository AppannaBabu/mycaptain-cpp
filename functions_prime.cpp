#include<iostream>
using namespace std;

int main(){
	int a,k=0;
  cout<<"enter value: ";
  cin>>a;
  int arr[a],i=2;

  //getting the all the possible primes till number
  while(i<=a)
  {
    bool c=is_prime(i);
    if (c==true)
    {
      arr[k]=i;
      k+=1;
    }
    i+=1;
  }
  
  for(int i=0;i<a;i++)
  {
    for(int j=i;j<a;j++)
    {
      if((arr[i]+arr[j]==a) && (arr[i]!=0) && (arr[j]!=0)){
        cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
      }
    }
  }
}

/*
int get_primes_till(int n)
{
  int arr[n],c,k=0;
  for(int i=1;i<=n;i++)
  {
    c=is_prime(i);
    if (c==true)
    {
      arr[k]=i;
      k+=1;
    }
  }
  return arr
}*/
//sir i commented this function because of not knowing how to return an array

bool is_prime(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}
