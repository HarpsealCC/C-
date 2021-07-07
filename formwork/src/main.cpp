#include <iostream>
#include <map>
#include <unistd.h>
using namespace std;

typedef struct test_struct {
    int i;

    //test_struct(const test_struct& t);
}test_struct_t;

int main() {
     test_struct_t v;
     cout << v.i << endl;
     test_struct_t v1();
     test_struct_t v2(v);
     cout << v2.i << endl;
     map<int, test_struct_t> map_test_struct;
     map_test_struct.insert({v2.i, v2});
     while(1) {
         sleep(1);
	 cout << "pstack test" << endl;
     }
     return 0;
}
