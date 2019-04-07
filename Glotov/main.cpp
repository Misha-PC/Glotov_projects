#include <iostream>
#include <string>
#include "bookkeeping.h"

int main(){
  Bookkeeping mom{"Naden/'ka", 41, 50000};
  Bookkeeping dad{"Den", 45, 100000};
  Bookkeeping son{"Nikita", 18, 5000};

  mom.setName("Nadejda");
  mom.setAge(40);
  mom.setMoney(70000);

  std::cout<<    dad.getName()   <<
       "\n"<<    dad.getAge()    <<
       "\n"<<    dad.getMoney()  <<"\n";

  mom.print();
  return 0;
}

/*
git add bookkeeping.cpp  bookkeeping.h  main.cpp  README.md
git commit -m "$1"
git push -u origin master
*/
