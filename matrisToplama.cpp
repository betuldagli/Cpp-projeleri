#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/* iki boyutlu iki matrisi toplayan kod */

int main() {
	srand(time(NULL));
	int i,j,n;
	
		cout<<"matris boyutunu giriniz:";
	cin>>n;
	int matris[n][n],matris1[n][n],toplam[n][n];
	cout<<"matris1:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		matris[i][j]=rand()%30;
		cout<<matris[i][j]<<"\t";	
		}cout<<endl;
	} 
	cout<<endl;
	cout<<"matris2:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		matris1[i][j]=rand()%30;
		cout<<matris1[i][j]<<"\t";	
		}cout<<endl;
	} 
	cout<<endl;
	cout<<"toplam:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			toplam[i][j]=matris[i][j]+matris1[i][j];
		cout<<toplam[i][j]<<"\t";	
		}cout<<endl;
	} 
	cout<<endl;
	
	return 0;
}
