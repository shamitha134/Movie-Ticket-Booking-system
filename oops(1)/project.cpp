#include<iostream>
#include<iomanip>
#include<string>
#include"design.h"
using namespace std;


void mainmenu()
{
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<setw(76);
   cout<<"-- MAIN MENU --"<<endl;
       cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<setw(75);
    cout<<"1. NOW SHOWING"<<endl;
    cout<<endl;
    cout<<setw(75);
    cout<<"2. CHECK SEATS"<<endl;
    cout<<endl;
    cout<<setw(76);
    cout<<"3. BOOK TICKETS"<<endl;
    cout<<endl;
    cout<<setw(77);
    cout<<"4. SHOW MY TICKET"<<endl;
    cout<<endl;
    cout<<setw(78);
    cout<<"5. CANCEL MY TICKET"<<endl;
    cout<<endl;
    cout<<setw(72);
    cout<<"6. EXIT"<<endl;
    cout<<endl;
}
class Movie{
    public:
    string Name;
    string Genre;
    string Format;
   Movie(string name,string genre,string format){
       Name=name;
       Genre=genre;
       Format=format;
   }
};
class Movie1:Movie{
    public:
    int MOVIE_ID;
    Movie1(int movie_id,string name,string genre,string format):Movie(name,genre,format){
         MOVIE_ID=movie_id;
    }
    void func(){
        cout<<endl;
        cout<<MOVIE_ID<<"              "<<Name<<"            "<<Genre<<"        "<<Format<<endl;
    }
};
class Movie2:Movie{
    public:
    int MOVIE_ID;
    Movie2(int movie_id,string name,string genre,string format):Movie(name,genre,format){
         MOVIE_ID=movie_id;
    }
    void func(){
        cout<<endl;
        cout<<MOVIE_ID<<"              "<<Name<<"           "<<Genre<<"     "<<Format<<endl;
    }
};
class Movie3:Movie{
    public:
    int MOVIE_ID;
    Movie3(int movie_id,string name,string genre,string format):Movie(name,genre,format){
         MOVIE_ID=movie_id;
    }
    void func(){
        cout<<endl;
        cout<<MOVIE_ID<<"              "<<Name<<"             "<<Genre<<"       "<<Format<<endl;
    }
};
class Movie4:Movie{
    public:
    int MOVIE_ID;
    Movie4(int movie_id,string name,string genre,string format):Movie(name,genre,format){
         MOVIE_ID=movie_id;
    }
    void func(){
        cout<<endl;
        cout<<MOVIE_ID<<"              "<<Name<<"              "<<Genre<<"         "<<Format<<endl;
    }
};
void allmoviefunc()
{
    Movie1 m1= Movie1(101,"Avengers","Action/Scifi","3D");
    m1.func();
    Movie2 m2= Movie2(102,"Conjuring","Horror/Thriller","2D");
    m2.func();
    Movie3 m3= Movie3(103,"Titanic","Drama/Romance","2D");
    m3.func();
    Movie4 m4= Movie4(104,"Avatar","Drama/Scifi","3D");
    m4.func();
    cout<<endl;
    cout<<endl;
    
}
void choice1()
{
    cout<<"MOVIE_ID"<<"          "<<"MOVIE NAME"<<"           "<<"GENRE"<<"            "<<"FORMAT"<<endl;
        cout<<endl;
        allmoviefunc();
}
void choice2()
{
    cout<<endl;
    cout<<"MOVIE_ID"<<"         "<<"MOVIE NAME"<<"                "<<"SHOW TIMINGS"<<"                 "<<"AVAILABLE SEATS"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"101"<<"              "<<"Avengers"<<"            "<<"10:30 AM , 2:00 PM , 6:30 PM"<<"           "<<"31"<<endl;
        cout<<endl;
        cout<<"102"<<"              "<<"Conjuring"<<"           "<<"10:00 AM , 12:45 PM , 3:30 PM"<<"          "<<"40"<<endl;
        cout<<endl;
        cout<<"103"<<"              "<<"Titanic"<<"             "<<"9:45 AM , 1:00 PM , 5:30 PM"<<"            "<<"22"<<endl;
        cout<<endl;
        cout<<"104"<<"              "<<"Avatar"<<"              "<<"11:00 AM , 2:30 PM , 7:00 PM"<<"           "<<"13"<<endl;
        cout<<endl;
        cout<<endl;
}
void choice3()
{
    cout<<endl;
     cout<<"MOVIE_ID"<<"         "<<"MOVIE NAME"<<"         "<<"AVAILABLE SEATS"<<"        "<<"PRICE FOR EACH TICKET"<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"101"<<"              "<<"Avengers"<<"               "<<"31"<<"                      "<<"RS 200"<<endl;
     cout<<endl;
     cout<<"102"<<"              "<<"Conjuring"<<"              "<<"40"<<"                      "<<"RS 150"<<endl;
     cout<<endl;
     cout<<"103"<<"              "<<"Titanic"<<"                "<<"22"<<"                      "<<"RS 150"<<endl;
     cout<<endl;
     cout<<"104"<<"              "<<"Avatar"<<"                 "<<"13"<<"                      "<<"RS 200"<<endl;
     cout<<endl;
}
int time(int md)
{
    cout<<endl;
    int selecttime;
    string shwtime;
    if(md==101){
        while(true){
        cout<<endl;
        cout<<"Please select the Avengers movie timings :"<<endl;
        cout<<endl;
        cout<<"1. 10:30 AM"<<endl;
        cout<<"2. 2:00 PM"<<endl;
        cout<<"3. 6:30 PM"<<endl;
        cout<<endl;
        cin>>selecttime;
        if(selecttime >3 || selecttime<1){
            cout<<endl;
            cout<<"!! Please enter the valid Show timing !!" <<endl;
        }
        else {
            switch(selecttime){
                case 1:
                return 1;
                break;
                case 2:
                return 2;;
                break;
                case 3:
                return 3;
                break;
            }
            break;
        }
     }
    }
    if(md==102){
        while(true){
        cout<<endl;
        cout<<"Please select the Conjuring movie timings :"<<endl;
        cout<<endl;
        cout<<"1. 10:00 AM"<<endl;
        cout<<"2. 12:45 PM"<<endl;
        cout<<"3. 3:30 PM"<<endl;
        cout<<endl;
        cin>>selecttime;
        if(selecttime >3 || selecttime<1){
            cout<<endl;
            cout<<"!! Please enter the valid Show timing !!" <<endl;
        }
        else {
             switch(selecttime){
                case 1:
                return 4;
                break;
                case 2:
                return 5;
                break;
                case 3:
                return 6;
                break;
            }
            break;
        }
     }
    }
    if(md==103){
        while(true){
        cout<<endl;
        cout<<"Please select the Titanic movie timings :"<<endl;
        cout<<endl;
        cout<<"1. 9:45 AM"<<endl;
        cout<<"2. 1:00 PM"<<endl;
        cout<<"3. 5:30 PM"<<endl;
        cout<<endl;
        cin>>selecttime;
        if(selecttime >3 || selecttime<1){
            cout<<endl;
            cout<<"!! Please enter the valid Show timing !!" <<endl;
        }
        else {
             switch(selecttime){
                case 1:
                return 7;
                break;
                case 2:
                return 8;
                break;
                case 3:
                return 9;
                break;
            }
            break;
        }
     }
    }
    if(md==104){
        while(true){
        cout<<endl;
        cout<<"Please select the Avatar movie timings :"<<endl;
        cout<<endl;
        cout<<"1. 11:00 AM"<<endl;
        cout<<"2. 2:30 PM"<<endl;
        cout<<"3. 7:00 PM"<<endl;
        cout<<endl;
        cin>>selecttime;
        if(selecttime >3 || selecttime<1){
            cout<<endl;
            cout<<"!! Please enter the valid Show timing !!" <<endl;
        }
        else {
             switch(selecttime){
                case 1:
                return 10;
                break;
                case 2:
                return 11;
                break;
                case 3:
                return 12;
                break;
            }
            break;
        }
     }
    }

}
void showmyticket(int md,string movie,int screen,string time,string nameofcust,long long int ph)
{
    cout<<endl;
    cout<<endl;
    cout<<setw(85)<<"* * YOUR MOVIE TICKET * *"<<endl;
    cout<<endl;
    cout<<setw(107)<<"---------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<setw(73)<<"NAME : "<<nameofcust<<endl;
    cout<<endl;
    cout<<setw(73)<<"CONTACT_NO : "<<ph<<endl;
    cout<<endl;
    cout<<setw(73)<<"MOVIE_ID : "<<md<<endl;
    cout<<endl;
    cout<<setw(73)<<"MOVIE : "<<movie<<endl;
    cout<<endl;
    cout<<setw(73)<<"SCREEN : "<<screen<<endl;
    cout<<endl;
    cout<<setw(73)<<"TIME : "<<time<<endl;
    cout<<endl;
    cout<<endl;
    cout<<setw(107)<<"---------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
}

int main()
{
    design();
    mainmenu();
    cout<<endl;
    cout<<"Please enter your choice:"<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    if(choice==1){
        choice1();
        int q1;
        cout<<"Please enter 7 to go back to the MAINMENU"<<endl;
        cin>>q1;
        if(q1==7){
            mainmenu();
        }
        cout<<"Please enter your choice:"<<endl;
        cin>>choice;
    }
    if(choice==2){
          choice2();
          int q2;
          cout<<"Please enter 7 to go back to the MAINMENU"<<endl;
          cin>>q2;
          if(q2==7){
              mainmenu();
          }
          cout<<"Please enter your choice:"<<endl;
          cin>>choice;
    }
    int md;
    string moviename;
    int screen;
    int x;
    long long int ph;
    string nameofcust;
    if(choice==3){
         choice3();
         cout<<endl;
         cout<<"Please enter the MOVIE_ID of the movie you want to book :"<<endl;
         while(true){
         cin>>md;
         if(md==101 || md==102 || md==103 || md==104){
         x=time(md);
         if(md==101){
             moviename="Avengers";
             screen=1;
         }
         if(md==102){
             moviename="Conjuring";
             screen=2;
         }
         if(md==103){
             moviename="Titanic";
             screen=3;
         }
         if(md==104){
             moviename="Avatar";
             screen=4;
         }
         cout<<endl;
         cout<<"Please enter your First Name :"<<endl;
         cin>>nameofcust;
         cout<<endl;
         cout<<"Please enter your contact number :"<<endl;
         cin>>ph;
         while(true){
         cout<<endl;
         cout<<"Please enter the No.of seats you want to book :"<<endl;
         int seats;
         cin>>seats;
         if( (md==101 && seats<=31) || (md==104 && seats<=13) ){
             cout<<endl;
             cout<<"Total price = "<<seats*200<<"/-"<<endl;
             break;
         }
         if( (md==102 && seats<=40) || (md==103 && seats<=22)){
             cout<<endl;
             cout<<"Total price = "<<seats*150<<"/-"<<endl;
             break;
         }
         else {
             cout<<endl;
             cout<<"!! The No.of seats you entered are not available !! :( :( :("<<endl;
         }
        }
        
         break;
         
    }
    else {
        cout<<"Please enter the valid MOVIE_ID"<<endl;
    }
         }
         cout<<endl;
         cout<<endl;
         cout<<"Your movie ticket booked. Hope you'll enjoy the movie :) :) :)"<<endl;
         cout<<endl;
         cout<<"You can now see your ticket in SHOW MY TICKET section in MAINMENU"<<endl;
         cout<<endl;

          int q3;
        cout<<"Please enter 7 to go back to the MAINMENU"<<endl;
        cin>>q3;
        if(q3==7){
            mainmenu();
        }
        cout<<"Please enter your choice:"<<endl;
        cin>>choice;
  }
  string k;
  if(choice==4){
      if(x==1){
          k="10:30 AM";
      }
      else if(x==2){
          k="2:00 PM";
      }
      else if(x==3){
          k="6:30 PM";
      }
      else if(x==4){
          k="10:00 AM";
      }
      else if(x==5){
          k="12:45 PM";
      }
      else if(x==6){
          k="3:30 PM";
      }
      else if(x==7){
          k="9:45 AM";
      }
      else if(x==8){
          k="1:00 PM";
      }
      else if(x==9){
          k="5:30 PM";
      }
      else if(x==10){
          k="11:00 AM";
      }
      else if(x==11){
          k="2:30 PM";
      }
      else if(x==12){
          k="7:00 PM";
      }
      showmyticket(md,moviename,screen,k,nameofcust,ph);
      cout<<endl;

        int q4;
        cout<<"Please enter 7 to go back to the MAINMENU"<<endl;
        cin>>q4;
        if(q4==7){
            mainmenu();
        }
        cout<<"Please enter your choice:"<<endl;
        cin>>choice;
  }
  if(choice==5){
      cout<<endl;
      cout<<endl;
      char p;
      cout<<"Are you sure you want to cancel your ticket??"<<endl;
      cout<<endl;
      cout<<"Press Y to proceed with the cancellation (OR) Press N to go back to MAINMENU"<<endl;
      cin>>p;
      if(p=='Y'){
      nameofcust.clear();
      md=0;
      moviename.clear();
      screen=0;
      k.clear();
      ph=0;
      showmyticket(md,moviename,screen,k,nameofcust,ph);
      cout<<setw(90);
      cout<<"Your Movie Ticket Cancelled Succesfully"<<endl;
    }
    else {
        mainmenu();
    }
        int q5;
        cout<<"Please enter 7 to go back to the MAINMENU"<<endl;
        cin>>q5;
        if(q5==7){
            mainmenu();
        }
        cout<<"Please enter your choice:"<<endl;
        cin>>choice;

  }
  if(choice==6){
      cout<<endl;
      cout<<endl;
      cout<<setw(102)<<"THANK YOU FOR USING OUR MOVIE TICKET BOOKING SYSTEM :) :) :)"<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      
  }
  
return 0;
}