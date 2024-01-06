#include <iostream>
using namespace std;
/*karsi taraftan -1 girilene kadar olan sayilara okuyup ortalamasini bulan kod*/
int main() {
	int i,sayi,top=0;
	float ort;
	 for(i=0;sayi!=-1;i++){
		 cout << "sayi giriniz:" << endl;
		 cin>>sayi;
		 top+=sayi;


	 }
     top+=1;
     i-=1;
	 ort=top/i;

	 cout<<"sayilarin ortalamasi:"<<ort<<endl;
	return 0;
}
