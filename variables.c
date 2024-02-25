//declaring variables and printiing them.
#include<stdio.h>
int main()
{
    int num=10;//int is integer value you cannot display values after decimal point.
    float floatNum=13.5768; //float is also a numerical value in which value are ranging from 3.4E-38 to 3.4E+38
    char grade='A';//char is used to display single character
    double doubleNum= 1.7;//double is also used to display numerical value ranging from 1.7E-308 to 1.7E+308
    printf("interger value=%d\n",num);
    printf("float value=%f\n",floatNum);
    printf("Char printing grade=%c\n",grade);
    printf("double value= %.2lf\n",doubleNum);

}