#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* kelimenin palindrom olup olmadýðýný bulan fonksiyon*/
   int sayac=0,u;
  int palindrom( char kelime[50]){
   int i,j;
   u=strlen(kelime);
    for(i=0;i<u;i++){
    	if(kelime[i]==kelime[u-i-1]){
    		sayac++;
		}
		else{ 
		sayac=0;
	    	}			
    }
	return sayac;
  }


int main() {
	char kelime[30];
		cout<<"kelimeyi giriniz:";
        cin>>kelime;

	palindrom(kelime);
	if(sayac==u){
		cout<<"palindromdur."<<endl;
	}
	else{
		cout<<"kelime palindrom degildir."<<endl;
	
	}
	return 0;
}
