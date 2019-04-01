
#include <random>
#include <sstream>

#include "set.h"
#include "timetable.h"
#include "timer.h"

std::string addnumber( std::string s, long unsigned int i )
{
   std::ostringstream ind;
   ind << i;
   s += ind. str( );
   return s;
}

int main()
{
set test1 = {"a1", "a2", "a3", "a4", "a5"};
   set test2 = {"b1", "b2", "b3", "b4", "b5"};
   set test3 = {"a3", "a1", "a2"};
   set test4 = {"a1", "a2", "a3", "a4", "a5"};
   set test5;
   set test6 = test4;
   std::cout << "Check insert function" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test2 = " << test2 << "\n";
   test1.insert(test2);
   std::cout << "Result" << "\n";
   std::cout << "test1 = " << test1 << "\n";  
   std::cout << "Check subset function" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test3 = " << test3 << "\n";
   std::cout << "test6 = " << test6 << "\n";
   std::cout << "Result" << "\n";
   std::cout << subset(test3, test1) << "\n";
   std::cout << subset(test1, test6) << "\n";
   std::cout << subset(test6, test1) << "\n";
   std::cout << "Check remove function" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test2 = " << test2 << "\n";
   std::cout << "Result" << "\n";
   test1.remove(test2);
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "Check size function" << "\n";
   std::cout << test1.size() << " " << test3.size() << " " << test6.size() << "\n";
   std::cout << "Check clear function" << "\n";
   std::cout << "test4 = " << test4 << "\n";
   std::cout << "test6 = " << test6 << "\n";
   test4.clear();
   std::cout << "test4 = " << test4 << "\n";
   std::cout << "test6 = " << test6 << "\n";
   std::cout << "Check equal function" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test6 = " << test6 << "\n";
   std::cout << equal(test4, test1) << "\n";
   std::cout << "Check remove function" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test3 = " << test3 << "\n";
   test3.remove(test3); 
   test1.remove(test1);
   std::cout << "Result" << "\n";
   std::cout << "test1 = " << test1 << "\n";
   std::cout << "test3 = " << test3  << "\n";
return 0;
}
