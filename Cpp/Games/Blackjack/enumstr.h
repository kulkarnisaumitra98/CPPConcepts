#include<array>
enum Cardrank
{
  RANK_ACE,
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  RANK_JACK,
  RANK_QUEEN,
  RANK_KING,
  RANK_MAX
};

enum Cardsuit
{
  SUIT_CLUB,
  SUIT_SPADES,
  SUIT_HEART,
  SUIT_DIAMOND,
  SUIT_MAX
};

struct Card
{
  Cardrank rank;
  Cardsuit suit;
};


