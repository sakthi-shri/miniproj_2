//Elcetricity Bill Calculation
#include <iostream>
using namespace std;

class ElectricityBill
{
public:
    string name;
    int units, choice;
    float fixedCharge, rate, totalAmount;

    void getData()
    {
        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Units Consumed: ";
        cin >> units;

        cout << "Enter Fixed Charge: ";
        cin >> fixedCharge;
    }

    void calculateBill()
    {
        if (units <= 100)
            choice = 1;
        else if (units <= 200)
            choice = 2;
        else if (units <= 300)
            choice = 3;
        else
            choice = 4;

        switch (choice)
        {
            case 1:
                rate = 1.5;
                break;
            case 2:
                rate = 2.5;
                break;
            case 3:
                rate = 4.0;
                break;
            case 4:
                rate = 5.5;
                break;
        }

        totalAmount = (units * rate) + fixedCharge;
    }

    void displayBill()
    {
        cout << "Customer Name : " << name << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Fixed Charge  : " << fixedCharge << endl;
        cout << "Total Amount  : " << totalAmount << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.getData();
    e.calculateBill();
    e.displayBill();

    return 0;
}
