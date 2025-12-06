#include<iostream>
using namespace std;
struct bank
{
    private:
    string name;
    int pin;
    float bal;

    public:
    void createac();
    void dep();
    void withdraw();
    void checkbal();
    void changepin();
};

void bank::createac()
{
    cout<<"Enter your Name:";
    cin>>name;
    while(true)
    {
        cout<<"Please set a 4-digit Pin:";
        cin>>pin;
        if(pin >=1000 && pin<=9999)
        {
            break;
        }
        else
        {
            cout<<"Invalid pin";
        }
    }
    float dep;
    cout<<"Enter your deposit:";
    cin>>dep;
    if(dep<0)
    {
        bal=0;
    }
    else
    {
        bal=dep;
    }
    cout<<"Account created sucessfully!\n";
    cout<<"Thank you!";
}

void bank::dep()
{
    int p;
    while(true)
    {
        cout<<"Please enter your pin:";
        cin>>p;
        if(p==pin)
        {
            break;
        }
        else
        {
            cout<<"Invalid pin !";
        }
    }
    float dep;
    cout<<"Please enter the amount to deposit:";
    cin>>dep;
    if(dep>0)
    {
        bal=bal+dep;
        cout<<"Amount deposited sucessfully";
    }
    else
    {
        cout<<"Invalid Amount";
    }
}

void bank::withdraw()
{
    int p;
    while(true)
    {
        cout<<"Please enter the pin: ";
        cin>>p;
        if(p==pin)
        {
            break;
        }
        else
        {
            cout<<"Invalid pin";
        }
    }
    int amt;
    cout<<"Please enter the amount to withdraw:";
    cin>>amt;
    if(amt<bal)
    {
       bal=bal-amt;
       cout<<"Withdraw sucessful!";
      // cout<<"Current balance"<<bal<<endl;
    }
    else if(amt>bal)
    {
        cout<<"Insufficent balance";
    }
    else if(amt<=0)
    {
        cout<<"Invalid";
    }
}

void bank::checkbal()
{
    int p;
    while(true)
    {
        cout<<"Enter your pin:";
        cin>>p;
        if(p==pin)
        {
            break;
        }
        else
        {
            cout<<"Incorrect pin";
        }
    }
    cout<<"Your current balance is ₹"<<bal<<endl;
}

void bank::changepin()
{
    int oldp;
    while(true)
    {
        cout<<"Enter your old pin:";
        cin>>oldp;
        if(oldp==pin)
        {
            break;
        }
        else
        {
            cout<<"Incorrect pin";
        }
    }
    int newp;
    cout<<"Enter your new pin:";
    cin>>newp;
    if(newp>=1000 && newp<=9999)
    {
        pin=newp;
        cout<<"Pin updated sucessfully!";
    }
    else
    {
        cout<<"Only 4 digit pin!";
    }
}

int main()
{
    bank b;
    int ch;
    while(true)
    {
       cout<<"\n------Welcome to DBKI Bank-------\n";
       cout<<"Please select from below";
       cout<<"\n1.Create Account";
       cout<<"\n2.Deposit Amount";
       cout<<"\n3.Withdraw Amount";
       cout<<"\n4.Check Balance";
       cout<<"\n5.Change Pin";
       cout<<"\n6.Exit\n";
       cout<<"Enter choice:";
       cin>>ch;
       
       if(ch==1)
       {
         b.createac();
       }
       else if(ch==2)
       {
            b.dep(); 
       }
       else if(ch==3)
       {
        b.withdraw();
       }
       else if(ch==4)
       {
         b.checkbal();
       }
       else if(ch==5)
       {
           b.changepin();
       }
       else if(ch==6)
       {
            cout<<"Goodbye!";
       }
       else
       {
        cout<<"Invalid entry";
       }


    }
    return 0;
}