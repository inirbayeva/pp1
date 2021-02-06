#include <iostream>

using namespace std;

int main() {
    int seconds, h, m, s;
    scanf("%d", &seconds);
    h = seconds / 60 / 60 % 24;
    m = seconds / 60 % 60;
    s = seconds % 60;
    printf("%01d:%01d:%01d", h, m, s);
    return 0;
}
