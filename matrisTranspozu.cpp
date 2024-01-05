#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/* iki boyutlu bir matrisin transpozunu alan kod */

int main() {
	srand(time(NULL));
	int i,j,n;
	
	cout<<"matris boyutunu giriniz:";
	cin>>n;
	int matris[n][n];
	cout<<"matris:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		matris[i][j]=rand()%30;
		cout<<matris[i][j]<<"\t";	
		}cout<<endl;
	} 
	cout<<endl;
	cout<<"matrisin transpozu:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		cout<<matris[j][i]<<"\t";	
		}cout<<endl;
	} 
	
	
	
	return 0;
	}
