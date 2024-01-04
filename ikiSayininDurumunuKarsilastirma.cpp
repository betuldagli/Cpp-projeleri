#include <iostream>
using namespace std;
/*iki sayinin birbirine gore durumunu karsilastiran program*/
int main() {
	int x,y;
	cout << "ilk sayiyi giriniz:" << endl;
	cin >> x;

	cout <<"ikinci sayiyi giriniz:" << endl;
	cin >> y;

	if(x>y){
		cout <<x<<" sayisi "<<y<<" sayisindan buyuktur."<< endl;
	}
	else if(x==y){
		cout <<"sayilar esittir."<< endl;
	}
	else{
		cout<<y<<" sayisi "<<x<<" sayisindan buyuktur."<< endl;
	}
	return 0;
}
