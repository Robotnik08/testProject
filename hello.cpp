#include <iostream>
#include <string>
#include <time.h>
using namespace std;
// hallo
int main()
{
    int start = clock();
    int count = 0;
    for (int i = 0; i < 1000000000; i++) {
        count++;
    }
    int end = clock();
    cout << count;
    cout << "done! it took: "<< ((float)end - start)/CLOCKS_PER_SEC << " seconds";
}