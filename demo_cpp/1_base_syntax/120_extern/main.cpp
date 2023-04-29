#include<iostream>
using namespace std;

void TEST(int ser_x, int ser_y){
    int serven_14 = 14;
    int serven_15 = 15;
    printf("The Pointer of ser_x(TEST):%p\n",&ser_x);
    printf("The Pointer of ser_y(TEST):%p\n",&ser_y);
    printf("The Pointer of serven_9(TEST):%p\n",&serven_14);
    printf("The Pointer of serven_9(TEST):%p\n",&serven_15);
}

int main(int argc, char *argv[])
{
    int serven_14 = 14;
    int serven_15 = 15;
    TEST(serven_14,serven_15);
    return 0;
}
