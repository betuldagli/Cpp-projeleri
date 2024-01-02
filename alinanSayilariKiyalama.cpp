#include <iostream>
using namespace std;
/*karsidan alinan uc sayinin en buyuk ve en kucugunu ekrana yazdiran kod*/
int main() {
	int x,y,z,eb=0,ek=0;
	cout << "ilk sayiyi giriniz:" << endl;
	cin >>x;

	cout << "ikinci sayiyi giriniz:" << endl;
	cin >>y;

    cout << "ucuncu sayiyi giriniz:" << endl;
	cin >>z;

	if(x>y){
		eb=x;
		ek=y;
	}
	else{
		eb=y;
		ek=x;
	}
	if(z>eb){
		eb=z;
	}
	else if(z<ek){
		ek=z;
	}

	cout<<"en kucuk sayi "<<ek<<endl;
	cout<<"en buyuk sayi "<<eb<<endl;
	return 0;
}
