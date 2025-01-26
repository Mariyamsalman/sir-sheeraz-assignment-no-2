#include<iostream>
using namespace std;
int main()
{
	int num[10],min;
	for (int i=0;i<=9;i++){
		cout<<"enter the "<<i+1<<" element of array:"<<"\n";
		cin>>num[i];
	}
	min=num[9]+num[0];
	for (int i=0;i<=9;i++){
	if(min>num[i]+num[i+1]){
		min=num[i]+num[i+1];
	}
	}
	cout<<"the minimum number is:"<<min;
	return 0;
}
