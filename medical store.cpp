

Skip to content
Using Gmail with screen readers
in:sent tejaswinirepala1212@gmail.com 
Enable desktop notifications for Gmail.
   OK  No thanks
Meet
Hangouts

3 of 3
CODE
Inbox

Saketh Pentela
Oct 24, 2019, 8:44 PM
#include<iostream> #include<stdlib.h> using namespace std; class medicalshop { public: int p,s; float totalamount,amount1=0,amount2=0,amount3=0,amount4=0,amount

nalband abhinay
AttachmentsOct 24, 2019, 9:22 PM
On Thu, Oct 24, 2019 at 8:44 PM Saketh Pentela <sakethpentela01@gmail.com> wrote: #include<iostream> #include<stdlib.h> using namespace std; class medicalshop {

nalband abhinay <nalbandabhinaykumar@gmail.com>
Attachments
Oct 27, 2019, 1:28 PM
to tejaswinirepala1212


Attachments area

#include<iostream>
#include<stdlib.h>
using namespace std;
class medicalshop
{
public:
    int p,s;
    float totalamount,amount1=0,amount2=0,amount3=0,amount4=0,amount5=0,amount6=0,amount7=0;
    void start()
      {
        cout<<"scarcity of our items \n items not found";
      }
     void saredon()
    {
        cin>>p;
        cout<<"We are checking the stock\n\n Please wait...";
        _sleep(2000);
        if(p>=1)
        {
            float price,gst=3;
            cout<<"items found....\n";
            _sleep(1000);
            s=5*p;
            cout<<"the total is "<<"\t"<<s<<endl;
            price=s;
            amount1=price+((gst/100)*price);
            cout<<"the total amount with gst"<<"\t"<<amount1;
            cout<<"\n\n"<<"*HEALTH IS WEALTH*";
            cout<<"\n\n"<<"THANK YOU VIST AGAIN";
            _sleep(1000);
        }
        else
        {
            start();
        }
    }
        void dolo()
    {

            cin>>p;
            cout<<"we are checking the stock\n\nplease wait...";
             _sleep(2000);
            if(p>=1)
            {
                float price,gst=5;
                cout<<"items found....\n";
                 _sleep(1000);
                s=2*p;
                cout<<"the total is"<<"\t"<<s<<endl;
                price=s;
                amount2=price+((gst/100)*price);
                cout<<"the total amount with gst"<<"\t"<<amount2;

                cout<<"\n\n"<<"*HEALTH IS WEALTH*";
                cout<<"\n\n"<<"THANK YOU VISIT AGAIN";
                 _sleep(1000);
            }
            else
            {
                start();
            }
        }
       void crosin()
       {

           cin>>p;
           cout<<"we are checking the stock\n\nplease wait...";
            _sleep(2000);
           if(p>=1)
           {
               float price,gst=4;
               cout<<"items found....\n";
                _sleep(1000);
               s=3*p;
               cout<<"the total is" <<"\t" <<s<<endl;
               price=s;
               amount3=price+((gst/100)*price);
               cout<<"the total amount with gst"<<"\t"<<amount3;
               cout<<"\n"<<"*HEALTH IS WEALTH*";
               cout<<"\n"<<"THANK YOU VISIT AGAIN";
                _sleep(1000);
           }
           else
           {
               start();
           }
       }
       void pernex()
       {
           int s4=0;
           cin>>p;
           cout<<"we are checking the stock\n\nplease wait...";
            _sleep(2000);
           if(p>=1)
           {
               float price,gst=10;
               cout<<"items found...\n";
                _sleep(1000);
               s=120*p;
               cout<<"the total is "<<"\t"<<s<<endl;
               price=s;
               amount4=price+((gst/100)*price);
               cout<<"the total amount with gst"<<"\t"<<amount4;

               cout<<"*HEALTH IS WEALTH*";
               cout<<"\n"<<"THANK YOU VISIT AGAIN";
                _sleep(1000);
           }
           else
           {
               start();
           }
       }
       void allegra()
       {
           int s5=0;
           cin>>p;
           cout<<"we are checking the stock\n\nplease wait...";
            _sleep(2000);
           if(p>=1)
           {
               float price,gst=2;
               cout<<"items found...\n";
                _sleep(1000);
               s=100*p;
               cout<<"the total is"<<"\t" <<s<<endl;
               price=s;
               amount5=price+((gst/100)*price);
               cout<<"the total amount with gst"<<"\t"<<amount5;

               cout<<"\n"<<"*HEALTH IS WEALTH*";
               cout<<"\n"<<"THANK YOU VISIT AGAIN ";
                _sleep(1000);
         }
         else
         {
             start();
         }
       }
       void vitamin_a_capsule()
       {

            cin>>p;
           cout<<"we are checking the stock\n\nplease wait...";
           _sleep(2000);
           if(p>=1)
           {
               float price,gst=1.5;
               cout<<"items found...\n";
               _sleep(1000);
               s=5*p;
               cout<<"the total is"<<"\t"<<s<<endl;
               price=s;
               amount6=price+((gst/100)*price);
               cout<<"\n"<<"the total amount with gst"<<"\t"<<amount6;

               cout<<"\n"<<"*HEALTH IS WEALTH*";
               cout<<"\n"<<"THANK YOU VISIT AGAIN";
               _sleep(1000);
          }
          else
          {
              start();
          }
       }
          void strepsils()
          {
          int s7=0;
           cin>>p;
           cout<<"we are checking the stock\n\n please wait...";
           _sleep(2000);
           if(p>=1)
           {
               float price,gst=2;
               cout<<"items found...\n";
               _sleep(1000);
               s=10*p;
               cout<<"the total is"<<"\t"<<s<<endl;
               price=s;
               amount7=price+((gst/100)*price);
               cout<<"total amount with gst is "<<"\t"<<amount7;
               cout<<"\n"<<"*HEALTH IS WEALTH*";
               cout<<"\n"<<"THANK YOU VISIT AGAIN";
               _sleep(1000);
          }
          else
          {
              start();
          }
         }
         void total()
         {
            totalamount=amount1+amount2+amount3+amount4+amount5+amount6+amount7;
            cout<<"total amount is "<<totalamount;
         }

};

int main()
{
    medicalshop v;
    while (1)
    {
      int n;
    cout<<"\n\n";
    cout<<"\n\t\t**WELCOME TO MEDICAL STORE**";
    cout<<"\n";
    cout<<"PHARMACY";
    cout<<"\n1.SAREDON";
    cout<<"\n2.DOLO 650";
    cout<<"\n3.CROSIN";
    cout<<"\n4.PERNEX";
    cout<<"\n5.ALLEGRA";
    cout<<"\n6.VITAMIN A CAPSULE";
    cout<<"\n7.STREPCILS";
    cout<<"\n8.EXIT";
    cout<<"\n9.Total amount";
    cout<<"\nEnter your choice  ";
    cin>>n;
    switch (n)
    {
        case 1:
           {
            cout<<"\n"<<"how many tablets do u want  ";
            v.saredon();
            break;
           }

        case 2:
            {
                cout<<"\n "<<"how many tablets do you want  ";
                v.dolo();
                break;
            }
        case 3:
            {
                cout<<"\n "<<"how many tablets do you want  ";
                v.crosin();
                break;
            }
        case 4:
            {
                cout<<"\n "<<"how many cream boxes do you want  ";
               v.pernex();
                 break;
            }
        case 5:
            {
                cout<<"\n "<<"how many tablets do you want  ";
                v.allegra();
              break;
        }
        case 6:
            {
               cout<<"\n "<<"how many capsules do you want  ";
                v.vitamin_a_capsule();
                break;
            }
            case 7:
            {
                cout<<"\n "<<"how many packets  do you want  ";
            v.strepsils();
             break;
            }
              case 8:
            {
             exit(0);
              break;
            }
              case 9:
                {
                    v.total();
                    break;
                }
        default:
            {
           cout<<"\n";
            cout<<"\n "<<"please enter the correct choice  ";
       }
    }
 }
cout<<"\n";

}

INN.cpp
Displaying INN.cpp.