#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUint = 65534;
    cout << "output in unsigned int type:" << testUint << endl; 

    cout << "output in char type:" << static_cast<char>(testUint) << endl;

    cout << "output in short type:" << static_cast<short>(testUint) << endl; 

    cout << "output in int type:" << static_cast<int>(testUint) << endl;

    cout << "output in double type:" << static_cast<double>(testUint) << endl;

    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUint) << endl;

    cout << "output in Hex unsigned int type:" << hex << testUint << endl; 

    cout << oct << testUint << endl;

    system("pause");
    return 0;
}