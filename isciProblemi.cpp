#include <iostream>
using namespace std;
/*iscinin isi bitirme suresi ve isci sayisina gore isin bitme suresini hesaplayan kod*/
int main() {
	float isci,sure,sonuc=0,is;
	cout << "bir iscinin isi ne kadar surede bitirdigini giriniz: " << endl;
	cin >>sure;

	cout <<"kac isci oldugunu giriniz:"<<endl;
	cin >>isci;

	sonuc=sure/isci;

	cout <<"isin bitme suresi:"<<sonuc<<endl;
	return 0;
}
