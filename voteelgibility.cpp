#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter Your Age : ";
	cin>>age;
	if(age >= 18){
		cout<<"You are eligible to vote...";}
	else{
		cout<<"you are not eligible for voting...\nreason : your agge is lessthan 18.\nwhat to do : wait "<<18-age<<" years more to get your vote egibility.";}
}
