#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

char pword[10] = {"rajat@123"};
char choice;
int uno;

void message();
void login();
void information_desk(char);
void user1();
//void user2();
//void user3();
//void user4();
//void user5();

int main()
{
    message();
    login();
    system("cls");
    cout<<"Show voting procedure? <Y/N>"<<endl;
    cin>>choice;
    information_desk(choice);
    system("cls");
    cout<<"Enter your user no.: ";
    cin>>uno;
    system("cls");
    switch(uno)
    {
        case 100: user1(); break;
        //case 101: user2(); break;
        //case 102: user3(); break;
        //case 103: user4(); break;
        //case 104: user5(); break;
    }
}
void message()
{
    system("color 3F");
    cout<<"***********************************************Welcome to Voting System***********************************************"<<endl;
}

void login()
{
     char pass[10];
     cout<<"Enter the password: ";
     cin>>pass;
     if(strcmp(pass, pword) == 0)
     {
         cout<<"Access Granted. Press any key to continue.."<<endl;
         getch();
     }
     else
     {
         cout<<"Incorrect Password. Press any key to try again!"<<endl;
         getch();
         system("cls");
         message();
         login();
     }
}
void information_desk(char choice)
{
    message();
    if(choice=='y' || choice=='Y')
    {
        system("cls");
        cout<<"Procedure:\n\n\n";
        cout<<"1. Enter your user no."<<endl;
        cout<<"2. Enter your CNIC"<<endl;
        cout<<"3. Vote your choice"<<endl;
        cout<<"Press any key to continue..";
    }
    else
    {
        system("cls");
    }
}

void user1()
{
    char one[5] = {"6029"};
    char one1[5];
    cout<<"Hello user 1!"<<endl;
    jump:
    cout<<"Enter CNIC no.: ";
    cin>>one1;
    system("cls");
    if(strcmp(one, one1)==0)
    {
        cout<<"CNIC matched."<<endl;
    }
    else
    {
        cout<<"CNIC not matched."<<endl;
        goto jump;
    }
}
