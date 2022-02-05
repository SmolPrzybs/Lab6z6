
#include <iostream>
using namespace std; 

void powtorz(char* wsk_a, int* wsk_b) {
    for (int i = 0; i < *wsk_b; i++) {
        cout << *wsk_a << " ";
    }
}

int main()
{
    char a;
    int b;
    cin >> a;
    cin >> b;

    char* wsk_a = &a;
    int* wsk_b = &b;

    powtorz(wsk_a, wsk_b);
}