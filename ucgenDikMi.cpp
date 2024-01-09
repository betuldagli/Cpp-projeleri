#include <iostream>
using namespace std;
/*karsidan alinan kenarlara gore ucgenin dik olup olmadigini soyleyen kod*/
int main() {
	int a,b,c,sayac=0,top,top1,top2;
	cout << "ilk kenari giriniz:" << endl;
	cin>>a;
	cout << "ikinci kenari giriniz:" << endl;
	cin>>b;
	cout << "ucuncu kenari giriniz:" << endl;
	cin>>c;
	top=a*a+b*b;
	top1=a*a+c*c;
	top2=b*b+c*c;
	if(top==c*c){
		sayac++;
	}
	if(top1==b*b){
		sayac++;
	}
	if(top2==a*a){
		sayac++;
	}
	if(sayac!=0){
		cout<<"ucgen diktir."<<endl;
	}
	else{
		cout<<"ucgen dik degildir."<<endl;
	}
	return 0;
}
