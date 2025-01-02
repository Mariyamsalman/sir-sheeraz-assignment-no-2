#include<iostream>
using namespace std;
int main(){
	int num,positive=0,negative=0;
	int i=1;
	do{
		cout<<"enter a number and enter 0 when you want to exit:";
		cin>>num;
		if(num%2==0){
			positive++;
		}else{
			negative++;
		}
	}while(num!=0);
	cout<<positive;
	cout<<"\n"<<negative;
	
	return 0;
}
