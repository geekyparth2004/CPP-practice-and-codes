#include<iostream>
using namespace std;
class Person{

    private: 
    
    char name; 
    int age; 
    int id;

    public:

    // getter
    int getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    int getid()
    {
        return id;
    }

    // setter

    void setname(char name)
    {
        this->name = name;
    }

    
    void setage(int age)
    {
        this->age = age;
    }

    
    void setid(int id)
    {
        this->id = id;
    }

int emergency(Person a , Person b)
{if(Person a.getage > Person b.getage ) return a; 
 else return b;
}
int main()
{
 Person Akshat;
 Person Khushboo; 

 Akshat.setname("Akshat");
 Akshat.setage(17);
 Akshat.setid(10); 

 Khushboo.setname("Khusboo");
 Khushboo.setage(21);
 Khushboo.setid(45);

 emergency(Akshat,Khushboo);

}