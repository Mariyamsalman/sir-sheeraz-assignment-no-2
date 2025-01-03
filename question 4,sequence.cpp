#include<iostream>
using namespace std;
int main(){
	
	int i=1;
	while(i<=5){
		int n=1;
		while(n<=i){
			cout<<i;
			n++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}
