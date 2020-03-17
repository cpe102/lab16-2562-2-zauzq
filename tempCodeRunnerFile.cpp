#include<iostream>
using namespace std;

//Write the definition of myString() here
char myString(char *p,int N){
	char *a=new char;
	
	for(int i=0;i<N;i++){
		a[i] ='A' + i;
		cout<< a[i];
	}
	a[N] = '\0';
}	 	

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}