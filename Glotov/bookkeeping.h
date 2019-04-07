#include <string>
#include <iostream>

#ifndef BOOKKEEPING_H
#define BOOKKEEPING_H

class Bookkeeping
{
public:
  std::string m_name;
  int m_age;
  double m_money;

  Bookkeeping();
  ~Bookkeeping();

  void print();

  std::string getName();
  int getAge();
  double getMoney();

  void setName(std::string name);
  void setAge(int age);
  void setMoney(int money);

  void setMeta(std::string, int, double);
};
#endif
