#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float update_balance(char command,float balance,float dollar);
int main()
{	char command;
	float dollar,balance = 10000;
	do{
	cout << "Exit with 0\n"<<fixed<<setprecision(2)<<"Your balance = "<< balance <<endl;
	cout << "Input command (1 or withdraw, 2 deposit):";
	cin >> command;
	if(command == '0')
		break;
	cout << "Input amnout : ";
	cin >> dollar;
	balance = update_balance(command,balance,dollar);
	}while (command!='0');
}
float update_balance(char command,float balance,float dollar)
{	

	if(command=='1'){
		balance = balance - dollar;
	}else if(command=='2'){
		balance = balance + dollar;}
	return (balance);
}
