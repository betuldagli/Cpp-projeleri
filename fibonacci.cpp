#include <iostream>
using namespace std;
/* fibonacci*/

int main() {
	int i,ilk=1,ikinci=1,gecici,gecici1,sayi,igecici;
	
	cout<<"kacinci fibonacci sayisina kadar girmek istersiniz:";
	cin>>i;
		gecici=ilk;
		cout<<ilk<<endl;
		
		gecici1=ikinci;
		cout<<ikinci<<endl;
		igecici=i;
	for(int j=3;j<igecici;j+3){
	sayi=gecici+gecici1;
	cout<<sayi<<endl;
	i--;
	if(i<j){
		break;
	}
	gecici=sayi+gecici1;
	cout<<gecici<<endl;
    i--;
	if(i<j){
		break;
	}
	gecici1=sayi+gecici;
	cout<<gecici1<<endl;
    i--;
	if(i<j){
		break;
	}
	}
	return 0;
}
