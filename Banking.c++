#include<iostream>
using namespace std;
int main()
{
    int n,choice,checkout,amount,loan,i;
    long int Aadhar,number;
    string address;
    char name,HARSHAL,Email,a;
    cout<<"************************************************** BANK APP ************************************************************\n ";
    cout<<"\t \t \t \t \t \t ***** Functions ***** \n";
    cout<<" * Case 1: OPEN ACCOUNT \n"<<" * Case 2: ADD AMOUNT \n"<<" * Case 3: CHECKOUT \n"<<" * Case 4: APPLY FOR LOAN\n";
    do{
    cout<<"\n \t \t \t \t \t ********* Enter choice *********"<<endl;
    cin>>choice;
    amount=n;

    switch(choice){
    case 1:
         cout<<"\n \t * Enter Name - ";
         cin>>name;
         cout<<"\n \n \n \t \t \t \t \t ******* ACCOUNT SUCCESFULLY CREATED *******";

break;

case 2:
    cout<<"\t \t \t \t \t **** Enter amount for deposite **** \n";
    cin>>n;
    cout<< n <<"- Amount added to your account";
    break;
case 3:
    cout<<"\n \t \t \t \t \t \t*** Checkout ***";
    cout<<"\n \t * You have "<<n<<" in your account*";
    cout<<"\n \t * Enter amount for checkout - ";
    cin>>amount;
    /*if(amount>=1000 && amount<=2000)
    {
cout<<"Checkout is not possible \n";
    }*/
    if(n>=amount)
        {
             cout<<"\n *Sure";
              cout<<"\n * Amount is successfully Removed";

    }
    else{
        cout<<"\n not possible";
    }

    break;
    case 4:
        cout<<"\n \t \t \t \t \t********* TYPE OF LOAN *********"<<endl;
        cout<<" * Case 5: PERSONAL LOAN \n"<<" * Case 6: HOME LOAN \n"<<" * Case 7: GOLD LOAN \n"<<" * Case 8: STUDENT LOAN\n";
        do{
          cout<<"\n \t \t \t \t \t ******** Enter choice ********"<<endl;
    cin>>choice;

        switch(choice){
            case 1:
        case 5:
            cout<<"\n \t * PERSONAL LOAN";
               cout<<"\n \t * SENT PESONAL DETAIL ON EMAIL - bankloaniff@gmail.com";
            break;
             case 6:for(i=0;i<8;i++){
            cout<<"\n \t * HOME LOAN";
            cout<<"\n \t * SENT PESONAL DETAIL ON EMAIL - bankloaniff@gmail.com";
             }
         break;
          case 7:
            cout<<"\n \t * GOLD LOAN ";
            cout<<"\n \t * SENT PESONAL DETAIL ON EMAIL - bankloaniff@gmail.com";
         break;
          case 8:
            cout<<"\n \t * STUDENT LOAN";
            cout<<"\n \t * SENT PESONAL DETAIL ON EMAIL - bankloaniff@gmail.com";
         break;




        }
}
while(choice!=10 && choice!=10);


default:
    cout<<"\n \t \t \t \t \t ******* BANK IS CLOSED *******";
    }
    }while(choice!=5 && choice!=1);


    return 0;
}
