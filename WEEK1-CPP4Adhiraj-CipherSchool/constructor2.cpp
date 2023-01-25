#include <iostream>  
using namespace std;  
// forward declaration  
class ClassB;  
  
class ClassA {  
    private:  
        int num1;  
  
        // friend class declaration  
        friend class ClassB;  
  
    public:  
        // constructor to initialize numA to 10  
        ClassA()  
        {  
            num1 = 10;   
        }  
};  
  
class ClassB {  
    private:  
        int num2;  
  
    public:  
        // constructor to initialize numB to 1  
        ClassB()  
        {  
            num2 = 1;   
        }  
      
    // member function to add num1  
    // from ClassA and num2 from ClassB  
    int add() {  
        ClassA objectA;  
        return objectA.num1 + num2;  
    }  
};  
  
int main() {  
    ClassB objectB;  
    cout << "Sum: " << objectB.add();  
    return 0;  
}  
