void printcard(const Card &card);
void printdeck(const std::array<Card,52>&deck);
void swapcard(Card &card1,Card &card2);
int getrandom(int min,int max);
int getcardvalue(const Card &card);
void shuffdeck(std::array<Card,52>&deck);
bool playBJ(std::array<Card,52>&deck);
