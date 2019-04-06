#include <string>
#include <iostream>
#include "bookkeeping.h"

void Bookkeeping::print()
{
  std::cout << "Name: " << m_name <<
              "\nAge: " << m_age <<
           "\nMoney: $" << m_money << '\n';
}

std::string Bookkeeping::getName()            {  return(m_name);  }
double Bookkeeping::getMoney()                { return(m_money); }
int Bookkeeping::getAge()                     { return(m_age); }

void Bookkeeping::setName(std::string name)   {m_name = name;}
void Bookkeeping::setAge(int age)             {  m_age = age;}
void Bookkeeping::setMoney(int money)         {  m_money = money;}
