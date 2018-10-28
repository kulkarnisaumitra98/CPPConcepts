#include<iostream>
#include<string>
int main()

{
  const std::string names[]={"deva","dukya","tiruk","saumi","wadi","sush","akhya"};
  
  std::string s;
  std::cin>>s;
  
  bool found(false);
  

  for(const auto &ref : names)	// At every iteration the element's reference is stored in ref and it can be accessed through ref.
  {				// If we dont want to modify it we declare it const.
    if(ref==s)			// Also we dont specify the datatype of element and make it auto
    {  
      found=true;
      break;
    }
  }  
  

  if(found)
    std::cout<<s<<" is found\n";   
  else
    std::cout<<s<<" is not found\n";
}
