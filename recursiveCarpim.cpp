#include <iostream>
using namespace std;
/* �arpma islemini recursive �eklinde yapan kod */

int carpim(int x,int y){
	if(y==0){
	return 0;
	
	}

	return x+carpim(x,y-1);
}

int main(){
	int x,y;
	
	cout<<"sayi giriniz:";
	cin>>x;
	
	cout<<"sayi giriniz:";
	cin>>y;
	
	cout<<carpim(x,y)<<endl;
	return 0;
}
