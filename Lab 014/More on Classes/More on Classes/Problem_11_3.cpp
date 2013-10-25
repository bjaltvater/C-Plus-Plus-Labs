/*// This program illustrates the use of copy constructors
// Brandon Altvater

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory  // class declaration with member functions defined in-line
{  
   private:
      char   *description;
      double price;
   public:
      Inventory()                               // default constructor
	  {  price = 0;
	      description = new char[6];
          strcpy(description, "empty");
	  } 
	  Inventory(char* d, double p)              // constructor
	  {  description = new char[strlen(d) + 1]; // Get needed amount of memory
                                                // to hold the description.
         strcpy(description, d);                  
         price = p;
	  }
	  Inventory(const Inventory &obj)
	  {
		description = new char[strlen(obj.description) + 1];
        strcpy(description, obj.description);
		price = obj.price;
        
	  }
	  ~Inventory()
      {  delete[] description; }          // Use destructor to free the memory
                                          // allocated for the dynamic variable.
      const char* getDescription()
      {  return description;  }

      double getPrice()
      {  return price;  }

      void setDescription(char* d)       // "Assumes" dynamic description
      {
		  delete[] description;
		  description = new char [strlen(d+1)];
		  
		  strcpy(description, d);         // variable has enough memory to hold
      }                                  // the new string. 

      void setPrice(double p)
      {   price = p;   }
};

int main()
{  
	Inventory toolOne("screwdriver", 2.99);
	Inventory toolTwo = toolOne;
   
   cout << fixed << setprecision(2) << showpoint;
   cout << "toolOne: " << toolOne.getDescription() << "  $" 
        << toolOne.getPrice()  << endl;
   cout << "toolTwo: " << toolTwo.getDescription() << "  $" 
        << toolTwo.getPrice()  << endl << endl;

   toolTwo.setDescription("electric screwdriver");

	                                 
   cout << "toolOne: " << toolOne.getDescription() << "  $" 
        << toolOne.getPrice()  << endl;
   cout << "toolTwo: " << toolTwo.getDescription() << "  $" 
        << toolTwo.getPrice()  << endl << endl;   

 return 0;
}*/