//class vehicle program

#include <iostream>
using namespace std;

class Vehicle
{//declarations
protected:
    string name;
    string model;
    string type;
    string color;
    string fuel;

    int eng_size;

public:
    void input();
    void output();
};//end class

//derived class inheriting from Vehicle
class Wagon:public Vehicle
{
public:
    void input();
    void output();

};

//member function definitions

void Vehicle::input()
{
    cout << " enter log book details: \n";

    cout <<" enter name: ";
    cin >> name;

    cout <<" enter model: ";
    cin >> model;

    cout <<" enter type: ";
    cin >> type;

    cout <<" enter color: ";
    cin >> color;

    cout <<" enter fuel : ";
    cin >> fuel;

    cout <<" enter engine size: ";
    cin >> eng_size;
}

void Vehicle::output()
{
    cout <<"\n log book details: \n";
    cout << " name: " << name;
    cout << "\n model: " << model;
    cout << "\n type: " << type;
    cout << "\n color: " << color;
    cout << "\n fuel: " << fuel;
    cout << "\n engine size: " <<eng_size;
    cout <<"\n**************************\n";
    cout <<"**************************\n";
    cout <<"\n";

}

void Wagon::input()
{
    cout << " enter wagon details: \n";

    cout <<" enter name: ";
    cin >> name;

    cout <<" enter model: ";
    cin >> model;

    cout <<" enter color: ";
    cin >> color;

    cout <<" enter fuel : ";
    cin >> fuel;

    cout <<" enter engine size: ";
    cin >> eng_size;
}


void Wagon::output()
{
    cout <<"\n wagon details: \n";
    cout << " name: " << name;
    cout << "\n model: " << model;
    cout << "\n color: " << color;
    cout << "\n fuel: " << fuel;
    cout << "\n engine size: " <<eng_size;
    cout <<"\n**************************\n";
}

int main()
{
    Vehicle veh; //object of class vehicle
    veh.input();
    veh.output();

    Wagon wgn;//object of class wagon
    wgn.input();
    wgn.output();

}//end main
