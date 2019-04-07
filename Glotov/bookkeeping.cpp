#include <string>
#include <iostream>
#include "bookkeeping.h"

Bookkeeping::Bookkeeping(std::string name, int age, double money)
{
  Bookkeeping::setMeta(name, age, money);
  std::cout << name << "\tinitialized. \n";
}

Bookkeeping::~Bookkeeping()
{
  std::cout << m_name <<"\tdestroyed\n";
}


void Bookkeeping::print()
{
  std::cout << "Name: " << m_name <<
              "\nAge: " << m_age <<
           "\nMoney: $" << m_money << '\n';
}


std::string Bookkeeping::getName()            { return(m_name);   }
double Bookkeeping::getMoney()                { return(m_money);  }
int Bookkeeping::getAge()                     { return(m_age);    }

void Bookkeeping::setName(std::string name)   {  m_name = name;   }
void Bookkeeping::setAge(int age)             {  m_age = age;     }
void Bookkeeping::setMoney(int money)         {  m_money = money; }

void Bookkeeping::setMeta(std::string name, int age, double money)
{
  Bookkeeping::setName(name);
  Bookkeeping::setAge(age);
  Bookkeeping::setMoney(money);
}
