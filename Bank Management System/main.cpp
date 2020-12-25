#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Bank
{
  char name[50],add[50],type;
  float balance;
    public:
      void open_account();
      void deposit_amount();
      void withdraw_amount();
      void balance_enquiry();
};

void Bank::open_account()
{
  cout<<"\nEnter your full name:\n";
  cin.ignore();
  cin.getline(name,50);
  cout<<"Enter your address:\n";
  cin.getline(add,50);
  cout<<"Type of account: Savings(s) or Current(c)\n";
  cin>>type;
  cout<<"Enter the initial deposit:\n";
  cin>>balance;
  cout<<"Your account has been successfully created\n";
}

void Bank::deposit_amount()
{
  float amt;
  cout<<"\nEnter the amount to be deposit:\n";
  cin>>amt;
  balance += amt;
  cout<<"Success! Current Balance: "<<balance<<"\n";
}

void Bank::withdraw_amount()
{
  float amt;
  cout<<"\nEnter the amount to be withdraw:\n";
  cin>>amt;
  if((balance-amt) >= 0)
  {
    balance -= amt;
    cout<<"Success! Current Balance: "<<balance<<"\n";
  }
  else
  {
    cout<<"Not enough Balance\n";
  } 
}

void Bank::balance_enquiry()
{
  cout<<"\nFull Name:\t"<<name<<"\n";
  cout<<"Address:\t"<<add<<"\n";
  cout<<"Type of Account:\t"<<type<<"\n";
  cout<<"Current Balance:\t"<<balance<<"\n";
}

int main() 
{
  Bank obj;
  int ch;

  while(1)
  {
    cout<<"\n1) Open Account\n";
    cout<<"2) Deposit Amount\n";
    cout<<"3) Withdraw Amount\n";
    cout<<"4) Balance Enquiry\n";
    cout<<"5) Exit\n";
    cout<<"Select the option:\n";
    cin>>ch;

    switch(ch)
    {
      case 1: 
      obj.open_account();
      break;

      case 2: 
      obj.deposit_amount();
      break;

      case 3: 
      obj.withdraw_amount();
      break;

      case 4: 
      obj.balance_enquiry();
      break;

      case 5:
      exit(0);
      break;
      
      default: cout<<"Enter valid option. Try Again!\n";
    }
  }
}
