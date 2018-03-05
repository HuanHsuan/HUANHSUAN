#include <iostream>
#include <cstdlib>
using namespace std;
int main (void){
	int price,rate;
	cout<<"請輸入物品價值"<<endl;
	cin>>price;
	cout<<"請輸入折舊率%"<<endl;
	cin>>rate;
	double depreciation=price*((float)rate/(float)100);
	cout<<"每年將減少"<<depreciation<<"的價值"<<endl;
	int year=0;
	while(price>0){
	price=price-depreciation;
	year++;
	}
	cout<<"總共花了"<<year<<"年折舊"<<endl;
    system("pause");
    return 0;
} 
