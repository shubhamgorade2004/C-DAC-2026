#include <iostream>
using namespace std;

namespace ac{
    class Student {
        public :
        void display() {
            cout<<"I am here"<<endl;
        }
        void accept() {
            cout<<"Enter your name"<<endl;
        }
    };
}
namespace ai{
        void display() {
            cout<<"I am here 2"<<endl;
        }
        void accept() {
            cout<<"Enter your name"<<endl;
        }
}

int main () {
    ac::Student s1;
    s1.display();
    ai::display();

    using namespace ai;
    display();
}