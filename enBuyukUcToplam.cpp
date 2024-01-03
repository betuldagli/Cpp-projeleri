#include <iostream>
using namespace std;
/* dizideki en buyuk üç elemanýn toplamýný bulan kod*/

int main(){
	int i,top=0,dizi[10];
	
	for(i=0;i<10;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
	}
	
	for(i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(dizi[i]<dizi[j]){
				int temp=dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=temp;
			}
		}
	}
	top=dizi[0]+dizi[1]+dizi[2];
	
	cout<<"\nen buyuk uc elemanin toplami:"<<top<<endl;
	return 0;
}
