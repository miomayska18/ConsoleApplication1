// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vehicle
{
public:
    int f1;

    Vehicle()
    {
        //RTTI runtime type info, kazva se reflection!!!; bez zvezda na this izliza sus zvezda na konzolata
        cout << typeid(*this).name() << " > Constructor " << endl;
    }

    //s chavkite ima shablon

    ~Vehicle()
    {
        cout << typeid(*this).name() << " > Destructor " << endl;
    }
protected:
    int f2; // public inhertiance dostupno??
private:
    int f3;
};

class Car : public Vehicle
{
public:
    void toString()
    {
        cout << "CAR" << endl;
    }
    Car()
    {
        cout << typeid(*this).name() << " > Constructor " << endl;
    }
    ~Car()
    {
        cout << typeid(*this).name() << " > Destructor " << endl;
    }
};

int main()
{
    Vehicle* c1 = new Car();
    //inheritance = IS-A relationship          audi IS A car haha
    //object composition = HAS-A relationship  audi HAS AN engine
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
