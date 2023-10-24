#include <iostream>
#include <string>

using namespace std;

class Animal
{
    private:
      string name;
      int population;

    public:
      Animal(string name, int population) : name(name), population(population) {}
      Animal() {}
     
      void setVar(string name, int population)
      {
         this->name = name;
         this->population = population;
      }
      
      string getName()
      {
         return name;
      }

      int getPopulation()
      {
        return population;
      }
};

int main()
{   
    // Using array of objects

    Animal animalArr[2];
    animalArr[0].setVar("Paul", 900);
    animalArr[1].setVar("John", 200);

    cout << animalArr[1].getName() << ". Population: " << animalArr[1].getPopulation() << endl;
    
    // Pointer to array object
    Animal *animalPtr = animalArr;
    cout << animalArr[0].getName() << ". Population: " << animalArr[0].getPopulation() << endl;
    
    // Using "->" operator to access object members thorugh pointer
    Animal *otherAnimalPtr = new Animal;

    otherAnimalPtr->setVar("Maguire", 50);
    cout << otherAnimalPtr->getName() << ". Population: " << otherAnimalPtr->getPopulation() << endl;

   
    return 0;
}