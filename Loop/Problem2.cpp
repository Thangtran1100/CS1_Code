//Name: Dai Tran
//CSCI-0106
//Assignment #2: Menu
//https://elcamino.instructure.com/courses/20367/pages/tutorial-loops-5-slash-5-implementation?module_item_id=1009926
 
#include <iostream>
#include <iomanip>
 
using namespace std;
 
const float CHEESE_SALAD = 1.50, PEPPERONI_BURGER = 2.50, CAESAR_PIZZA = 7.50;
 
int main()
{
   cout << setprecision(2) << fixed << showpoint;
 
   cout << "Each item may be ordered 1-10 times." << endl;
 
   cout << "-----------------------------------------" << endl;
 
   cout << "Type the number such as 1, 2, 3 below to begin order. Example: if you want to order cheese salad, then type in 1." << endl;
 
   cout << "-----------------------------------------" << endl;
 
   int order_item, count_cheese = 0, count_pepper = 0, count_caesar = 0;
 
   float price, total = 0;
 
   do
   { 
       cout << "The Menu:" << endl;
 
       cout << "1. Cheese Salad.................... $1.50" << endl;
        
       cout << "2. Pepperoni Burger................ $2.50" << endl;
        
       cout << "3. Caesar Pizza.................... $7.50" << endl;
 
       cout << "Enter menu item or type 0 to finish order: ";
 
       cin >> order_item;
 
       while ((order_item < 1 || order_item > 3) && order_item != 0)
       {
           cout << "Invalid!\nEnter menu item or type 0 to finish order: ";
 
           cin >> order_item;
       }
 
       switch (order_item)
       {
           case 1:
               if (count_cheese < 10)
               {
                   count_cheese++;
               }
               else
               {
                   cout << "Sorry, this item can only order 10 times\n";
               }
 
               price = CHEESE_SALAD;
 
               break;
 
           case 2:
               if (count_pepper < 10)
               {
                   count_pepper++;
               }
               else
               {
                   cout << "Sorry, this item can only order 10 times\n";
               }
 
               price = PEPPERONI_BURGER;
 
               break;
 
           case 3:
               if (count_caesar < 10)
               {
                   count_caesar++;
               }
               else
               {
                   cout << "Sorry, this item can only order 10 times\n";
               }
 
               price = CAESAR_PIZZA;
 
               break;
       }
 
   } while (order_item != 0);
 
   total = count_cheese * CHEESE_SALAD + count_pepper * PEPPERONI_BURGER + count_caesar * CAESAR_PIZZA;
  
   cout << "-----------------------------------------" << endl;
 
   cout << "Bill:\n";
 
   if (count_cheese != 0)
   {
       for (int i = 0; i < count_cheese; i++)
       {
           cout << "Cheese Salad" << setw(19) << "x 1\n";
       }
   }
 
   if (count_pepper != 0)
   {
       for (int i = 0; i < count_pepper; i++)
       {
           cout << "Pepperoni Burger" << setw(15) << "x 1\n";
       }
   }
 
   if (count_caesar != 0)
   {
       for (int i = 0; i < count_caesar; i++)
       {
           cout << "Caesar Pizza" << setw(19) << "x 1\n";
       }
   }
  
   cout << "Total: " << setw(18) << "$" << total << endl;
 
   return 0;
}
 
 

