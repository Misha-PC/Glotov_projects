#include <string>
#include <iostream>

#ifndef BOOKKEEPING_H
#define BOOKKEEPING_H

class Bookkeeping   {
public:
  std::string m_name;
  int m_age;
  double m_money;

  void print();

  void setName(std::string name);
  void setAge(int age);
  void setMoney(int money);

  std::string getName();
  int getAge();
  double getMoney();
};
#endif
