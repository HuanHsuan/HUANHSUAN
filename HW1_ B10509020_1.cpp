#include <iostream>
#include <cstdlib>
using namespace std;
int main (void){
	int price,rate;
	cout<<"�п�J���~����"<<endl;
	cin>>price;
	cout<<"�п�J���²v%"<<endl;
	cin>>rate;
	double depreciation=price*((float)rate/(float)100);
	cout<<"�C�~�N���"<<depreciation<<"������"<<endl;
	int year=0;
	while(price>0){
	price=price-depreciation;
	year++;
	}
	cout<<"�`�@��F"<<year<<"�~����"<<endl;
    system("pause");
    return 0;
} 
