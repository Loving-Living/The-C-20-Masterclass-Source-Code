#include <iostream>


int max(int a, int b){
    std::cout << "int overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, double b){    //Diff type
    std::cout << "double overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(int a, double b){    //Diff type
    std::cout << "(int,double) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b){    //Diff order
    std::cout << "(double,int) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b,int c){    //Diff no of parameters
    std::cout << "(double,int,int) overload called" << std::endl;
    return a;
}

std::string_view  max(std::string_view a, std::string_view b){    //Diff type of parameters
    std::cout << "(string_view,string_view) overload called" << std::endl;
     return (a>b)? a : b;
}

int main(){

    int x{4};
    int y{9};
    double a{5.4};
    double b{7.4};

    auto result = max(b,x,y);

    max("Hello","World");
   
    return 0;
}
