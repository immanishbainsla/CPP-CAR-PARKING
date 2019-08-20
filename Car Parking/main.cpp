//Including Header Files
#include <iostream>
#include <cstdlib>

//Using "std" Namespace
using namespace std;

int main()
{
    //Declaring Variables
    int choice, amount = 0, count = 0, rickshaw = 0, car = 0, bus = 0;

    while(true) {

        //system('cls');

        //Condition to check whether Parking is Full?
        if(count==50) {
            cout<<"\n\n\t\t=============================================\n";
            cout<<"\t\t\tParking is Full.\n";
            cout<<"\t\t\tso, Deleting Vehicle Records...\n";

            amount = 0;
            count = 0;
            rickshaw = 0;
            car = 0;
            bus = 0;

            cout<<"\t\t\tParking is Empty.\n";
            cout<<"\t\t=============================================\n";

        }

        //Menu Available for Parking
        if(count<=50){

            cout<<"\n\n\tMenu: Select and Press Enter\n";
            cout<<"\t\t1: Rickshaw\n";
            cout<<"\t\t2: car\n";
            cout<<"\t\t3: Bus\n";
            cout<<"\t\t4: Show Record\n";
            cout<<"\t\t5: Delete Record\n";
            cout<<"\t\t6: Exit\n";
            cout<<"\t\tYour Choice: ";

            cin>>choice;

            switch(choice) {
                case 1: rickshaw++;
                        amount += 100;
                        count++;
                    break;
                case 2: car++;
                        amount += 200;
                        count++;
                    break;
                case 3: bus++;
                        amount += 300;
                        count++;
                    break;
                case 4: cout<<"\n\n\t\tTotal amount: "<<amount<<"\n";
                        cout<<"\t\tTotal no. of Vehicles: "<<count<<"\n";
                    break;
                case 5: amount = 0;
                        count = 0;
                        cout<<"\n\n\t\tTotal amount: "<<amount<<"\n";
                        cout<<"\t\tTotal no. of Vehicles: "<<count<<"\n";
                        cout<<"\t\tTotal no. of Rickshaws: "<<rickshaw<<"\n";
                        cout<<"\t\tTotal no. of Cars: "<<car<<"\n";
                        cout<<"\t\tTotal no. of Buses: "<<bus<<"\n";
                    break;
                case 6: cout<<"\n\n\t\tTotal amount: "<<amount<<"\n";
                        cout<<"\t\tTotal no. of Vehicles: "<<count<<"\n";
                        cout<<"\t\tThanks for Visiting."<<count<<"\n";
                        exit(0);
                        break;
                default: cout<<"\n\t\tInvalid Choice\n";
            }

        }
        else{
            cout<<"\n\t\tNo more Parking Space Available.\n";
        }

    }

    return 0;
}
