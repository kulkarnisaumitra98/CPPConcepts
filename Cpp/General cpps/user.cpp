#include<iostream>
#include<cstring>

class Question
{
private:

	std::string _text = "";
	std::string _title = "";
	int _id = 0;
	int _score = 0;

public:

	inline int getId(){ return _id; }


	Question* createQuestion(int id)
	{
		Question *que =  new Question;
	
		std::cout << "Enter Text\n";
		getline(std::cin, que-> _text);

		std::cout << "Enter Title\n";
		std::cin >> que-> _title;

		que-> _id = id;

		que-> print();
		
	return que;	
	}

	
	void print() { std::cout << _title << '\n' << "-> " << _text << '\n'; } 
};

class User
{
private:

	std::string _username;

public :

	User(std::string username) : _username(username)
	{
	}
};


int main()
{
	Question ques[6];
	que1.createQuestion(1);

	User u1("saumi");
	u1.que1

return 0;	
}


