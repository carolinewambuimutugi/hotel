#include <iostream>

using namespace std;

int main()
{
    int order,no_meals,Fruitjuice=100,Soda=50,Lemonjuice=40,Tea=30;
    cout<<"**********WELCOME TO ZETECH RESTAURANT"<<endl;
    cout<<"         ******TODAY'S SPECIAL******"<<endl;
    cout<<endl;
    cout<<"ITEM NO               NAME                     UNIT PRICE"<<endl;
    cout<<"(1)                  Fish served with rice       Sh 500 only."<<endl;
    cout<<"(2)                  Beef served with ugali      Sh 150 only."<<endl;
    cout<<"(3)                  Chicken served with chapati sh 300 only."<<endl;
    cout<<"****************************DRINKS*******************************."<<endl;
    cout<<"(1)                 Fruitjuice                   sh 100 only."<<endl;
    cout<<"(2)                 Soda                          Sh 50 only."<<endl;
    cout<<"(3)                 Lemonjuice                   Sh 40 only."<<endl;
    cout<<"(4)                 Tea                           Sh 30 only."<<endl;
    cout<<"Please select the order number:";
    cin>>order;
    cout<<"Please enter the number of meals:";
    cin>>no_meals;
    cout<<"Please select drinks:";
    cin>>Fruitjuice>>Soda>>Lemonjuice>>Tea;
    cout<<endl;
    switch(order)
{
    case 1:
        cout<<"order:Fish served with rice."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 500 only."<<endl;
        cout<<"Total price:"<<"shs.<<500*no_meals+Soda<<" "only."<<endl;

        break;
    case 2:
         cout<<"order:Beef served with ugali."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 150 only."<<endl;
        cout<<"Total price:"<<"shs.<<150*no_meals+Lemonjuice<<" "only."<<endl;

        break;
    case 3:
        cout<<"order: Chicken served chapati."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 300 only."<<endl;
        cout<<"Total price:"<<"shs.<<300*no_meals+Tea<<" "only."<<endl;

        break;
    case 4:
         cout<<"order:Fruitjuice."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 100 only."<<endl;
        cout<<"Total price:"<<"shs.<<100*no_meals+Soda<<" "only."<<endl;

        break;
    case 5:
         cout<<"order:Soda."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 100 only."<<endl;
        cout<<"Total price:"<<"shs.<<100*no_meals+Soda<<" "only."<<endl;

        break;
    case 6:
         cout<<"order:Lemonjuice."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 40 only."<<endl;
        cout<<"Total price:"<<"shs.<<50*no_meals+Soda<<" "only."<<endl;

        break;
    case 7:
         cout<<"order:Tea."<<endl;
        cout<<"Number of meals:."<<no_meals<<endl;
        cout<<"Price of each meal:sh 30 only."<<endl;
        cout<<"Total price:"<<"shs.<<30*no_meals+Soda<<" "only."<<endl;

        break;
    default:
        cout<<"invalid choice. Try Again!"<<endl;
    }

    return 0;
}
