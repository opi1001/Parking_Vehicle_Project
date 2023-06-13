#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

     int c = 0;
     int r = 0;
     int b = 0;
     int t = 0;


    int u_input;
    int amount = 0,count = 0;


    //menu.
    while(true)
    {

    cout<<"Press 1 for rickshaw = 50"<<endl;
    cout<<"Press 2 for car = 200"<<endl;
    cout<<"Press 3 for bus = 400"<<endl;
    cout<<"Press 4 for track = 600"<<endl;
    cout<<"Press 5 this is your bill"<<endl;
    cout<<"Press 6 your bill is complete"<<endl;

    cin>>u_input;

     if(u_input==1)
     {
         if(count <=50)
            {
         r = c+1;
         amount = amount + 50;
         count = count + 1;
     }
     else
        cout<<"No more cars,parking is full"<<endl;
     }

     else if(u_input==2)
     {
         if(count <=50)
         {

         amount = amount + 200;
         count = count + 1;
         c++;
     }
     else
        cout<<"Parking id full"<<endl;
     }
     else if(u_input==3)
     {
         if(count <=50)
         {

          b++;
         amount = amount + 400;
         count = count + 1;
     }
     else
        cout<<"parking is full"<<endl;
     }

     else if(u_input==4)
     {
         if(count <=50)
         {

         amount = amount + 600;
         count = count + 1;
         t++;
     }
     else
        cout<<"Parking id full"<<endl;
     }
     else if(u_input==5)
     {
            cout<<"****************************"<<endl;

            cout<<"Your total bill = "<<amount<<endl;
            cout<<"The total number of vehicles parked = "<<count<<endl;
            cout<<"The total number of rickshaw parked = "<<r<<endl;
            cout<<"The total number of car parked = "<<c<<endl;
            cout<<"The total number of bus parked = "<<b<<endl;
            cout<<"The total number of track parked = "<<t<<endl;

            cout<<"****************************"<<endl<<endl;
     }
     else if(u_input==6)
     {
         amount = 0;
         count = 0;
         r = 0;
         c = 0;
         b = 0;

         cout<<"#############################"<<endl;
         cout<<" THANK YOU ALREADY YOUR BILL IS PAY"<<endl;
         cout<<"#############################"<<endl<<endl;

     }
     else
     {
        cout<<"Invalid number = "<<endl;
     }

    }


    getch();
}
