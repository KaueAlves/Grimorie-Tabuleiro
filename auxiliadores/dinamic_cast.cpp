#include "../headers/Default.h"
class AB
{
private:
    
public:
    int Aa,B;
    AB(int A,int B);
    virtual ~AB();
    int toAB();
};

AB::AB(int A,int B){this->Aa = A;this->B = B;};
AB::~AB(){}
int AB::toAB(){return 12;};

class A : public AB
{
private:
    /* data */
public:
    int C,D;
    A(int C,int D);
    virtual ~A();
    int toA();
    string to_string();
};
A::A(int C,int D):AB(C,D){this->C = C;this->D = D;}
A::~A(){};
int A::toA(){return 13;};
string A::to_string(){return "AEEEEEEEEEEE FUNCIONAAAA";};

int main(){

    AB ab = AB(1,2);
    A a = A(3,4);

    vector<AB*> vetorAB;

    vetorAB.push_back(&ab);
    vetorAB.push_back(&a);

    for(auto&& i : vetorAB)
    {
       if(A *ptr = dynamic_cast<A*>(i)){
            cout << ptr->toA() << endl;
            cout << ptr->C  << endl;
            cout << ptr->to_string() << endl;
       }else if(AB *ptr = dynamic_cast<AB*>(i)){
           cout << ptr->toAB() << endl;
           cout << ptr->Aa << endl;
       }

    }
}