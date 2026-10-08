#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "~~ Welcome to otlop abu hamad ~~\n";
	int order;
	string name;
	string phone;
	double price=0;
	int quantity;
	int choose;
	string confirm;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your phone number: ";
	cin >> phone;

	int choice;
	cout << "1=market\n";
	cout << "2=restaurant\n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "What do you want from market? \n";
		cout << "1=eggs\n";
		cout << "2=bread\n";
		cout << "3=milk\n";
		cout << "4=cheese\n";
		cout << "5=butter\n";
		cout << "6=chicken\n";
		cin >> order;
		if (order == 1)
		{
			cout << "You ordered eggs\n";
			price = 10.0;
		}
		else if (order == 2)
		{
			cout << "You ordered bread\n";
			price = 5.0;
		}
		else if (order == 3)
		{
			cout << "You ordered milk\n";
			price = 7.0;
		}
		else if (order == 4)
		{
			cout << "You ordered cheese\n";
			price = 15.0;
		}
		else if (order == 5)
		{
			cout << "You ordered butter\n";
			price = 12.0;
		}
		else if (order == 6)
		{
			cout << "You ordered chicken\n";
			price = 20.0;
		}
		else
		{
			cout << "Invalid order\n";
		}
	}
	else if (choice == 2)
	{
		cout << "What do you want from restaurant? \n";
		cout << "1=pizza\n";
		cout << "2=burger\n";
		cout << "3=pasta\n";
		cout << "4=krep\n";
		cin >> order;
		if (order == 1)
		{
			cout << "your order from restaurant is: pizza\n";
			price = 50.0;
		}
		else if (order == 2)
		{
			cout << "your order from restaurant is: burger\n";
			price = 30.0;
		}
		else if (order == 3)
		{
			cout << "your order from restaurant is: pasta\n";
			price = 40.0;
		}
		else if (order == 4)
		{
			cout << "your order from restaurant is: krep\n";
			price = 25.0;
		}
		else
		{
			cout << "your order is not defined";
		}
	}
		
	cout << "price is = " << price << " EGP" << endl;
	cout << "Enter quantity: ";	
	cin >> quantity;
	cout << "Total price is = " << price*quantity << " EGP" << endl;
	
	cout << "what is your location ??"<<endl;
	cout << "El_Qatawya=1"<<endl;
	cout << "Arb_Elfadan=2"<<endl;
	cout << "El_manshia=3"<<endl;
	cout << "Enter your location (1/2/3): ";
    cin >> choose;
	if (choose == 1)
	{
		cout << "your location is El_Qatawya"<<endl;
	}
	else if (choose == 2)
	{
		cout << "your location is Arb_Elfadan"<<endl;
	}
	else if (choose == 3)
	{
		cout << "your location is El_manshia"<<endl;
	}
	else
	{
		cout << "Invalid location"<<endl;
	}

	cout << "confirm your order (yes/no): "<<endl;
	cin >> confirm;
	if (confirm == "yes")
	{
    cout << "your order is confirmed";
	}
	else if (confirm == "no")
	{
	cout << "your order is canceled";
	}
	else
	{
		cout << "Invalid choice";
	}

















































}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		



























































































































