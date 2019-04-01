//File Name: main.cpp  //Author: Ellis Sentoso.
//Email Address: ellissentosotech@gmail.com
//Assignment Number: Cereal Box
//Description: Program that takes ounces per cereal box and outputs it in metric ton and tells
// and tells user how many boxes they need to make 1 metric ton.
//Last Changed: September 9, 2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare
    const double TON_OF_CEREAL = 35273.92;
    double totalCerealBox=0;
    double ouncesOfCereal=0;
    double tonOfCerealPerBox=0;

    //input
    cout << "Enter the ounces of cereal box: ";
    cin>>ouncesOfCereal;

    //process..

    tonOfCerealPerBox = ouncesOfCereal/TON_OF_CEREAL; // Divide ounces by ton of a cereal box to find total ton of in the cereal box
    totalCerealBox = TON_OF_CEREAL/ouncesOfCereal; // Divide a total ton by ounces of a cereal box per box to find out how many boxes needed to yield 1 metric ton.

    //Magic Formula
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //output
    cout << " You have " << tonOfCerealPerBox << " ton per box of cereal and need "<<totalCerealBox<<" boxes of cereal to yield 1 metric ton"<<endl;
    return 0;
}
