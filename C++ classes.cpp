#include<iostream>
using namespace std;

class time{
	public :
	int hour;
	int minute;
	int second;
};

main()
{
	time t;
	cout<<"Enter time:"<<endl<<"Hours:";
	cin>>t.hour;
	cout<<endl<<"Minutes:";
	cin>>t.minute;
	cout<<endl<<"seconds:";
	cin>>t.second;
	cout<<"The time is ="<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
	int sum;
	sum=t.hour*3600+t.minute*60+t.second;
	cout<<"Time in total seconds is:"<<sum;
	
}
