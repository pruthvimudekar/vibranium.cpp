#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Destructor
    ~Person() {}

    // Getter for name
    std::string getName() {
        return name;
    }

    // Setter for name
    void setName(std::string n) {
        name = n;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Method to display information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person("Alice", 30);
    person.display();

    person.setName("Bob");
    person.setAge(25);
    person.display();

    return 0;
}
