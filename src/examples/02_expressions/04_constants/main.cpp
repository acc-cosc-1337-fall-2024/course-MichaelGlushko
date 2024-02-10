#include<iostream>
#include "constants.h"

using std::cin; using std::cout;

int main()
{
    auto radius = 0;
    cout<<"Enter radius: ";
    cin>>radius;

    auto area = get_area_of_circle(radius);

    cout<<"Area: "<<area<<"\n";

    return 0;
}