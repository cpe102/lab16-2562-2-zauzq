#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int X){
	srand(time(0));
	vector<int> a(X);
	for(int i=0;i<X;i++){
		a[i] = rand()%10;
	}
	return a;
}

int dotProduct(vector<int>a,vector<int>b)
{
	int sum=0;
	for(int i=0;i<a.size();i++) sum+=a[i]*b[i];
	return sum;
}

void showVector(vector<int>y)
{
	cout << "[";
	for(int i=0;i<y.size();i++) cout << y[i] <<" ";
	cout << "]";
}