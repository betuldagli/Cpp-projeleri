#include <iostream>
using namespace std;
/* kullanicidan ders notlarini 100'luk sistemde sayi olarak alan ve asagidaki tabloya gore
 * harf karsiliklarini yazan kod
 * 0-50=F
 * 50-70=C
 * 70-90=B
 * 90-100=A*/
int main() {
	int nott;
	cout << "ders notunu giriniz:"<<endl;
	cin >>nott;

	if(nott<50){
		cout <<"notun harf karsiligi:F"<< endl;
	}
	else if(nott>=50 && nott<70){
		cout<<"notun harf karsiligi:C"<< endl;
	}
	else if(nott>=70 && nott<90){
		cout <<"notun harf karsiligi:B"<< endl;
	}
	else{
		cout<<"notun harf karsiligi:A"<< endl;
	}
    return 0;
}
