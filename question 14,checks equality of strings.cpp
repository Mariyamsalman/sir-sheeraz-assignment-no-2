#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int count=0,i;
	char str1[20],str2[]="ali";
	cout<<"enter the string:";
	gets(str1);
	for(i=0;str1[i]!='\0';i++){
		count++;
	}
	for(int j=count;j>=0;j--){
		if(str1[j]==str2[j]){
			cout<<str1[j];
		}else{
			cout<<"they are not similiar";
		}
	}
	return 0;
}
