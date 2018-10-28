#include<iostream>
#include"enumstr.h"
#include<array>   
void assign()
{ 
  std::array<Card,52>deck;
  int card=0;
  for(int i=0;i<SUIT_MAX;i++) 
     for(int j=0;j<RANK_MAX;j++)
     {
        deck[card].suit=static_cast<Cardsuit>(i);
        deck[card].rank=static_cast<Cardrank>(j);
        card++;
     }
}

