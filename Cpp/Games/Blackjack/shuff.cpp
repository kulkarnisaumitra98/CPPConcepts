#include"enumstr.h"
#include"BJ.h"
void shuffdeck(std::array<Card,52>&deck)
{
  
   for(int i=0;i<52;i++)
   {
     int k=getrandom(0,51);  
     swapcard(deck[i],deck[k]);
   }
}
