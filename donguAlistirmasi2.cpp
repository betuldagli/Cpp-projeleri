#include <iostream>
using namespace std;
/*ekrana 4 kolon �eklinde a�a��daki ifadeleri yazd�r�n�z.
1. kolon:1'den 100'e kadar 15'in katlar�
2.kolon:1'den 30'a kadar 5'in katlar� 
3.kolon:100'den 50'ye kadar 10'un katlar�
4.kolon:2'den 64'e kadar olan 2'nin �sleri*/

int main() {
	int x=15,y=5,z=100,q=2;
	
	while(x<100){
		cout <<x<<"\t"<<y<<"\t"<<z<<"\t"<<q<< endl;
		x+=15;
		y+=5;
		z-=10;
		q*=2;
	}
	return 0;
}
