#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/* karþýdan kaç kez zar atýlacaðýný alýp zarlarý atan ve kazananý söyleyen kod */

int main() {
	int i,j,n,sayac=0,sayac1=0;
	srand(time(NULL));
	cout<<"kac kere zar atilacagini giriniz:";
	cin>>n;
	
	int dizi[n],dizi1[n];
		cout<<"1  "<<"  2"<<endl;
			cout<<"-----------"<<endl;
	for(i=0;i<n;i++){
		dizi[i]=rand()%6+1;	
		dizi1[i]=rand()%6+1;
		cout<<dizi[i]<<"    "<<dizi1[i]<<endl;
	}
	
	for(i=0;i<n;i++){
		if(dizi[i]>dizi1[i]){
			sayac++;
		}
		if(dizi1[i]>dizi[i]){
			sayac1++;
		}
	}
	
	if(sayac>sayac1){
		cout<<"birinci kisi kazandi."<<endl;
	}
	else if(sayac1>sayac){
		cout<<"ikinci kisi kazandi."<<endl;
	}
	else{
		cout<<"berabere kaldilar."<<endl;
	}
	return 0;
}
