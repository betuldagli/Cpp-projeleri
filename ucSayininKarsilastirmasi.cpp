
#include <iostream>
using namespace std;
/*karsidan alinan uc sayiyi karsilastir*/
int main() {
	int x,y,z;
	cout << "ilk sayiyi giriniz:" << endl;
	cin >>x;

	cout << "ikinci sayiyi giriniz:" << endl;
	cin >>y;

    cout << "ucuncu sayiyi giriniz:" << endl;
	cin >>z;

	if(x>y && x<z){
		cout <<x<<" sayisi "<<y<<" ve "<<z<<" arasindadir."<<endl;
	}
	if(x<y && x>z){
			cout <<x<<" sayisi "<<y<<" ve "<<z<<" arasindadir."<<endl;
		}
	if(x==y && x<z){
		cout <<x<<" ve "<<y<<" sayilari esittir ve "<<z<<" sayisindan kucuktur."<<endl;
	}
	if(x==y && x>z){
			cout <<x<<" ve "<<y<<" sayilari esittir ve "<<z<<" sayisindan buyuktur."<<endl;
		}
	if(x==y && x==z){
		cout <<"sayilar birbirine esittir."<<endl;
	}
	if(x>y){
		cout <<x<<" sayisi "<<y<<" sayindan buyuktur."<<endl;
	}
	if(x>z){
			cout <<x<<" sayisi "<<z<<" sayindan buyuktur."<<endl;
		}
	return 0;
}
