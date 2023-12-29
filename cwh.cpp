/*#include <iostream>

int main(){
    int a = 5;
    int b = 4;
    std::cout<<a<<b; //or you can also write a+b for sum
    return 0; 
}

----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main(){
    // int a = 42; 
    // int b = 24;
    int a = 4, b = 6;
    char c = 'm'; //char mein only 1 character of alphabet and single quotes only to be used for it
    cout<<"This the value of a "<<a<<" \nand this the value of b "<<b<<" \nalso this the value of their sum "<<a+b
    <<"\nthis is the value of c "<<c;
    return 0;
}

--------------------------------------------------------------------------------------------------

#include<iostream>

using namespace std;

int main(){
    int num1, num2; //<< is insertion operator which inserts in cout from variable or string
    cout<<"Enter te value of num1:";
    cin>>num1; // >> is called as extraction operator which extractes from cin and sends in variable

    cout<<"Enter the value of num2:";
    cin>>num2;

    cout<<"This is the value of sum "<<num1+num2;
    return 0;
}

-----------------------------------------------------------------------------------------------------------------

#include "iostream" // two types of header files exist in cpp 1. Built in (comes with compiler itself like iostream)
//2. User defined like "abc.h" and this user defined header file must be present in the same directory of the program and both 
// types of files can be used in program even with double quotes not only angular brackets

using namespace std;

int main(){
    int a = 15;
    int b = 10; //arithematic operators can be used similar to python but with some exceptions
    cout<<a/b<<endl;  // 1.5 is not printed bcoz in cpp int/int must be int so it leaves the decimal part and only gives int (it does not
//   round off)
    cout<<a+b<<endl; //without endl output is 125 1 from divide and 25 from sum so use endl which means end of line
    cout<<(a == b)<<endl; //comparison operators >, >=, <=, !=, == and <. Also use () for evaluating the boolean valu of the expression
//  returns 0 or 1 by default, not True or False
    cout<<((a==b)&&(a>b))<<endl; //logical operators similarly use in brackets to evaluate. && (AND), || (OR), ! (NOT)
    cout<<(!(a==b)); // NOT logical operator
    return 0;
}
//long double is data type sued for longer decimals like value of pi, a++ will first print the value of a then increase its value by 1
// sly a-- and ++a will first increase the value of a by 1 then print it 

---------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int c = 47;
int main(){
    int a, b, c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    c = a*b;
    cout<<"The value of a*b is "<<c<<endl;
    cout<<++c<<endl;
    cout<<c<<endl;
    cout<<"The value of global c is "<< ::c; // :: is used for scope resolution of variable may be to print it in global c
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------
// and also calculation ka result will be in highest data type of reactants-- 3/2=1 and 3/2.0=1.5 or 3.0/2=1.5
/*#include<bits/stdc++.h> //this header file has all necessary functions for cp
using namespace std;
int main(){
    int a,b;
    char c,d;
    cin>>c>>b;
    cout<<c<<endl<<b;
    return 0;
}
-----------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main(){
    char c='A';
    cout<<3.0/2<<endl<<3/2.0<<endl<<3/2<<endl;
    cout<<(int) c<<endl; //ascii value of 'A'
    cout<<c + 1; //highest data type mein hi calculation hoga guys
    return 0;  // highest ka order -- Double > Float > Long long int > long int > int > characters -- yhi hai order of data type
}
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     pair<int, string> p;
//     p= {2, "abc"};
//     // p= make_pair(2, "abc");
//     cout<<p.first<<" "<<p.second; 
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n, k;
//     cin>>n>>k;
//     int arr[n];
//     int sub[n];
//     int r=0;
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//         sub[i]=k-arr[i];
//     }
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             if (arr[i]==sub[j]){
//                 r=1;
//                 break;
//             }
//         }
//     }
//     if (r==1){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }

// }                             O(N^2) = 10^12 ITERATIONS ONLY 10^7 CAN BE DONE IN ONE SECOND 10^12 WOULD TAKE 1000000 SECONDS







    // #include <bits/stdc++.h>
    // using namespace std;
    // int main(){
    //     ios::sync_with_stdio(0);
    //     cin.tie(0);
    //     int n, k;
    //     cin>>n>>k;
    //     vector<int> v(n);
    //     vector<int> v1(n);
    //     vector<int> r(2*n);
    //     for (int i=0; i< n; i++){
    //         cin >> v[i];
    //         v1[i]=k-v[i];
    //     }
    //     sort(v.begin(), v.end());
    //     sort(v1.begin(), v1.end());
     
    //     auto it = set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), r.begin());
     
    //     r.resize(it - r.begin());
    //     if (r.size()==0){
    //         cout<<"NO"<<"\n";
    //     }
    //     else{
    //         cout<<"YES"<<"\n";
    //     }
     
     
    // }                         IT IS ALSO INEFFICIENT OR SOMETHING IG




// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// int a[N*2];
// int main(){

//     ios::sync_with_stdio(0);
//     cin.tie(0);
    
//     int n, k;
//     cin>>n>>k;
//     int arr[n];
//     int r=0;
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//         a[arr[i]]++;
//     }
//     for (int i=0; i<n; i++){
//         if (((a[k-arr[i]])>0) && ((k-arr[i])>0)){
//             r=1;
//         }
//     }
//     if (r==1){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// }
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myvec = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> myvec1 = {4, 6, 8, 9};

    // Sort both vectors for efficient set union operation
    std::sort(myvec.begin(), myvec.end());
    std::sort(myvec1.begin(), myvec1.end());

    // Create a vector to store the union
    std::vector<int> unionResult(myvec.size() + myvec1.size());

    // Use set_union to compute the union of the sorted vectors
    auto it = std::set_union(myvec.begin(), myvec.end(), myvec1.begin(), myvec1.end(), unionResult.begin());

    // Resize the result vector to the actual size of the union
    unionResult.resize(it - unionResult.begin());

    // Print the union
    for (int value : unionResult) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
