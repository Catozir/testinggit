#include <iostream>

using namespace std;

struct stplus{
	int a;
	int operator +(const int& b){
		return this+b;
	}
}

istream& operator >> (const istream& in, stplus& a){
	return in >> a.a;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	while(true){
		stplus X, Y;
		cin >> X >> Y;
		cout << X+Y;
	}
	return 0;
	exit(0);
}
