#include<iostream>
#include <iomanip>
using namespace std;
class Time
{
	public:
	int hours,minutes,seconds;
};

int main()
{
	Time t;
	cout<<"Hours?";
	cin>>t.hours;
	cout<<"Minutes?";
	cin>>t.minutes;
	cout<<"Seconds?";
	cin>>t.seconds;
	cout << "The time is : " << setw(2) << setfill('0') << t.hours << ":"<< setw(2) << setfill('0') << t.minutes << ":"<< setw(2) << setfill('0') << t.seconds << endl;
}
