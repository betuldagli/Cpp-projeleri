#include <iostream>
using namespace std;
/* ilk 20 asal sayýyý veren kod 2-3-5-7-11-13-17-19-23-29-31-37-41-43-47-53-59-61-67-71*/


int main(){
		int i,j,l,sayac=0;
		
	for(i=2;i<=71;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
			sayac++;
			}	
		
		}if(sayac==1){
			cout<<i<<endl;
    } sayac=0;
	
}
	
	
	
	return 0;
}
