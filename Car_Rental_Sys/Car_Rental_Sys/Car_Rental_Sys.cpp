#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

static int maxp = 100;
static int maxd = 50;
static int maxe = 50;

class customer
{
	int user_id;
	int len;
	char contact[10];
	string name;

public:
	void customer_data()
	{
		cout << "\nEnter following details" << endl;
		cout << "Enter your Name: ";
		cin >> name;
		cout << "Enter User Id: ";
		cin >> user_id;
		cout << "Enter Contact: ";
		cin >> contact;
		len = strlen(contact);
		if (len != 10)
		{
			cout << "\nInvalid Number\n";

		}
	}

	void display_user();
};

void customer::display_user()
{
	cout << "Name: " << name << endl;
	cout << "User-Id: " << user_id << endl;
	cout << "Contact: " << contact << endl << endl;
}

class car
{
protected:
	string car_type;
	int days;

public:
	void car_data()
	{
		cout << "Enter number of days for rent: ";
		cin >> days;
	}
};

class EV : virtual public car
{
protected:
	int model1;
	int a;

public:

	void display_ev()
	{

		cout << "\nEnter 1 for Tata Nexon EV Max" << endl;
		cout << "Enter 2 for Kia EV 6" << endl;
		cout << "Choose car model: ";
		cin >> model1;
		if (model1 == 1)
		{
			cout << "\nCar selected: Tata Nexon EV Max";
		}
		else
		{
			cout << "\nCar selected: Kia EV 6";
		}
		price();
	}

	int price() //function overloading
	{
		a = 80 * days;
		return a;
	}
};

class petrol :virtual public car
{
protected:
	int model2;
	float b;

public:
	void display_p()
	{
		cout << "\nEnter 1 for Hyundai Sentro MT" << endl;
		cout << "Enter 2 for Maruti Alto K10" << endl;
		cout << "Choose car model: ";
		cin >> model2;
		if (model2 == 1)
		{
			cout << "\nCar selected: Hyundai Sentro MT";
		}
		else
		{
			cout << "\nCar selected: Maruti Alto K10";

		}
		price();
	}

	float price() //function overloading
	{
		b = 100 * days;


		return b;
	}
};

class diesel : virtual public car
{
protected:
	int model3;
	double c;

public:
	void display_d()
	{
		cout << "\nEnter 1 for Mahindra Marazzo" << endl;
		cout << "Enter 2 for Toyoto Innova Crysta" << endl;
		cout << "Choose car model: ";
		cin >> model3;
		if (model3 == 1)
		{
			cout << "\nCar selected: Mahindra Marazzo";
		}
		else
		{
			cout << "\nCar selected: Toyoto Innova Crysta";
		}
		price();
	}

	double price() //function overloading
	{
		c = 90.44 * days;
		return c;
	}
};

class capacity   //operator overloading
{

public:
	void operator--()
	{
		maxp--;
	}
	void operator-()
	{
		maxd--;
	}
	void operator+()
	{
		maxe--;
	}
	void capp()
	{
		cout << "\n\nPetrol Vehicle Left:  " << maxp;
		cout << "\nDiesel Vehicle Left:  " << maxd;
		cout << "\nElectric Vehicle Left:  " << maxe;
	}
};

class reservation : public EV, public petrol, public diesel, public customer, public capacity
{
protected:
	capacity c1, c2, c3;
	double total_price;
	int ch;
	string choice;
	int  rent_fee = 500;

public:
	void get_car()
	{
		cout << "\nEnter 1 for Petrol Car" << endl;
		cout << "Enter 2 for Electric vehical" << endl;
		cout << "Enter 3 for Diesel Car" << endl;
		cout << "Choose Car Type : ";
		cin >> ch;

		switch (ch)
		{
		case 1:

			display_p();
			confirm();
			cout << "\nYour Car is Booked\n";
			display_car();
			--c1;
			//capp();
			break;

		case 2:
			display_ev();
			confirm();
			cout << "\nYour Car is Booked\n";
			display_car();
			+c2;
			//capp();
			break;
		case 3:
			display_d();
			confirm();
			cout << "\nYour Car is Booked\n";
			display_car();
			-c3;
			//capp();
			break;

		default:
			cout << "\nInvalid" << endl;
			break;
		}
	}

	void calc()
	{
		if (ch == 1)
		{
			total_price = rent_fee + b;

		}
		else if (ch == 2)
		{
			total_price = rent_fee + a;
		}
		else if (ch == 3)
		{
			total_price = rent_fee + c;
		}
	}

	string confirm()
	{
		cout << "\n\nAre you sure, you want to rent this car?" << endl << "Enter YES to continue or NO to exit" << endl;
		cin >> choice;
		if (choice == "YES" || choice == "yes")
		{
			calc();
			return "booked";
		}
		else
		{
			return "Exit";

		}
	}

	void display_car()
	{
		cout << endl << endl;
		cout.width(60);
		cout.fill('-');
		cout << "BILL";
		cout.width(60);
		cout.fill('-');
		cout << "-";

		display_user();

		cout << endl;
		cout << "Car chosen: " << endl;
		if (ch == 1)
		{
			cout << "Car type: Petrol" << endl;
			cout << "Model:";

			if (model2 == 1)
			{
				cout << "Hyundai Sentro MT" << endl << endl;
			}
			else
			{
				cout << "Maruti Alto K10" << endl << endl;
			}
			cout << "Number of days of rent: " << days << endl << endl;
			cout << "Total Amount : " << total_price;
		}
		else if (ch == 2)
		{
			cout << "Car type: EV" << endl;
			cout << "Model: ";

			if (model1 == 1)
			{
				cout << "Tata Nexon EV Max" << endl << endl;
			}
			else
			{
				cout << "Kia EV 6" << endl << endl;
			}
			cout << "Number of days of rent: " << days << endl << endl;
			cout << "Total Amount : " << total_price;

		}
		else if (ch == 3)
		{
			cout << "Car type : Diesel " << endl;
			cout << "Model: ";
			if (model3 == 1)
			{
				cout << "Mahindra Marazzo" << endl << endl;
			}
			else
			{
				cout << "Toyoto Innova Crysta" << endl << endl;
			}
			cout << "Number of days of rent: " << days << endl << endl;
			cout << "Total Amount : " << total_price;

		}
	}

	void operator--()
	{
		maxp--;
	}
};

int main()
{
	cout.width(75);
	cout.fill('-');
	cout << "WELCOME TO OUR CAR RENTAL SYSTEM";
	cout.width(45);
	cout.fill('-');
	cout << "-" << endl;
	cout << endl;

	reservation r1, r2;
	r1.customer_data();
	r1.car_data();
	r1.get_car();
	cout << endl;
	cout.width(65);
	cout.fill('-');
	cout << "THANK YOU!";
	cout.width(55);
	cout.fill('-');
	cout << "-" << endl;
	cout << endl << endl;
	r1.capp();

	cout << "\n\nEnter Customer 2 details:" << endl;

	r2.customer_data();
	r2.car_data();
	r2.get_car();
	cout << endl;
	cout.width(65);
	cout.fill('-');
	cout << "THANK YOU!";
	cout.width(55);
	cout.fill('-');
	cout << "-" << endl;
	r2.capp();

	_getch();
}
