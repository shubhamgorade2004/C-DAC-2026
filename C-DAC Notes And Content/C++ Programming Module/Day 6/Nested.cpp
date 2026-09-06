#include <iostream>
using namespace std;

namespace one {
    namespace two {
        void display(){
            cout<<"Hello1"<<endl;
        }
    }
}

namespace three :: four {
     void display(){
            cout<<"Hello2"<<endl;
        }
}

int main() {
    one::two::display();
    three::four::display();
}