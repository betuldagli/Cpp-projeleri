#include <iostream>
using namespace std;
/* karþýdan alýnan 5 sayýnýn
en büyük
en küçük
ortalama 
toplamýný bulan program kodu
*/

int main(){
	int dizi[5],eb,ek,top=0;
	float ort;
	for(int i=0;i<5;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
		top+=dizi[i];
	}
	eb=dizi[0];
	ek=dizi[0];
	
	for(int i=0;i<5;i++){
		if(eb<dizi[i]){
			eb=dizi[i];
		}
		if(ek>dizi[i]){
			ek=dizi[i];
		}
	}
	ort=(float)top/5;
	cout<<"en buyuk eleman:"<<eb<<endl;
	cout<<"en kucuk eleman:"<<ek<<endl;
	cout<<"ortalama:"<<ort<<endl;
	cout<<"toplam:"<<top<<endl;
	
}
