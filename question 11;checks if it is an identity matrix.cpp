#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3];
	for(int i =0;i<=2;i++)
	{
		for(int j=0;j<=2;j++){
			cout<<"enter the element of row:"<<i+1<<"and column:"<<j+1<<endl;
			cin>>matrix[i][j];
		}
		cout<<endl;

	}

	if(matrix[0][0]==1&&matrix[0][1]==0&&matrix[0][2]==0&&matrix[1][0]==0&&matrix[1][1]==1&&matrix[1][2]==0&&matrix[2][0]==0&&matrix[2][1]==0&&matrix[2][2]==1){
		cout<<"it is an identity matrix and minimum is 0 and maximum is 1";
	}else{
		cout<<"it is not an identity matrix";
	}
	return 0;
	
}



