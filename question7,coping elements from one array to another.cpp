#include<iostream>
using namespace std;
int main(){
	int arr1[3],arr2[3],sum=0;
	cout<<"enter three numbers:";
	cin>>arr1[0]>>arr1[1]>>arr1[2];
	cout<<"the numbers stored in first array:"<<arr1[0]<<arr1[1]<<arr1[2];
	arr2[0]=arr1[0];
	arr2[1]=arr1[1];
	arr2[2]=arr1[2];
cout<<"\nthe numbers stored in second array:"<<arr2[0]<<arr2[1]<<arr2[2];
	for(int i=0;i<=2;i++){
	if(arr2[i]%2==0){
		sum=sum+arr2[i];
	}
}
	cout<<"\nthe sum is:"<<sum;
	return 0;
}

