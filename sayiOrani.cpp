#include <iostream>
using namespace std;
/*kullanýcýdan bir sayý alýp o kadar sayý okuyunuz.bu sayýlarýn içinde pozitif,negatif ve 0larýn oranýný bulunuz. */

int main() {
	int kac,sayac=0,sayacp=0,sayacn=0;
	float oranp,orann,orans;
	
	cout<<"kac tane sayi gireceginizi giriniz:";
	cin>>kac;
	int sayi[kac];
	for(int i=0;i<kac;i++){
		cout<<"sayiyi giriniz:"<<endl;
		cin>>sayi[i];
		if(sayi[i]==0){
			sayac++;
		}
		if(sayi[i]<0){
			sayacn++;
		}
		else if(sayi[i]>0){
			sayacp++;
		}
	}

	oranp=(float)sayacp/kac;
	orans=(float)sayac/kac;
	orann=(float)sayacn/kac;
	
	cout<<"pozitif sayilarin orani:"<<oranp<<endl;
	cout<<"negatif sayilarin orani:"<<orann<<endl;
	cout<<"0in orani"<<orans<<endl;
	
	return 0;
}
