#include <iostream>
#include <string>
#include "bookkeeping.h"

int main(){
  Bookkeeping* arr = new Bookkeeping[3];
  arr[0].setName("Nadejda");
  arr[0].setAge(41);
  arr[0].setMoney(50000);

  arr[1].setMeta("Den", 45, 100000);
  arr[2].setMeta("Nikita", 18, 5000);

  std::cout<<    arr[0].getName()   <<
       "\n"<<    arr[0].getAge()    <<
       "\n"<<    arr[0].getMoney()  <<"\n";

  arr[1].print();
  arr[2].print();
  return 0;
}

/*
git add bookkeeping.cpp  bookkeeping.h  main.cpp  README.md
git commit -m "$1"
git push -u origin master
*/
