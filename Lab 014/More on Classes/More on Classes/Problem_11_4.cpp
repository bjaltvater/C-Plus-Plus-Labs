/*// This program contains a revised version of the Inventory class
// and uses it to illustrate operator overloading.
// Brandon Altvater

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory  // class declaration with member functions defined in-line
                 // a quantity member variable has replaced the price variable
{  private:
      char *description;
      int  quantity;
   public:
      Inventory()                               // default constructor
      {  description = new char[6];
         strcpy(description, "empty");
         quantity = 0;
      } 

      Inventory(char* d, int q   )              // constructor
      {  description = new char[strlen(d) + 1]; // Get needed amount of memory
                                                // to hold the description.
         strcpy(description, d);                  
         quantity = q;
      }

      Inventory(Inventory &object)              // copy constructor
      {  description = new char[strlen(object.description) + 1];
         strcpy(description, object.description);                  
         quantity = object.quantity;
      }

      ~Inventory()
		{  delete[] description; }       // Use destructor to free the memory
                                       // allocated for the dynamic variable.
      const char* getDescription()
		{  return description;  }

      double getQuantity()
		{  return quantity;  }

      void setDescription(char* d)       
		{  delete [] description;
	       description = new char[strlen(d) + 1];
		   strcpy(description, d);        
		}                                  

      void setQuantity(int q)
		{   quantity = q;   }

      Inventory operator=(const Inventory &right) // Overload the = operator
		{  
			delete [] description;
			description = new char[strlen(right.description) + 1];
			strcpy(description, right.description);
			quantity = right.quantity;
			
			return *this;
		}

      int operator+(const Inventory &right)      //Overload the + operator
		{  
			Inventory temp;

			temp.quantity = quantity + right.quantity;
			
			return temp.quantity;
		}
	  int operator-(const Inventory &right)
	  {
		  Inventory temp;
		  
		  temp.quantity = quantity - right.quantity;

		  return temp.quantity;
	  }
};

int main()
{  
	Inventory item1("7 inch screwdriver",22);

	Inventory item2("9 inch screwdriver",14);

	Inventory item3("wrench",10);
  	   
   cout << "item1: " << item1.getDescription() << "  " 
        << item1.getQuantity()  << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl; 

   item3 = item2;

   cout << "The following two items should now be identical." << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl;

   item3.setDescription("wrench");

   cout << "The change to item3 should not affect item2." << endl
        << "item2 should still be a screwdriver." << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl; 
 		
   cout << "Total number of screwdrivers on hand: " 
        << item1+item2  << endl;

   cout << "There are '" << item1 - item2 << "' 7 inch screwdrivers more than there are 9 inch screwdrviers" << endl;

   return 0;
}
*/