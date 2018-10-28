#include"enumstr.h"
#include<iostream>
void printcard(const Card &card)
{
   switch(card.rank)
   {
      case RANK_ACE:  std::cout<<'A';break;
      case RANK_2:    std::cout<<'2';break;
      case RANK_3:    std::cout<<'3';break;
      case RANK_4:    std::cout<<'4';break;
      case RANK_5:    std::cout<<'5';break;
      case RANK_6:    std::cout<<'6';break;
      case RANK_7:    std::cout<<'7';break;
      case RANK_8:    std::cout<<'8';break;
      case RANK_9:    std::cout<<'9';break;
      case RANK_10:   std::cout<<'T';break;
      case RANK_JACK: std::cout<<'J';break;
      case RANK_QUEEN:std::cout<<'Q';break;
      case RANK_KING: std::cout<<'K';break;
   }
   
   switch(card.suit)
   {
      case SUIT_CLUB: std::cout<<'C';break;
      case SUIT_SPADES: std::cout<<'S';break;
      case SUIT_HEART: std::cout<<'H';break;
      case SUIT_DIAMOND: std::cout<<'D';break;
   }
}

