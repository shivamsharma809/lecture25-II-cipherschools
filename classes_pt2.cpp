#include<iostream>
using namespace std;

// we achieve this using something called a "class".
// A class is a user defined datatype which can be customized however we want.

class student
{
    public:

    string name;
    int mids;
    float ends;
    bool pre_abs;
};

class vehicle
{
    public:

    string car_name;
    string tyre_name;
    int nummber_of_tyres;
    int Number_of_seats;
};

int main()
{
    student a,b,c; // here a,b,c are of type student.

    int d,e,f;  // here d,e,f are of type int.

    vehicle kia , suzuki , ferrari;

    return 0;
}