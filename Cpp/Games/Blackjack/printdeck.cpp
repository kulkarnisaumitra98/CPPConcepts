#include<iostream>
#include<array>
#include"enumstr.h"
#include"BJ.h"
void printdeck(const std::array<Card,52>&deck)
{
   for(const auto &card : deck)
   {
      printcard(card);
      std::cout<<" ";
   }
  std::cout<<"\n";
   
}


