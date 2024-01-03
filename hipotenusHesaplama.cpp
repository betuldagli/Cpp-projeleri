#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int k,l,hipotenus,toplam=0;
	cout << "ilk kenari giriniz:" << endl;
	cin >>k;

	cout << "ikinci kenari giriniz:" << endl;
	cin >>l;

	toplam=k*k+l*l;

	hipotenus=sqrt(toplam);

	cout <<"hipotenus degeri:"<<hipotenus<<endl;

	return 0;
}
