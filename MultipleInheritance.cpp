#include<iostream>
using namespace std;
class Parent1{
   public: 
          void show(int a, int b){
                    cout<<"The addition is : "<<a+b;
         }
};
class Parent2{
    public: 
           void show(){

           }
};
class Child : public Parent2, public Parent1{
    public: 
           void show(){
                    cout<<"";
           }
};
int main(){
    Child c1;
    c1.show();
    return 0;
}