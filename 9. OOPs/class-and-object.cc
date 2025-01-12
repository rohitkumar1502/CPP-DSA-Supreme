#include <iostream>
using namespace std;
/*
class Animal {
    int age;
    int weight;
    char name;

};
*/
class Animal
{
    // State or Properties
private:
    int weight;

public:
    int age;
    string type;

    // Default Constructor

    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "Constructor is calling" << endl;
    };

    // Parametrised constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Parametrised constructor is called" << endl;
    };

    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parametrised constructor two is called" << endl;
    };
    Animal(int age, int weight, string type)
    {
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout << "Parametrised constructor Three is called" << endl;
    };
    // Copy Constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout << "Copy constructor is called" << endl;
    };
    void print()
    {
        cout << this->age << " " << this->weight << " " << type << endl;
    }
    // behavior
    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    void eat()
    {
        cout << "Eating" << endl;
    }

    int getWeight()
    {
        return weight;
    }

    // void setWeight(int w){
    //     weight = w;
    // }
    void setWeight(int weight)
    {
        this->weight = weight;
    }

    ~Animal()
    {
        cout << "I'm inside the destructor" << endl;
    }
};
int main()
{
    // cout<<"Size of the Class: "<<sizeof(Animal);

    // Object creation
    /*
    // Static memory allocation
    Animal ramesh;
    ramesh.age = 10;
    ramesh.type = "Lion";
    cout<<"Age: "<<ramesh.age<<endl;
    cout<<"Type: "<<ramesh.type<<endl;
    ramesh.eat();
    cout<<endl;

    ramesh.setWeight(20);

    cout<<"Weight is "<<ramesh.getWeight()<<endl;
    */
    // Dynamic memory allocation
    /*
        Animal *suresh = new Animal;

        (*suresh).age = 20;
        (*suresh).type = "Dog";

        // Alternate way

        suresh->age = 30;
        suresh->type = "Tiger";

        suresh->eat();

        suresh->sleep();
        suresh->setWeight(34);
        cout << suresh->getWeight();
        */
    //    Animal a;
    //    Animal* b = new Animal;
    /*
        Animal a(30);
        Animal *b = new Animal(33, 222);

        Animal c = a;
        Animal d(a);
        Animal e(*b);
    */
    /*
        Animal a;
        a.age = 20;
        a.setWeight(50);
        a.type = "Lion";
        Animal b = a;

        a.print();
        b.print();
        a.type[0] = 'G';
        cout<<"a ->";
        a.print();
        cout<<"b ->";
        b.print();

    */
    cout<<"a object is created"<<endl;
    Animal a;
    a.age = 10;

    cout<<"b object is created"<<endl;
    Animal* b = new Animal;

    b->age = 30;
    // Manually WE have do

    delete b;

    return 0;
}