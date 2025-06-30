#include <iostream>
using namespace std;

int main()
{
    int qunt;
    int choice;

    // all of variable  are available object in a hotel
    int qrooms = 0, qpasta = 0, qnoodles = 0, qchicken = 0, qburger = 0;

    // all of variable are sold in a hotel

    int srooms = 0, spasta = 0, snoodles = 0, schicken = 0, sburger = 0;

    // all of variable are total price of solding object in a hotel,

    int total_prooms = 0, total_ppasta = 0, total_pnoodles = 0, total_pchicken = 0, total_pburger = 0;

    // then take value of all this iteams

    cout << "\n\tquantity of items we have";

    // rooms
    cout << "\nRooms are available:";
    cin >> qrooms;
    // for available pasta in hotel
    cout << "\nquantity of pasta:";
    cin >> qpasta;

    // for available noodles in hotel
    cout << "\nquantity of noodles:";
    cin >> qnoodles;

    // for available chicken-roll in hotel
    cout << "\nquantity of chicken:";
    cin >> qchicken;

    // for available burger in hotel
    cout << "\nquantity of burger:";
    cin >> qburger;

    // for user , menu portion

m:
    cout << "\n\t\t\tPlease select form the given menu option";
    cout << "\n\n1) ROOMS";
    cout << "\n2) NOODLES";
    cout << "\n3) PASTA";
    cout << "\n4) CHICKEN-ROLL";
    cout << "\n5) BURGER";
    cout << "\n6) Information regarding sales and collection on the day";
    cout<<  "\n7) For separated bill of rooms";
    cout<<  "\n8) For separated bill of noodles";
    cout<<  "\n9) For separated bill of pasta";
    cout<<  "\n10) For separated bill of chicken-roll";
    cout<<  "\n11) For separated bill of burger";
    
    cout << "\n12) Exit";

    cout << "\n\nPlease Enter your choice in your mind!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\nEnter the number of rooms you want:";
        cin >> qunt;
        if (qrooms - srooms >= qunt)
        {
            srooms += qunt;
            total_prooms += qunt * 1000;
            cout << "\n\n\t\t" << qunt << "room/rooms have been allocted to you!";
        }
        else
            cout << "\n\tOnly " << qrooms - srooms << " rooms remaining in hotel";

        break;
    case 2:
        cout << "\nEnter your palate of noodles:";
        cin >> qunt;
        if (qnoodles - snoodles >= qunt)
        {
            snoodles += qunt;
            total_pnoodles += qunt * 200;
            cout << "\n\n\t\t" << qunt << "noodles is the order!";
        }
        else
            cout << "\n\tOnly " << qnoodles - snoodles << " plate of noodles remaining in hotel";

        break;
    case 3:
        cout << "\n\nEnter your plate of pasta :";
        cin >> qunt;
        if (qpasta - spasta >= qunt)
        {
            spasta += qunt;
            total_ppasta += qunt * 150;
            cout << "\n\n\t\t" << qunt << "pasta is the order!";
        }
        else
            cout << "\n\tOnly " << qpasta - spasta << " plate of pasta remaining in hotel";

        break;
    case 4:
        cout << "\n\nEnter your quantity of chicken-roll:";
        cin >> qunt;
        if (qchicken - schicken >= qunt)
        {
            schicken += qunt;
            total_pchicken += qunt * 130;
            cout << "\n\n\t\t" << qunt << "chicken-roll is the order!";
        }
        else
            cout << "\n\tOnly " << qchicken - schicken << " Few chicken-roll remaining in hotel";

        break;
    case 5:
        cout << "\n\nEnter your quantity of burger:";
        cin >> qunt;
        if (qburger - sburger >= qunt)
        {
            sburger += qunt;
            total_pburger += qunt * 150;
            cout << "\n\n\t\t" << qunt << "burger is the order!";
        }
        else
            cout << "\n\tOnly " << qrooms - srooms << " quantity of burgers are remaining in hotel";

        break;

    case 6:

        cout << "\n\t\tDetails of sales and colleection";
        cout << "\n\nNumber of rooms we had:" << qrooms;
        cout << "\n\nNumber of rooms we gave for rent:" << srooms;
        cout << "\n\nRemaining rooms:" << qrooms - srooms;
        cout << "\n\nTotal room are sold for the day:" <<  total_prooms;
        // noodles
        cout << "\n\nplate of noodles we had:" << qnoodles;
        cout << "\n\nPlate  of noodles we gave to customer:" << snoodles;
        cout << "\n\nRemaining plate of noodles are:" << qnoodles - snoodles;
        cout << "\n\nTotal noodles are sold for the day:,$" << total_pnoodles;
        // paste
        cout << "\n\nNumber plate of paste we had:" << qpasta;
        cout << "\n\nNumber of plate of paste we gave to customer:" << spasta;
        cout << "\n\nRemaining plate of pasta:" << qpasta - spasta;
        cout << "\n\nTotal pasta are sold for the day:$" << total_ppasta;
        // chicken-roll
        cout << "\n\nQuantity of chicken-roll we had:" << qchicken;
        cout << "\n\nQuantity of chicken-roll we gave to customer:" << schicken;
        cout << "\n\nRemaining quantity of chicken-roll:" << qchicken - schicken;
        cout << "\n\nTotal chicken are sold for the day:$" << total_pchicken;

        // burger
        cout << "\n\nQuantity of burger we had:" << qburger;
        cout << "\n\nQuantity of burger we gave to customer:" << sburger;
        cout << "\n\nRemaining quantity of burger:" << qburger - sburger;

        cout << "\n\nTotal burger are sold for the day:$" << total_pburger;

        cout << "\n\nTotal collectiong for a day:$" << total_pburger + total_pchicken + total_pnoodles + total_ppasta + total_prooms;
        break;
    case 7:
        cout << "\n\t\tDetails of sales and colleection";
        cout << "\n\nNumber of rooms we had:" << qrooms;
        cout << "\n\nNumber of rooms we gave for rent:" << srooms;
        cout << "\n\nRemaining rooms:" << qrooms - srooms;
        cout << "\n\nTotal room are sold for the day:" <<total_prooms;
        break;
    case 8:
        // noodles
        cout << "\n\nplate of noodles we had:" << qnoodles;
        cout << "\n\nPlate  of noodles we gave to customer:" << snoodles;
        cout << "\n\nRemaining plate of noodles are:" << qnoodles - snoodles;
        cout << "\n\nTotal noodles are sold for the day:,$" << total_pnoodles;
        break;
    case 9:
        // paste
        cout << "\n\nNumber plate of paste we had:" << qpasta;
        cout << "\n\nNumber of plate of paste we gave to customer:" << spasta;
        cout << "\n\nRemaining plate of pasta:" << qpasta - spasta;
        cout << "\n\nTotal pasta are sold for the day:$" << total_ppasta;
        break;
    case 10:
        // chicken-roll
        cout << "\n\nQuantity of chicken-roll we had:" << qchicken;
        cout << "\n\nQuantity of chicken-roll we gave to customer:" << schicken;
        cout << "\n\nRemaining quantity of chicken-roll:" << qchicken - schicken;
        cout << "\n\nTotal chicken are sold for the day:$" << total_pchicken;

    case 11:
        // burger
        cout << "\n\nQuantity of burger we had:" << qburger;
        cout << "\n\nQuantity of burger we gave to customer:" << sburger;
        cout << "\n\nRemaining quantity of burger:" << qburger - sburger;

        cout << "\n\nTotal burger are sold for the day:$" << total_pburger;

    case 12:
        exit(0);

    default:
        cout << "\n Please select the number mentioned above!";
    }
    goto m;
}