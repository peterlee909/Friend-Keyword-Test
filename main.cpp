#include <iostream>

using namespace std;

class TestClass {
    public:
        TestClass():privateVar(0){}
        void setv(int a){
            privateVar = a;
        }
        int getv(){
            return privateVar;
        }

    private:
        int privateVar;

    friend void FriendTest(TestClass &t,int a);
};

void FriendTest(TestClass &t,int a){
    t.privateVar = a;
    cout << t.privateVar << endl;
}

int main()
{
    TestClass t;
    t.setv(10);
    cout << t.getv() << endl;
    FriendTest(t,20);
    cout << t.getv() << endl;
    return 0;
}
