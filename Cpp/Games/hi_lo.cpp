#include<iostream>
#include<ctime>
#include<cstdlib>
int main();
void playagain()
{
   std::cout<<"Do you want to play again (y/n): ";
   char input;
   std::cin>>input;
        if(input=='y')
           {
             main();
           }
        else if(input=='n')
        {   
         std::cout<<"\ntHaNks fOr pLaYiNg\n";
        }
        else
         playagain();
}

int getrand(int min,int max)
{
  static const double f=1.0/(static_cast<double>(RAND_MAX)+1.0);
 return min+static_cast<int>((max-min+1)*(rand()*f));
}

void play(int randno)
{
   int count=0,guess;
   for(;count<=6;count++)
   { 
    std::cout<<"Enter your guess\n";
    std::cin>>guess;
    if(std::cin.fail())
       {
         std::cout<<"\nDarudya kay bhi takto ka lavdya, parat kel\n\n";
         std::cin.clear();
         std::cin.ignore(32767,'\n');
         count=0;
         continue;
       }
    if(guess>randno)
     {
      std::cout<<"Your guess is too high\n";
        if(count==6)
           std::cout<<"\nYou are out of guesses nigger\nAnyways Thanks for playing I knew your shit ass brain counld never take a guess just like in JEE\n";
      continue;
     } 
    else if(guess<randno)
     {
      std::cout<<"Your guess is too low\n";
      if(count==6)
           std::cout<<"\nYou are out of guesses nigger\nAnyways Thanks for playing I knew your shit ass brain counld never take a guess just like in JEE\n";
      continue;
     }
    else
     {
       std::cout<<"Fuck yeah MF,your guess is correct\n";
       playagain();
       break;
     }
    }
              
}

int main()
{
   int randno;  
   srand(static_cast<unsigned int>(time(0)));
   randno=getrand(1,80);
   play(randno);
   return 0;
}

