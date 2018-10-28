#include<iostream>
#include<array>
#include"enumstr.h"
#include"BJ.h"
bool playBJ(std::array<Card,52>&deck)
{
  int sum2cards=0;
  int cardval=0;
  int dcardval=0;
  char ans;
  Card card1=deck[getrandom(0,51)];
  Card card2=deck[getrandom(0,51)];
  std::cout<<"Your two cards are ";
  printcard(card1);
  std::cout<<" ";
  printcard(card2);
  std::cout<<"\n";
  sum2cards=getcardvalue(card1)+getcardvalue(card2);
  cardval=cardval+sum2cards;
  std::cout<<"Your card value is : "<<cardval<<"\n";
  Card dcard=deck[getrandom(0,51)];
  std::cout<<"\nDealer has card ";
  printcard(dcard);
  dcardval=getcardvalue(dcard);
  std::cout<<"\nDealer's card value is : "<<dcardval<<"\n";
  
  while(true)
  {
    std::cout<<"Do you want to hit (y/n) : ";
    while(true)
    {
      std::cin>>ans;
      if((ans!='y')||(ans!='Y')||(ans!='n')||(ans!='N'))
      {
         std::cout<<"Please Enter correct input\n";
         continue;
      }
      else
        break;
   }
    if((ans=='y')||(ans=='Y'))
    {
      Card newcard=deck[getrandom(0,51)];
      printcard(newcard);
      std::cout<<"\n";
      cardval=cardval+getcardvalue(newcard);
      if(cardval<21)
        std::cout<<"Your current sum is "<<cardval<<"\n";
      else
        {
          std::cout<<cardval<<", You are busted\n";
          return false;
        }
     }
     else if((ans=='n')||(ans=='N'))
      {
        std::cout<<"\n";
        break;
      }
     if(cardval>21)
     {
       return false;
     }
  }
  while(true)
  {
     Card newcard=deck[getrandom(0,51)];
     std::cout<<"The dealers card is : ";
     printcard(newcard);
     std::cout<<"\n";
     dcardval=dcardval+getcardvalue(newcard);
     std::cout<<"Dealer's card value is : "<<dcardval<<"\n";
     if((dcardval>=17)&&(dcardval<=21))
        if(dcardval>=cardval)
           return false;
        else
           return true;
     else if(dcardval>21)
           return true;
     else if(dcardval<17)
           continue;
  }
     
     
   
}      
