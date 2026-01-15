// DS_Activity1_PG.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Instructions: Dog Class Program
//  1. Class Definition
//  Private data members declared : name, age, breed
//  Correct data types used(string, int, string)
//  Data members are private (not public)
//  2. Member Functions
//  Setter functions(setName, setAge, setBreed) implemented
//  Getter functions(getName, getAge, getBreed) implemented
//  bark() function outputs "Woof! Woof!"
//  3. Main Function Usage
//  Creates a Dog object
//  Displays the dog’s name, age, and breed using getter functions
//  Modifies at least one attribute using a setter
//  Calls the bark() function

#include <iostream>
using namespace std;

// Dog class declaration.
class Dog
{
private:
    string name;
    int age;
    string breed;
public:
    void setName(string);
    void setAge(int);
    void setBreed(string);
    string getName() const;
    int getAge() const;
    string getBreed() const;
    void bark();
};

// setName assigns a name to the Name member.
void Dog::setName(string N)
{
    name = N;
}

// setAge assigns a age to the Age member.
void Dog::setAge(int M)
{
    age = M;
}

// setBreed assigns a breed to the Breed member.
void Dog::setBreed(string B)
{
    breed = B;
}

// getName returns the value in the Name member.
string Dog::getName() const
{
    return name;
}
// getAge returns the value in the Age member.
int Dog::getAge() const
{
    return age;
}
// getBreed returns the value in the Breed member.
string Dog::getBreed() const
{
    return breed;
}

// bark function
void Dog::bark()
{
    cout << "Woof! Woof!" << endl;
}

int main()
{
    Dog dog1;   // Define an instance of the Dog Class
    string dog_name;    // Local variable for Name.
    int dog_age;    // Local variable for Age.
    string dog_breed;   // Local variable for Breed.

    // Get the Dog's Name, Age, and Breed from the user.
    cout << "This program will print out information about your dog.\n";
    cout << "What is the name of the dog? ";
    cin >> dog_name;

    cout << "What is the age of the dog? ";
    cin >> dog_age;

    cout << "What is the breed of the dog? ";
    cin >> dog_breed;

    // Store the Name, Age, and Breed of the dog.
    dog1.setName(dog_name);
    dog1.setAge(dog_age);
    dog1.setBreed(dog_breed);

    // Display the Dog's data.
    cout << "\nHere is the Dog's data:\n";
    cout << "Name: " << dog1.getName() << endl;
    cout << "Age: " << dog1.getAge() << endl;
    cout << "Breed: " << dog1.getBreed() << endl;

    // Modify one attribute
    dog1.setAge(dog1.getAge() + 1);
    cout << "\nAfter a year...\n";
    cout << "New Age: " << dog1.getAge() << endl;

    // Call the bark function
    dog1.bark();
    return 0;
}
