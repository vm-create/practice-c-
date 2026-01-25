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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {

//         for (int j = 0; j <= n - 1; j++) // inner loop
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {

//         for (int j = 0; j <= n - 1; j++) // inner loop
//         {
//             cout << ch << " ";
//             ch = ch + 1; // 65+1 = 66->B
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {
//         char ch = 'A';

//         for (int j = 0; j <= n - 1; j++) // inner loop
//         {
//             cout << ch << " ";
//             ch = ch + 1; // 65+1 = 66->B
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     int x = 1;

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {

//         for (int j = 0; j <= n - 1; j++) // inner loop
//         {
//             cout << x << " ";
//             x = x + 1;
//         }
//         cout << endl;
//     }

//     cout << "after pattern x =" << x << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6;

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {

//         for (int j = 0; j < i + 1; j++) // inner loop
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int x = 1;

//     for (int i = 0; i <= n - 1; i++) // outer loop
//     {

//         for (int j = 0; j < i + 1; j++) // inner loop
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//         x = x + 1;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ch << " ";
//         }
//         ch = ch + 1;
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         int x = 1;
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << x << " ";
//             x += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = n; i > 0; i--)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j > 0; j--)
//         {
//             char ch = (char)('A' + j - 1);
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << (i + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << ch;
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         int num = 1;

//         for (int j = n - (i + 1); j > 0; j--)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < i + 1; k++)
//         {
//             cout << num;
//             num = num + 1;
//         }
//         for (int l = i; l > 0; l--)
//         {
//             cout << i;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         // top

//         for (int j = n - (i + 1); j > 0; j--)
//         {
//             // spaces
//             cout << " ";
//         }

//         cout << '*';

//         if (i != 0)
//         {
//             for (int k = 0; k < 2 * i - 1; k++)
//             {
//                 // spaces
//                 cout << " ";
//             }

//             cout << '*';
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n - 1; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << " ";
//         }

//         cout << '*';

//         if (i != n - 2)
//         {
//             for (int k = 2 * (n - 2 - i) - 1; k > 0; k--)
//             {
//                 cout << " ";
//             }
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // function definition
// void printHello()
// {
//     cout << "hello\n";
// }

// int main()
// {
//     // function call
//     printHello();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // function definition
// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }

// int main()
// {
//     // function call
//     int val = printHello();
//     cout << "value of val : " << val << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // function definition
// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }

// int main()
// {
//     // function call
//     cout << printHello() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // sum of 2 numbers
// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }

// int main()
// {
//     cout << sum(10, 5) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // minimum of 2 numbers
// int minOf2numbers(int a, int b) // parameters
// {
//     if (a > b)
//     {
//         return b;
//     }
//     else
//     {
//         return a;
//     }
// }

// int main()
// {
//     cout << "the minimum is " << minOf2numbers(5, 10) << endl; //  arguments

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // calculate sum of numbers from 1 to N
// int sumofN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main()
// {

//     cout << "the sum of n numbers = " << sumofN(3) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // calculate sum of numbers from 1 to N
// int sumofN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main()
// {

//     cout << "the sum of n numbers = " << sumofN(3) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // calculate sum of numbers from 1 to N
// int factorial(int n)
// {
//     int prod = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         prod = prod * i;
//     }
//     return prod;
// }

// int main()
// {

//     cout << "the factorial of n  = " << factorial(5) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void fun(int x)
// {
//     x = 2 * x;
//     cout << " x =" << x << endl;
// }
// int main()
// {
//     int x = 5;
//     fun(x);
//     cout << " x =" << x << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fun(int n)
// {
//     int sum = 0;
//     while (n > 0)
//     {
//         sum = sum + n % 10;
//         n = n / 10;
//     }
//     return sum;
// }

// int main()
// {
//     int n = 14521;

//     cout << " the sum of digits  =" << fun(n) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fun(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int fact_n = fun(n);
//     int fact_r = fun(r);
//     int fact_nmr = fun(n - r);

//     return fact_n / (fact_r * fact_nmr);
// }

// int main()
// {
//     int n = 8;
//     int r = 2;

//     cout << " the nCr  =" << nCr(8, 2) << endl;

//     return 0;
// }
