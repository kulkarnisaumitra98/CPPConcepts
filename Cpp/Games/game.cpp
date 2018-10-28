#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

int getRandomNumber(int min, int max);

class Creature
{
protected :

	std::string m_name;
	char m_symbol;
	int m_health;
	int m_DPA;  // damage per attack
	int m_gold;
	
public :
	
	Creature(std::string name, char symbol, int health, int DPA, int gold)
		: m_name(name), m_symbol(symbol), m_health(health), m_DPA(DPA), m_gold(gold)
	{
	}
	
	
	inline std::string getName() { return m_name; }

	inline char getSymbol() { return m_symbol; }

	inline int getHealth() { return m_health; }

	inline int getDPA() { return m_DPA; }

	inline int getGold() { return m_gold; }
	
	inline bool isDead() { return ( m_health <= 0 ); }

	
	void reduceHealth(const int value)
	{
		m_health -= value;
	}

	
	void addGold(const int value)
	{
		m_gold += value;
	}

};


class Player : public Creature
{
private :

	int m_level{1};

public :

	Player(std::string name)
		: Creature(name, '@', 10, 1, 0)
	{
	}
	

	inline int getLevel() { return m_level; }
	
	inline bool hasWon() { return ( m_level >= 20 ); }

	
	void levelUp()
	{
		++m_level;
		++m_DPA;
	}

};


class Monster : public Creature
{
public :

	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

	
	struct MonsterData
	{
		const char* name;
		char symbol;
		int health;
		int DPA;
		int gold;
	};

	static MonsterData monsterData[MAX_TYPES];

	Monster(Type type)
	       :Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].DPA, monsterData[type].gold )
	{
	}	
	

	static Monster getRandomMonster()
	{
		return Monster(static_cast<Type>(getRandomNumber(0, MAX_TYPES - 1 ))); 
	}
};


Monster::MonsterData Monster::monsterData[MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};


int getRandomNumber(int min, int max)
{
	static const double f = 1.0/ (static_cast<double>(RAND_MAX) + 1);

	return static_cast<int>(min + rand() * f * (max - min + 1));
}


void fightMonster(Player &player)
{
	char ROF; // run or fight
	
	while(true)
	{	
		Monster monster(Monster::getRandomMonster());
	
		std::cout<<"You have encountered a "<<monster.getName()<<"("<<monster.getSymbol()<<").\n";

		while(true)
		{
			std::cout<<"Run(r) or Fight (f) : ";		

			std::cin>>ROF;

			if(ROF == 'r')
			{
				if(getRandomNumber(0,1))
				{
					std::cout<<"You fleed successfully \n";
					break;
				}
				else
				{
					std::cout<<"You failed to flee.\n";
					std::cout<<"The "<<monster.getName()<<" hit you with "<<monster.getDPA()<<".\n";

					player.reduceHealth(monster.getDPA());
					
					if(player.isDead())
					{
						std::cout<<"You died at level "<<player.getLevel()<<" with "<<player.getGold()<<" gold.\n";						
						std::cout<<"To bad you cant take that with you.\n";

					return;
					}
					else
					{
						continue;
					}
					
				}
			}
			else if(ROF == 'f')
			{
				std::cout<<"You hit the "<<monster.getName()<<" with damage "<<player.getDPA()<<".\n";
				
				monster.reduceHealth(player.getDPA());
	
				if(monster.isDead())
				{	
					std::cout<<"You killed the "<<monster.getName()<<".\n";
					
					player.levelUp();
					player.addGold(monster.getGold());

					if(player.hasWon())
					{
						std::cout<<"Congrats you won .\nYou have "<<player.getGold()<<" gold.\n";
						return;
					}
					
					std::cout<<"You are now at level "<<player.getLevel()<<".\n";
					std::cout<<"You found "<<monster.getGold()<<" gold.\n";

					break;
				}

				std::cout<<"The "<<monster.getName()<<" hit you back with "<<monster.getDPA()<<".\n";

				player.reduceHealth(monster.getDPA());

				if(player.isDead())
				{
					std::cout<<"You died at level "<<player.getLevel()<<" with "<<player.getGold()<<" gold.\n";				std::cout<<"To bad you cant take that with you.\n";

				return;
				}
				
			}
		}
	
	}
}

int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	
	std::string PlayerName;

	std::cout<<"Enter your name : ";

	std::cin>>PlayerName;

	Player player(PlayerName);

	std::cout<<"Welcome "<<player.getName()<<".\n";

	fightMonster(player);
	
return 0;
}
