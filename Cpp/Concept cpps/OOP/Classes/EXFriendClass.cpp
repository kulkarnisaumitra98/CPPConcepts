#include<iostream>
class Point3d;

class Vector3d
{
   double m_x,m_y,m_z;

public:

   Vector3d(double x=0.0,double y=0.0,double z=0.0)
           :m_x{x},m_y{y},m_z{z}{}
   
   void print()
   {
      std::cout<<"Vector("<<m_x<<","<<m_y<<","<<m_z<<")\n";
   }
   
   friend class Point3d;
};

class Point3d
{
   double m_x,m_y,m_z;

public:
   
   Point3d(double x=0.0,double y=0.0,double z=0.0)
           :m_x{x},m_y{y},m_z{z}{}

   void print()
   {
      std::cout<<"Current Point("<<m_x<<","<<m_y<<","<<m_z<<")\n";
   }

   void moveByVector(const Vector3d &vector)
   {
       m_x+=vector.m_x;
       m_y+=vector.m_y;
       m_z+=vector.m_z;
   }
};

int main()
{
   Vector3d vector(1.0,1.0,1.0);
 
   Point3d point(1.0,1.0,1.0);
   point.print();

   point.moveByVector(vector);
   point.print();

}

