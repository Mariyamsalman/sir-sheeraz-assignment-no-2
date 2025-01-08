#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=5;
	do{
		j=i;
		do{
		cout<<j;
		j--;
	}while(j>=1);
	cout<<"\n";
	i--;
}while(i>=1);
return 0;
}
