#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int a[] = {1,2,5,8,9};
    for(auto x:a){
        sum += x;
    }
    cout << "Sum =" <<sum <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
