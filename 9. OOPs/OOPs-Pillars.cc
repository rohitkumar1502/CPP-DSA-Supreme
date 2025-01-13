#include<iostream>
using namespace std; 
/*
// Sigle 
class Animal{
    public:
    int age;
    int weight;
   
    void eat(){
        cout<<"Eating"<<endl;
    }

    int getAge(){
        return this->age;
    }

    void setAge(int age){
        this->age = age;
    }

};

// class Dog:public Animal{
    

// };

// class Dog:protected Animal{
//     public:
//     void print(){
//         cout<<this->age;

//     }
// };

class Dog:private Animal{
    public:
    void print(){
        cout<<this->age;

    }
};

*/

// Multilevel
/*
class Fruit {
    public:
    string name;
};

class Mango : public Fruit{
  public:
  int weight;
};

class Alphanso : public Mango{
    public:
    int sugarLevel;
};
*/

// Multiple
/*
class A {
    public:
    int Phy;
    
    A(){
        Phy = 200;
    }
};

class B {
    public:
    int Phy;

    B(){
        Phy = 400;
    }
};
class C: public A, public B {
    public:
    int Math;

};
*/

// Heirarihical

class Car {
    public:
    int weight;
    string color;
    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
};

class Scorpio : public Car{

};

class Fortunure : public Car{

};
int main(){
    // Dog a;
    // a.print();

    /*
    Alphanso a;
    a.name = "dkkdss";
    a.weight =20;
    a.sugarLevel= 200;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;
  */
/*

   C obj;

   cout<<obj.A::Phy;
   cout<<obj.B::Phy;
   cout<<obj.Math;
*/
Scorpio a;
a.speedUp();

Fortunure b;
b.speedUp();

    return 0;
}