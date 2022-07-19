#include<iostream>
using namespace std;

int main()
{
    int num=123 ;
    float f_num = 123.45 ;
    char name[50] = "SHASHIKANT JADHAV";
    char buffer[1000];

    sprintf(buffer,"|START|\n"
                    "|1|%5d|\n"
                    "|2|%+5d|\n"
                    "|3|%-5d|\n"
                    "|4|%05d|\n"
                    "|5|%-05d|\n"
                    "|6|%*d|\n"
                    "|7|%15.3f|\n"
                    "|8|%.6s|\n"
                    "|9|%07s|\n"
                    "|10|%s|\n"
                    "|END|", num, num, num, num, num, 10, num, f_num, name, name, name);

    printf("%s",buffer);
    printf("\n");
}

/*
Output:
|START|
|1|  123|
|2| +123|
|3|123  |
|4|00123|
|5|123  |
|6|       123|
|7|        123.450|
|8|SHASHI|
|9|SHASHIKANT JADHAV|
|10|SHASHIKANT JADHAV|
|END|
*/
