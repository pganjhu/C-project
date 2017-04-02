#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

/* a class definition to display the name of places to be visited
        and places to see/ sight seeing
                the name of places included in agency......*/
class places
{
    public:
        void show_places();

};


/* a class definition called "transportation" to make records for various methods..... like
        entry of address of customer along with other data members
            function to take input,
                function to display, search, alter data etc.....*/
class transport
{
    private:
        char address[10];//to store address of the customer
        char destination[10];//place to be visited... final stop
        int no_of_passenger;//to read number of passengers
        float price;//to take input for advanced payment
    public:
        char vehicle[10];//to store the vehicle type like sedan, classic etc..
        char name[10];//to store name of the customer

        /* a function of transport class to read details of the customer */

        void enter_details()
        {
            cout<<"\nPLEASE FILL IN THE DETAILS ...\n";
            cout<<"transport RESERVATION FORM\n";

            cout<<"Name : \n";
            cout<<"Address : \n";
            cout<<"Destination : \n";
            cout<<"No. of passengers : \n";
            cout<<"PLEASE pay some advance payment for booking confirmation :\n";

            cin>>name;
            cin>>address;
            cin>>destination;
            cin>>no_of_passenger;
            cin>>price;
            vehicle_type();// invoking the function vehicle_type()

        }

        /* a function for transport class to display details */

        void show_transport_details()
        {
            cout<<"\ntransport     Reservation  ";
            cout<<"\n-----------------------";
            cout<<"\nName                 : "<<name;
            cout<<"\nAddress              : "<<address;
            cout<<"\nName of the vehicle  : "<<vehicle<<" , "<<destination;
            cout<<"\nNo. of passengers    : "<<no_of_passenger;
            cout<<"\n\nYour Reservations have been done (cost per km to be charged)\n\tpaid Amount!!!";
            cout<<"\nAmount               : Rs. "<<price;
            cout<<"\n\n";
        }

        /* a function to decide which vehicle to give to the travelers*/

        void vehicle_type()
        {
            if(no_of_passenger <=4 && no_of_passenger >=1)
                strcpy(vehicle,"INNOVA");
            else if(no_of_passenger >4 && no_of_passenger <=8)
                strcpy(vehicle,"XYLO");
            else if(no_of_passenger >8 && no_of_passenger <=20)
                strcpy(vehicle,"MINI_BUS");
            else
                strcpy(vehicle,"BUS");
        }
};

/*a class named hotel to make records for hotel booking  */

class hotel
{
    private:

        char hot_name[10];//to read name of the hotel
        char address[10];//to read address of the customer
        char destination[10];//address of the hotel located
        int no_of_days_stay;//no of days the customer has to stay in the hotel
        float price;//advance payment for hotel booking
    public:
        char name[10];//name of the customer
        /*a function of the hotel class to enter datas for a customer */
        void enter_details()
        {
            cout<<"\nPLEASE FILL IN THE DETAILS ...\n";
            cout<<"HOTEL RESERVATION FORM\n";

            cout<<"Name : \n";
            cout<<"Address : \n";
            cout<<"Destination : \n";
            cout<<"Name of Hotel : \n";
            cout<<"No. of days to stay : \n";
            cout<<"PLEASE pay some advance payment for booking confirmation :\n";

            cin>>name;
            cin>>address;
            cin>>destination;
            cin>>hot_name;
            cin>>no_of_days_stay;
            cin>>price;


        }
        /*a function to show details of the
                    customer who has booked room/rooms in the specified hotel */
        void show_hotel_details()
        {
            cout<<"\nHotel     Reservation  ";
            cout<<"\n-----------------------";
            cout<<"\nName                 :"<<name;
            cout<<"\nAddress              :"<<address;
            cout<<"\nName of the hotel    :"<<hot_name<<" , "<<destination;
            cout<<"\nNo. of Days to stay  :"<<no_of_days_stay;
            cout<<"\n\nYour Reservations have been done\n\tpaid Amount!!!";
            cout<<"\nAmount               : Rs. "<<price;
            cout<<"\n\n";
        }
};

/*a member function of class places
        to show the details of places to be visited
                and the names of the sight seeing*/

void places::show_places()
{
    cout<<"\n|..............................................................................|\n";
    cout<<"|                  P.S.P TRIP PLANNAR AND ADVISOR PVT. LTD.                    |\n";
   // cout<<"...............................................................................|\n";
    cout<<"|                     AN INITATIVE OF KARNATAKA TOURISM                        |\n";
    cout<<"|                (EXPLORE 2000 YEARS OLD TRADITION AND CULTURE)                |\n";
    //cout<<"...............................................................................|\n";
    cout<<"\n";
    cout<<"|                           PLACES TO BE VISITED                               |\n";
    cout<<"|------------------------------------------------------------------------------|\n";
    cout<<"| 1. TUMKUR          | 2. BANGALORE          | 3. DHARVAD                      |\n";
    cout<<"| DEVARANYA HILL     | LAL BAGH              | UNUKAL LAKE                     |\n";
    cout<<"| SIDDAGANGA MUTT    | COBBON PARK           | ISKON TEMPLE                    |\n";
    cout<<"| PAVGADA FORT       | ISKON TEMPLE          | SADHANKERI PARK                 |\n";
    cout<<"| MADHUGIRI HILL     | WONDERLA              | INDRA GLASS HOUSE               |\n";
    cout<<"| BLACK BUCK RESERVE | ULSOOR                | ETC.                            |\n";
    //cout<<"-------------------------------------------------------------------------------|\n";
    cout<<"\n";
    cout<<"|------------------------------------------------------------------------------|\n";
    cout<<"| 4. BELGAUM         | 5. MYSURU             | 6. SHIMOGA                      |\n";
    cout<<"| GOKAK FALLS        | MYSORE PALACE         | JOG FALLS                       |\n";
    cout<<"| MILITARY TEMPLE    | MYSORE ZOO            | KODACHANDRI                     |\n";
    cout<<"| KAPILASHWARA TEMPLE| SOMNATHPUR TEMPLE     | TIGER & LION SAFARI             |\n";
    cout<<"| KITTUR FORT        | SRIRANGAPATNM         | DABBE FALLA                     |\n";
    cout<<"| HIDKAL DAM         | CHAMUNDI HILLS        | SHIVAPPANAIKAA MUSEUM           |\n";
    //cout<<"-------------------------------------------------------------------------------|\n";
    cout<<"\n";
    cout<<"|------------------------------------------------------------------------------|\n";
    cout<<"| 7. MANGALORE       | 8. MANDYA             | 9. UDUPI                        |\n";
    cout<<"| PANAMBUR BEACH     | BARACHUKKI FALL       | KAPU BEACH                      |\n";
    cout<<"| ST. ALOYSIUS CHAPEL| DARIYA DAULAT BAGH    | ST. MARY'S BEACH                |\n";
    cout<<"| TANNIRBHAVI TEMPLE | KRISHNARAJA SAGAR DAM | SRI KRISHNA TEMPLE              |\n";
    cout<<"| TANNIRBHAVI BEACH  | DHEEMESHWARI SANCHURI | KADLU FALLS                     |\n";
    cout<<"| KADRI TEMPLE       | TIPU SULTAN MUSEUM    | KODI BEACH                      |\n";
    cout<<"-------------------------------------------------------------------------------|\n";
    cout<<"many more places to be added soon....                                          |\n";
    cout<<"P.S.P. trip advisor always better and cheaper                                  |\n";
    cout<<"THANK YOU!!! VISIT AGAIN                                                       |\n";
    cout<<"-------------------------------------------------------------------------------|\n";
    cout<<"designed by PAWAN, SHUBHAM, & PALLAVI\n";
}

/*----------------a global function ---------------------
        called create_transport() to make record for the customer
                record creation for the 1st time begins here*/

void create_transport()
{
    transport st;//object of class transport
    fstream f;//object for fstream
    char ch;//to input choices for further ilteration
    f.open("transport.dat",ios::out|ios::binary);
    if(f)
    {
        do
        {
            st.enter_details();
            f.write((char *)&st,sizeof(st));//to open a binary file
            cout<<"do you wish to add more (y/n) : ";
            ch=getche();
        }
        while(ch=='y'||ch=='Y');
    }
    else
        cout<<"\n file not created";
    f.close();//closing of the file
}

/*----------------a global function ---------------------
        called display_transport() to display records for the customer
                records of all the customers is listed one by one */

void display_transport()
{
    transport s;//object for class transport
    int i=0;//to count entry of records
    fstream f;//object for file stream
    f.open("transport.dat",ios::in|ios::binary);//opening a binary file to read
    if(f)
    {
        while(f.read((char *)&s,sizeof(s)))
        {
            cout<<"\nrecord no = "<<++i;
            s.show_transport_details();
        }
    }
    else
        cout<<"\nfile does not exist";
    f.close();//closing of the file
}

/*----------------a global function ---------------------
        called append_transport() to append record for a customer
                new record is appended at the end of other previously created record */

void append_transport()
{
    fstream f;//object for file stream
    transport st;//object for class transport
    f.open("transport.dat",ios::app|ios::binary|ios::out);//opening in write & append mode
    if(f)
    {
        st.enter_details();//calling enter_details() function
        f.write((char *)&st,sizeof(st));
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}
/*----------------a global function ---------------------
        called search_transport() to search record for a customer
                record is searched on the basis of name
                        of the customer*/
void search_transport()
{
    transport s;//object for class transport
    fstream f;//object for file stream
    f.open("transport.dat",ios::in|ios::out|ios::binary);//opening file in read & write mode
    int flag=0;//to check status for the success of search or not
    char nam[10];//to take input of customer to be searched
    if(f)
    {
        cout<<"\nenter name of the customer to be searched : ";
        cin>>nam;//reading name of the customer
        while(f.read((char *)&s,sizeof(s))&&flag==0)
        {
            if(strcmp(s.name,nam)==0)
            {
                flag=1;
                s.show_transport_details();
            }
        }
        if(flag==0)
            cout<<"record does not exist\n";
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}
/* ----------------a global function ---------------------
        called modify_transport() to modify record for the customer
                record is modified for the given customer after
                        searching record is present or not*/
void modify_transport()
{
    transport s;//object for class transport
    fstream f;//object for file stream
    f.open("transport.dat",ios::in|ios::out|ios::binary);//open binary file in read & write mode
    int flag=0;//status of the flag if record with given c name is present
    char nam[10];//to read name of the customer
    if(f)
    {
        cout<<"\nenter name of the customer to be modified : ";
        cin>>nam;//input name
        while(f.read((char *)&s,sizeof(s))&&flag==0)
        {
            if(strcmp(s.name,nam)==0)
            {
                flag=1;
                cout<<"\nold details\n";
                s.show_transport_details();//showing old record
                cout<<"enter new record\n";
                s.enter_details();//permitting to enter new record to be modified
                int pos=f.tellg();
                f.seekp(pos-sizeof(s));
                f.write(((char *)&s),sizeof(s));
                cout<<"\nrecord modified ---------";
            }
        }
        if(flag==0)
            cout<<"record does not exist\n";
    }
    else
        cout<<"\nfile does not exist";
    f.close();//closing file
}

/*---------------------------------- functions for hotel bookings-----------------*/
/*----------------a global function ---------------------
        called create_hotel() to make record for the customer
                record creation for the 1st time begins here*/

void create_hotel()
{
    hotel st;
    fstream f;
    char ch;
    f.open("HOTEL.dat",ios::out|ios::binary);
    if(f)
    {
        do
        {
            st.enter_details();
            f.write((char *)&st,sizeof(st));
            cout<<"do you wish to add more (y/n) : ";
            ch=getche();
        }
        while(ch=='y'||ch=='Y');
    }
    else
        cout<<"\n file not created";
    f.close();
}

/*----------------a global function ---------------------
        called display_hotel() to display records for the customer.......
                records are displayed one by one */

void display_hotel()
{
    hotel s;//object for class hotel
    int i=0;
    fstream f;
    f.open("HOTEL.dat",ios::in|ios::binary);
    if(f)
    {
        while(f.read((char *)&s,sizeof(s)))
        {
            cout<<"\nrecord no = "<<++i;
            s.show_hotel_details();
        }
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}
void append_hotel()
{
    fstream f;
    hotel st;
    f.open("HOTEL.dat",ios::app|ios::binary|ios::out);
    if(f)
    {
        st.enter_details();
        f.write((char *)&st,sizeof(st));
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}
void search_hotel()
{
    hotel s;
    fstream f;
    f.open("HOTEL.dat",ios::in|ios::out|ios::binary);
    int flag=0;
    char nam[10];
    if(f)
    {
        cout<<"\nenter name of the customer to be searched : ";
        cin>>nam;
        while(f.read((char *)&s,sizeof(s))&&flag==0)
        {
            if(strcmp(s.name,nam)==0)
            {
                flag=1;
                s.show_hotel_details();
            }
        }
        if(flag==0)
            cout<<"record does not exist\n";
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}
void modify_hotel()
{
    hotel s;
    fstream f;
    f.open("HOTEL.dat",ios::in|ios::out|ios::binary);
    int flag=0;
    char nam[10];
    if(f)
    {
        cout<<"\nenter name of the customer to be modified : ";
        cin>>nam;
        while(f.read((char *)&s,sizeof(s))&&flag==0)
        {
            if(strcmp(s.name,nam)==0)
            {
                flag=1;
                cout<<"\nold details\n";
                s.show_hotel_details();
                cout<<"enter new record\n";
                s.enter_details();
                int pos=f.tellg();
                f.seekp(pos-sizeof(s));
                f.write(((char *)&s),sizeof(s));
                cout<<"\nrecord modified ---------";
            }
        }
        if(flag==0)
            cout<<"record does not exist\n";
    }
    else
        cout<<"\nfile does not exist";
    f.close();
}

int main()
{
    while(1)
    {
    cout<<"\n-------------------------ADMIN'S LOGIN PORTAL----------------------------\n";
    cout<<"enter\n";
    cout<<"1. to see places to visit\n";
    cout<<"2. to enter/ to create records for hotel bookings\n";
    cout<<"3. to enter/ to create records for transportations bookings\n";
    cout<<"0. to exit\n";
    cout<<"--------------------------------------------------------------------------\n\n\n";
    char ch;
    ch=getche();
    switch(ch)
        {
        case '1':
                 places p;
                 p.show_places();
                 cout<<"\npress any key to back to main menu : ";
                 getch();
                 cout<<"\n\n";
                 break;
        case '2':
                cout<<"\n...................HOTEL BOOKINGS..........................\n";
                char ch;
                do
                {
                    cout<<"\n\n\n* * * * * * MAIN MENU * * * * * *\n";
                    cout<<"\t\tenter\n";
                    cout<<"1 to create a hotel file\n";
                    cout<<"2 to display a hotel record\n";
                    cout<<"3 to append a hotel record\n";
                    cout<<"4 to search in hotel record\n";
                    cout<<"5 to modify a hotel record\n";
                    cout<<"0 to exit\n";
                    cout<<"\n\nenter your choice [1 to 5], press 0 exit :";
                    ch=getche();
                    switch(ch)
                    {
                        case '1':
                            create_hotel();
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        case '2':
                            display_hotel();
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        case '3':
                            append_hotel();
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        case '4':
                            search_hotel();
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        case '5':
                            modify_hotel();
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        case '0':
                            cout<<"\nHAVE A NICE DAY AHEAD, BYE\n";
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        default:
                            cout<<"\nwrong choice";
                            cout<<"\npress any key to back to main menu : ";
                            getch();
                            break;
                        }
                    }while(ch!='0');
                    //cout<<"\npress any key to back to main menu : ";
                    getch();
                    break;
          case '3':
                    cout<<"\n.........................TRANSPORTATIONS BOOKING....................\n";
                    //char ch;
                    do
                    {
                        cout<<"\n\n\n* * * * * * MAIN MENU * * * * * *\n";
                        cout<<"\t\tenter\n";
                        cout<<"1 to create a transport file\n";
                        cout<<"2 to display a transport record\n";
                        cout<<"3 to append a transport record\n";
                        cout<<"4 to search in transport record\n";
                        cout<<"5 to modify a transport record\n";
                        cout<<"0 to exit\n";
                        cout<<"\n\nenter your choice [1 to 5], press 0 exit :";
                        ch=getche();
                        switch(ch)
                        {
                            case '1':
                                    create_transport();
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            case '2':
                                    display_transport();
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            case '3':
                                    append_transport();
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            case '4':
                                    search_transport();
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            case '5':
                                    modify_transport();
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            case '0':
                                    cout<<"\nHAVE A NICE DAY AHEAD, BYE\n";
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            default:
                                    cout<<"\nwrong choice";
                                    cout<<"\npress any key to back to main menu : ";
                                    getch();
                                    break;
                            }

                        }while(ch!='0');
                       // cout<<"\npress any key to back to main menu : ";
                        getch();
                        break;
        case '0':
                cout<<"\nHAVE A NICE DAY AHEAD, BYE\n";
                exit(0);
              //  cout<<"\npress any key to back to main menu : ";
                getch();
                break;
        default :
                cout<<"\nwrong choice\n";
                cout<<"enter your choice [1 to 3], press 0 exit \n";
                getch();
                break;
        }
    }
 return(0);
}

