#include<iostream>
#include<array>
#include"enumstr.h"
#include"BJ.h"
int main()
{
   srand(static_cast<unsigned int>(time(0)));
   std::array<Card,52>deck;
   char op;
   int card=0;
   for(int i=0;i<SUIT_MAX;i++) 
     for(int j=0;j<RANK_MAX;j++)
     {
        deck[card].suit=static_cast<Cardsuit>(i);
        deck[card].rank=static_cast<Cardrank>(j);
        card++;
     }

 while(true)
 {  
   bool win=playBJ(deck);
   if(win==true)
     {
       std::cout<<"Congrats you won\nWant to play again(y/n) : ";
       std::cin>>op;
       if(op=='y')
         continue;   
       else if(op=='n')
         std::cout<<"Thanks for playing.\n";
         break;
     }
   else
    {
      std::cout<<"You lost\nWant to play again(y/n) : ";
      std::cin>>op;
      if(op=='y')
         continue;   
      else if(op=='n')
         std::cout<<"Thanks for playing.\n";
         break;
    }
 }   
}    

