#include <iostream>
#include <stdlib.h>
using namespace std;

int inputArraySize();
void inputArray(string[],string[],int[],int[],string[],string[]);
void DisplayArray(string[],string[],int[],int[],string[],string[]);

int arrSize;

int main()
{
    string fname[10];
    string lname[10];
    string email[10];
    string address[10];
    int age[10];
    int contacts[10];
    inputArray(fname,lname,age,contacts,email,address);
    DisplayArray(fname,lname,age,contacts,email,address);

    return 0;
}

int inputArraySize ()
{
    int age [arrSize];

    cout << "Enter Array Size : ";
    cin>> arrSize;

return arrSize;

}

void inputArray(string fname[],string lname[],int age[],int contacts[],string email[],string address[])
{
    inputArraySize();

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter First Name: " ;
        cin>> fname[i];
    }

     for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Last Name: " ;
        cin>> lname[i];
    }

     for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Age: " ;
        cin>> age[i];
    }

     for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Contact No.: " ;
        cin>> contacts[i];
    }

     for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Email: " ;
        cin>> email[i];
    }

     for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Address: " ;
        cin>> address[i];
    }
}

void DisplayArray(string fname[],string lname[],int age[],int contacts[],string email[],string address[])
{

system("CLS");
    cout << "FIRSTNAME" << "|" << "LASTNAME" << "|" << "AGE" << "|" << "CONTACTS" << "|" << "EMAIL" << "|" << "ADDRESS" << endl;
    for (int i=0; i<=arrSize-1;i++){

        cout << " \n"<< fname[i]<< " | " << lname[i] << " | " << age[i] << " | " << contacts[i] << " | " << email[i] << "|" << address[i] << endl;
    }
    }
