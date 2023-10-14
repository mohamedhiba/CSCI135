// //Another C++ program; Demonstrates loops
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j;
//     for (i=0; i<5; i++)
//     {
//         cout << "The world is fucked"<< endl;
//     }
//     for (j = 10 ; j>0 ; j--)
//     {
//         cout << j << " ";
//     }
//     cout << endl <<"blast!" << endl;
//     return 0;
// }

// //Growth example
// #include <iostream>
// using namespace std;

// int main () 
// {
//   int population = 100;
//   cout << "Year\tPopulation\n";
//   for (int year = 0; year < 100; year= year+5)
//   {
//       cout << year << "\t" << population << "\n";
//       population = population * 2;
      
//   }
//   return 0; 
// }

// //Another C++ program; Demonstrates loops
// #include <iostream>
// using namespace std;

// int main () 
// {
//   int i,j,size;
//   cout << "Enter size: ";
//   cin >> size;
//   for (i = 0; i < size; i++)
//   {
//     for (j = 0; j < size; j++)
//       cout << "*";
//     cout << endl;
//   }
//   cout << "\n\n";
// //   for (i = size; i > 0; i--)
// //   {
// //     for (j = 0; j < i; j++)
// //       cout << "*";
// //     cout << endl;
// //   }
// //   return 0; 
// // }
//   for (i = 1; i < size+1; i++)
//   {
//     for (j = 0; j < i; j++)
//       cout << "*";
//     cout << endl;
//   }
//   return 0; 
// }


// i don't know 
// sometimes i am kinda wanna kill myself 
// what did i do ?
// nothing 
// or maybe i just don't know 
// i just wanna be happy 
// i feel empty even if people love me 
// i am not lonely, i feel lonely


// //Another C++ program; Demonstrates conditionals
// #include <iostream>
// using namespace std;

// int main () 
// {
//     int yearBorn;
//     cout << "Enter year born: ";
//     cin >> yearBorn;
//     if (yearBorn < 1946)
//     {
//         cout << "Greatest Generation";
//     }
//     else if (yearBorn <= 1964)
//     {
//         cout << "Baby Boomer";
//     }
//     else if (yearBorn <= 1984)
//     {
//         cout << "Generation X";
//     }
//     else if (yearBorn <= 2004)
//     {
//         cout << "Millennial";
//     }
//     else
//     {
//         cout << "TBD";
//     }

//     return 0; 
// }


// //Demonstrates logical expressions
// #include <iostream>
// using namespace std;

// int main () 
// {
//     string conditions = "blowing snow";  
//     int winds = 100;
//     float visibility = 0.2;
 
//     if ( ( (winds > 35) && (visibility < 0.25) ) &&
//          ( (conditions == "blowing snow") ||
//            (conditions == "heavy snow") ) )
//         cout << "Blizzard!\n";   

//     string origin = "South Pacific";  

//     if (winds > 74)
//         cout << "Major storm, called a ";
//     if ((origin == "Indian Ocean") 
//         ||(origin == "South Pacific"))
//         cout << "cyclone.\n";
//     else if (origin == "North Pacific")
//         cout << "typhoon.\n";
//     else
//         cout << "hurricane.\n";
//     return(0);
// }



// //Demonstrates loops
// #include <iostream>
// using namespace std;

// int main () 
// {
//   int num;
//   cout << "Enter an even number: ";
//   cin >> num;
//   while (num % 2 != 0)
//   {
//       cout << "\nThat's odd!\n";
//       cout << "Enter an even number: ";
//       cin >> num;
//   }
//   cout << "You entered: " 
//        << num << ".\n";
//   return 0; 
// }

// #include <iostream>
// using namespace std; 
// int main()
// {
//     int num;
//     do
//     {
//         cout << "Enter an EVEN number:"<<endl;
//         cin >> num;
//     } while (num % 2 != 0);
//     cout <<" You entered: "<< num << ".\n";
//     return 0;
// }


//While Growth example
#include <iostream>
using namespace std;
int main ()
{
    int population = 100;
    int year = 0;
    cout << "Year\tPopulation\n";
    while (population < 1000)
    {
        cout << year << "\t" << population << "\n";
        population = population * 2;
        year++;
    }
    return 0;
    
}