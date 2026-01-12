// #include <iostream>
// using namespace std;
// int main()
// {
//     int age = 25;
//     cout << sizeof(age) << endl;
//     return 0;
// }
//  boiler plate code

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age = 25;
//     char grade = 'a';
//     char name = 'b';
//     float pi = 3.14f;
//     bool isSAFE = true;

//     cout << age << grade << name << pi << isSAFE << endl; // true-> 1 & false->0
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char grade = 'a'; // ascii value of a is 97 so character a is stored as integer valur 97
//     int value = grade; // typecasting
//     cout << value << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double price = 100.99;
//     int value = (int)price;
//     cout << value << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "enter your age: ";
//     cin >> age;
//     cout << "your age is "
//          << age << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 30, b = 6;

//     cout << "sum=" << (a + b);
//     cout << "difference =" << (a - b) << endl;
//     cout << "product =" << (a * b) << endl;
//     cout << "division=" << (a / b) << endl;
//     cout << "modulo =" << (a % b) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5, b = 2;
//     int ans = (a / (float)b);
//     cout << "division= " << ans << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << (3 < 5) << endl;  // true=1
//     cout << (3 > 5) << endl;  // false=0
//     cout << (3 <= 3) << endl; // true=1
//     cout << (3 == 3) << endl; // true=1
//     cout << (3 == 5) << endl; // false=0
//     cout << (3 != 5) << endl; // true=1
//     cout << (3 != 3) << endl; // false=0

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << (3 > 1) << endl;  // true=1
//     cout << !(3 > 1) << endl; // ! is not operator which converts true to false so ans is 0
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << ((3 > 5) || (3 < 5)) << endl; // or operator is used and one statement is true thus the ans is true
//     cout << ((6 > 5) && (3 > 2)) << endl; // and operator gives true(1) as both are true

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "enter 1st number:";
//     cin >> a;
//     cout << "enter 2nd number:";
//     cin >> b;
//     cout << "sum=" << (a + b) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = a++;
//     cout << "b=" << b << endl; // kaam matlab assign ho gyi value
//     cout << "a=" << a << endl; // upadte
//     cout << "b=" << b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = ++a;
//     cout << "b=" << b << endl;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = --a;
//     cout << "b=" << b << endl;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "enter 1st number=";
//     cin >> a;
//     cout << "enter 2nd number=";
//     cin >> b;
//     cout << "sum =" << (a + b) << endl
//          << "difference =" << (a - b) << endl
//          << "product= " << (a * b) << endl
//          << "division= " << (a / b) << endl
//          << "modulo = " << (a % b) << endl;
//     return 0;
// }

// CONDITION AND STATEMENTS VIDEO 3 $$$$$$$$

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = -56;
//     if (n >= 0)
//     {
//         cout << "positive" << endl;
//     }
//     else
//     {
//         cout << " negative " << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "enter age = ";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "person caan vote" << endl;
//     }
//     else
//     {
//         cout << "person cannot vote" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << " enter the  number =";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "then number is even" << endl;
//     }
//     else
//     {
//         cout << "number is odd" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cout << "enter marks ";
//     cin >> marks;

//     if (marks >= 90)
//     {
//         cout << "the grade is A" << endl;
//     }
//     else if (marks >= 80 && marks < 90)
//     {
//         cout << "the grade is B" << endl;
//     }
//     else if (marks >= 70 && marks < 80)
//     {
//         cout << "the grade is C" << endl;
//     }
//     else if (marks >= 60 && marks < 70)
//     {
//         cout << "the grade is D" << endl;
//     }
//     else if (marks >= 50 && marks < 60)
//     {
//         cout << "the grade is E" << endl;
//     }
//     else
//     {
//         cout << "the garde is F" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "enter the character" << endl;
//     cin >> c;

//     if (c >= 'a' && c <= 'z')
//     {
//         cout << " the characteer is smallcase" << endl;
//     }
//     else if (c >= 'A' && c <= 'Z')
//     {
//         cout << "the character is upperrcase" << endl;
//     }
//     else
//     {
//         cout << "you have not entered a letter" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "enter the character" << endl;
//     cin >> c;

//     if (c >= 97 && c <= 122) // THE ASCII VALUE  of a is 97 and z is 122
//     {
//         cout << " the characteer is smallcase" << endl;
//     }
//     else if (c >= 65 && c <= 90) // the ascii value of A IS 65 AND Z IS 90
//     {
//         cout << "the character is upperrcase" << endl;
//     }
//     else
//     {
//         cout << "you have not entered a letter" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = -2;
//     cout << (n >= 0 ? "positive" : "negative") << endl;
//     return 0;
// }

// LOOPS

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 20;
//     int count = 1;
//     while (count <= n)
//     {
//         cout << count << " ";
//         count++;
//     }

//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 30;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int n;
//     cout << "enter the number =";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }

//     cout << sum << endl;
//     return 0;
// }

//

// #include <iostream>
// using namespace std;
// int main()
// {
//    int sum = 0;
//    int i = 0;

//    int n;
//    cout << "enter the number = ";
//    cin >> n;

//    while (i <= n)
//    {
//        if (i == 5)
//        {
//            break;
//        }
//        sum = sum + i;
//        i++;
//    }

//    cout << sum << endl;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "enter the number = ";
//     cin >> n;

//     int sum = 0;
//     int i = 1;
//     cout << "the odd numbers are = ";

//     while (i <= n)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " ";

//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << endl;
//     cout << "the sum = " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;

//     int n;
//     cout << "enter the number = ";
//     cin >> n;

//     cout << "the odd number are = ";

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " ";
//             sum = sum + i;
//         }
//     }
//     cout << endl;
//     cout << "the sum of odd num = " << sum << endl;

//     return 0;
// }

//

// #include <iostream>
// using namespace std;
// int main()
// {
//    do
//    {
//        cout << "hello world ";
//    } while (3 > 5);
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int n = 4;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     bool isPrime = true;

//     int n;
//     cout << "enter number";
//     cin >> n;

//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime == true)
//     {
//         cout << "the number is prime" << endl;
//     }
//     else
//     {
//         cout << "the number is not prime" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     bool isPrime = true;

//     int n;
//     cout << "enter number";
//     cin >> n;

//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime == true)
//     {
//         cout << "the number is prime" << endl;
//     }
//     else
//     {
//         cout << "the number is not prime" << endl;
//     }
//     return 0;
// }

// nested loops $$$

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         int m = 3;
//         for (int j = 1; j <= m; j++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }
//     return 0;
// }
