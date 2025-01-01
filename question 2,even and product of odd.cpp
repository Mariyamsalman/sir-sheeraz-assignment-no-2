#include<iostream>
using namespace std;
int main(){
	int num1,num2,product=1;
	cout<<"enter a starting and ending number:";
	cin>>num1>>num2;
	for(int i=num1;i<=num2;i++){
		if(i%2==0){
			cout<<"\n"<<i;
		}else{
			product=product*i;
		}
	}
	cout<<"\nthis is the product"<<product;
	return 0;
}
