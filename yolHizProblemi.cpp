#include <iostream>
using namespace std;

int main() {
	float yol,hiz,sure,dakika,saat;
	cout << "yol uzunlugunu giriniz:" << endl;
	cin >>yol;

	cout<<"aracin hizini giriniz:"<<endl;
	cin>>hiz;

	sure=yol/hiz;
	saat=(int)sure;
	dakika=(float)sure-(int)sure;
	dakika*=60;

	cout<<"varis suresi:"<<saat<<" saat "<<dakika<<" dakikadir."<< endl;
	return 0;
}
