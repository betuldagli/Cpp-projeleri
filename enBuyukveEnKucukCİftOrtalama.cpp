#include <iostream>
using namespace std;
/* dizideki elemanlardan en buyuk çift ile en kucuk ciftin ortalamasýný bulan kod */

int main(){
		int n,dizi[10],i,sayac=0,eb,ek;
	 cout<<"kac sayi gireceginizi girin:";
	 cin>>n;
	 float ort=0;
	cout<<"sayi giriniz:";
	cin>>dizi[0];
	eb=dizi[0];
	ek=dizi[0];
	
	for(i=1;i<n;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
	    if(eb<dizi[i]){
	    	if(dizi[i]%2==0){
	    	eb=dizi[i];	
			}
	   	}
	   	if(ek>dizi[i]){
	   		if(dizi[i]%2==0){
	   			ek=dizi[i];
			   }
		   }
	}
	ort=(float)(ek+eb)/2;
	
	cout<<"\nortalama: "<<(float)ort<<endl;
	
	return 0;
}
