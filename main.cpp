#include <iostream>
#include <vector>
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"

int main()
{
    int i;
    std::vector<figure*> v;
    figure* f;
    i = 0;
    while (i != 5) {
      std::cout << "🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️\n 1) Add figure \n 2) Delete figure \n 3) Call all functions for whole vector \n 4) Total area \n 5) Exit \n🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️🍆️\n ";
      std::cin >> i;
    switch (i) {
      case 1:
         int j;
         std::cout << "🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️\n 5) pentagon \n 6) hexagon \n 8) octagon \n🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️🦄️\n";
         std::cin >> j;
         if (j == 5) {
             f = new pentagon(std::cin);
         }
         else if (j == 6) {
             f = new hexagon(std::cin);
         }
         else if (j == 8) {
             f = new octagon(std::cin);
         }
         v.push_back(f);
         break;
      case 2:
          int k;
          std::cout << "Enter index:\n";
          std::cin >> k;
          if (k > v.size()) {
              break;
          }
          else {
              delete v[k];
              v.erase(v.begin() + k);
          }
          break;
      case 3:
         for (auto elem : v) {
             elem -> print(std::cout);
             std::cout << elem -> area() << "\n";
             std::cout << elem -> center();
          }
          break;
      case 4:
          double s = 0;
          for (auto elem : v) {
              s += elem -> area();
          }
          std::cout << " Total area:\n" << s;
          break;
    }
  }
  for(auto elem : v) {
      delete elem;
  }
}
