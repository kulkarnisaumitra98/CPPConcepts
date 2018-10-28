#include<iostream>
using arthmfuc = int(*)(int,int);

struct arthmstrct
{
   char op;
   arthmfuc ptr;
};

int getint()
{
  std::cout<<"Enter an integer\n";
  int x;
  std::cin>>x;
  return x;
}

char getop()
{
  char op;
  while(true)
  {
    std::cout<<"Enter operation\n"; 
    std::cin>>op;
    if((op!='+')&&(op!='-')&&(op!='*')&&(op!='/'))
      continue;
    else
      break;
  }
  return op;
}


int add(int x,int y)
{
  return x+y;
}

int sub(int x,int y)
{
  return x-y;
}

int mul(int x,int y)
{
  return x*y;
}

int divide(int x,int y)
{
  return x/y;
}

static arthmstrct arthmarray[]{ 
                                  {'+',add},
                                  {'-',sub},
                                  {'*',mul},
                                  {'/',divide}
                               };


arthmfuc getarthmfuc(char op)
{
  for(const auto &arthm : arthmarray)
  {
    if(arthm.op==op)
      return arthm.ptr;
  }
}

int main()
{
  int x=getint();
  int y=getint();
  arthmfuc ptr=getarthmfuc(getop());
  std::cout<<"The result is : "<<ptr(x,y)<<"\n";
}

  
