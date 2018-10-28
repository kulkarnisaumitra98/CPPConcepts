#include<iostream>
class Ball
{
  std::string m_color;
  int m_radius;
  
public:
  
  Ball(std::string s="black",int radius=10)
  {
    m_color = s;
    m_radius= radius;
  }
  
  Ball(int radius)
  {
    m_color = "black";
    m_radius= radius;
  }
 
  void print()
  {
    std::cout<<"Color: "<<m_color<<" radius: "<<m_radius<<"\n";
  }
};

int main()
{
   Ball def;
   def.print();
    
   Ball blue("blue"); 
   blue.print();

   Ball twenty(20);
   twenty.print();
   
   Ball blueTwenty("blue",20);
   blueTwenty.print();

return 0;   
}
   
