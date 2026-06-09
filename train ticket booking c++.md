void bookTicket()
{
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Seat No: ";
    cin >> seatNo;

    cout << "Enter Ticket Price: ";
    cin >> price;

    cout << "\nTicket Booked Successfully!" << endl;
}

void display()
{
    cout << "Name     : " << name << endl;
    cout << "Age      : " << age << endl;
    cout << "Seat No  : " << seatNo << endl;
    cout << "Price    : " << price << endl;
}

void cancelTicket()
{
    cout << "Ticket Cancelled Successfully!" << endl;
}
};

int main() { Ticket t; int choice;

cout << "1. Book Ticket" << endl;
cout << "2. View Ticket" << endl;
cout << "3. Cancel Ticket" << endl;
cout << "Enter Choice: ";
cin >> choice;

switch(choice)
{
    case 1:
        t.bookTicket();
        t.display();
        break;

    case 2:
        t.display();
        break;

    case 3:
        t.cancelTicket();
        break;

    default:
        cout << "Invalid Choice";
}

return 0;
}