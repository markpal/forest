#include <iostream>

using namespace std;

#include "Fruit.hpp"

string Fruit::getColor()
{
  return color;
}

Fruit::Fruit()
{
    cout << "Creating Fruit" << endl;
}

Fruit::Fruit(string _color)
{
    color = _color;  
}

Fruit::~Fruit()
{
    cout << "Destroying Fruit" << endl;
}
