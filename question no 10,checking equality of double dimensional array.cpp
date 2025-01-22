#include<iostream>
using namespace std;
int main()
{
	int rows1,columns1,rows2,columns2,e1,e2,sum=0;
	cout<<"input rows and columns of the first matrix:"<<endl;
	cin>>rows1;
	cin>>columns1;
	cout<<"enter the same number of rows and columns for the second matrix:"<<endl;
	cin>>rows2;
	cin>>columns2;
	int matrix1[rows1][columns1],matrix2[rows2][columns2];
	for(int i=0;i<=rows1-1;i++){
		for(int j=0;j<=columns1-1;j++){
			cout<<"first matrix:enter the element of row:"<<i+1<<"and column:"<<j+1<<endl;
			cin>>matrix1[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<=rows2-1;i++){
		for(int j=0;j<=columns2-1;j++){
			cout<<"second matrix:enter the element of row:"<<i+1<<"and column:"<<j+1<<endl;
			cin>>matrix2[i][j];
		
		}
		cout<<endl;
	}
	for(int i=0;i<=rows2-1;i++){
		for(int j=0;j<=columns2-1;j++){
		if(matrix1[i][j]==matrix2[i][j]){
			cout<<"it is equal at matrix 1 and matrix 2 position"<<i+1<<j+1<<endl;
			sum=sum+matrix1[i][j]+matrix2[i][j];
			cout<<"both matrices are equal"<<endl;
			}else{
				cout<<"it is not equal"<<endl;
				break;
			}
		}
		}
		cout<<sum;
	return 0;
}

