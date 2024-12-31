#include<iostream>
using namespace std;
int main()
{
int	sum=0,num;
cout<<"enter the ending number:";
cin>>num;
int i=1;
while(i<=num){
	cout<<i<<"*"<<i<<"="<<i*i<<"\n";
	sum=sum+(i*i);
	i++;
}
cout<<"sum is:"<<sum;
return 0;
}
