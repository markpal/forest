#include <iostream>
#include <vector>

using namespace std;

#include "Car.hpp"
#include "Fruit.hpp"
//#include "Tree.hpp"
#include "Forest.hpp"


int main() {
  /*
  //Fruit gruszka;
  Fruit gruszka("zolta");
  
  //gruszka.color = "zielony";

  Car bmw;
  bmw.nazwa = "BMW";

  bmw.printName();
  
  cout << gruszka.getColor();

  {
     int abc = 0;
     Fruit mango; 
  }

  cout << "--------";
  */

  //Tree tuja(7, '@', "green");
  //tuja.printTree();

  Forest las;
  las.AddTree(3, 3, 5, '*', "green");
  las.AddTree(5, 15, 8, '#', "bgreen");
  las.AddTree(7, 5, 7, '#', "red");

  las.printTab();


  
  
}