#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int a=10;
    int b=20;
// Normal pointers
/*  int* p=&a;

    *p=100;
    cout<<"a"<<a<<endl<<"b"<<b<<endl<<"*p"<<*p<<endl;
    cout<<"&a"<<&a<<endl<<"&b"<<&b<<endl<<"p"<<p;
    
    a 100
    b 20
    *p 100
    &a 0x2290fff7c4
    &b 0x2290fff7c0
    p 0x2290fff7c4
*/

//const int*p or int const*p
/*  const int* p=&a;

    *p=100; ///ERROR: value at p can't be changed
    p=&b;
    cout<<"a"<<a<<endl<<"b"<<b<<endl<<"*p"<<*p<<endl;
    cout<<"&a"<<&a<<endl<<"&b"<<&b<<endl<<"p"<<p;
*/

//int * const p
/*
    int* const p=&a;

    *p=100; 
    p=&b;   ///ERROR: p value can't be changed
    cout<<"a"<<a<<endl<<"b"<<b<<endl<<"*p"<<*p<<endl;
    cout<<"&a"<<&a<<endl<<"&b"<<&b<<endl<<"p"<<p;
*/
}
  


int main(){

/*
    int a=20,b=30;
    int &ref {a};
    a++;
    ref++; 
    ref=b; //ref won't reference b but value simply changes
    cout<<a;

    int a=20,b=30;
    const int *ref {&a};
    a++;
    (*ref)=100; //ERROR
    ref=&b; 
    cout<<a;

    int a=20,b=30;
    const int &ref {a};
    a++;
    ref++; //ref value also cannot change
    ref=b; //ref won't reference b but value simply changes
    cout<<a;

//Similar situation in pointer
    int a=20,b=30;
    const int * const ref {&a};
    a++;
    *ref=100; //ERROR
    ref=&b;     //ERROR
    cout<<a;
*/
}
  



	
//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	const int& ref_age{age};
	/*
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	ref_age++; //Mofify through reference ..ERROR
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
    */

   //Simulating reference behavior with pointers
   //const int * const p_age {&age};
   //*p_age = 45;
	
   
   
   
    return 0;
}
