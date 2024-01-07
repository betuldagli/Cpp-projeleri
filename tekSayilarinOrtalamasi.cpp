#include <iostream>
using namespace std;
/* dizideki tek elemanlarýn ortalamasýný bulan kod */

int main(){
		int n,dizi[10],i,sayac=0;
	 cout<<"kac sayi gireceginizi girin:";
	 cin>>n;
	 float top=0,ort=0;
	for(i=0;i<n;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
	    if(dizi[i]%2==1){
	    	top+=dizi[i];
	    	sayac++;
		}
	}
	ort=top/sayac;
	
		cout<<"ortalama: "<<(float)ort<<endl;
	return 0;
}

