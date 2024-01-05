#include <iostream>
using namespace std;
/*karsidan alinan bes sayinin ortalamasini bulan kod*/
int main() {
	int i,sayi,top=0;

	for(i=1;i<=5;i++){
		cout <<i<< ".sayiyi giriniz:" ;
		cin>>sayi;
		top+=sayi;
	}

	top/=5;

	cout<<"sayilarin ortalamasi:"<<top<<endl;



	return 0;
}
