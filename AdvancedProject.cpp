// AdvancedProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef unsigned int uint;
typedef long double ld;
typedef double db;


void swap(lli*, lli*);
void nLine();
int main()
{
    int choice;
        cout << "1 for swap and ";
    cout << "any other number for exit\n";
    cin >> choice;
    switch (choice) {

    case 1:


        lli a;
        lli b;
        cout << "Enter a number: ";

        cin >> a;
        cout << "\nEnter another number: ";
        cin >> b;
        if (a && b >= 0) {
            cout << "First values a: " << a << "\n";
            cout << " First Values b: " << b << endl;
            swap(&a, &b);
            nLine();

            cout << " After Swap a: " << a << "\n";
            cout << "After swap b: " << b << endl;
        }
        else {
            cout <<
                "Error";

                
            nLine();
        }

        break;

    }
   
}

void swap(lli* a, lli* b) {
    lli temp = *a;
    *a = *b;
    *b = *a;
}
void nLine() { 
    cout <<
        "\n";
}