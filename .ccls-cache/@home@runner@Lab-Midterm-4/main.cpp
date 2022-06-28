#include <iostream>

using namespace std;

class A{
private:
int res;
public:
friend class B;
A(){
  
}
int sum(){ //sum 5+4
  res = 5+4;
  return res;
}



};




class B{
public:
B(){
  
}
A a; //create the object of the class A
int mult(A a){
  int mult;
  mult = a.sum() * 2; //sum 5+4 *2 = 18
  return mult;
}


  
};

int main(){
B b;
A a;
  cout<<b.mult(a);


  
}

