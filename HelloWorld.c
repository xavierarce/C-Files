#include <stdio.h>
#include <stdbool.h>


int main(void){
    // printf("I \nLike \npizza\n");
    // printf("It\t's really good\n");

    //! DATA TYPES

    int age =21; 
    float gpa = 3.1234567891123456789; //4bytes
    char grade = 'C'; //!single qoutes
    char name[]= "Bro"; //!Double quotes
    double pi = 3.1234567891123456789; //8 bytes ()


    printf("Hello, you are %d \n",age);     //*decimal 
    printf("Hello, you are my %s \n",name);    //*array of character
    printf("Your average grade is %c \n",grade);  //*single character   
    printf("Your GPA is %0.15lff\n",gpa);    //*Floats   4 bytes
    printf("Your PI is %lf\n",pi); //* Doubles floats     8 bytes
    printf("Your PI is %0.15lf\n",pi); //* Doubles floats and amout of floats    
    

    bool e = false; //*1 byte
    printf("%d\n",e); //*bool

    char f = 127; //1 byte
    printf("decimal '%d'\n",f);
    printf("character '%c'\n",f);
    unsigned char g = 255; // 1byte
    printf("decimal '%d'\n",g);
    printf("character '%c'\n",g);


    //! Short INT
    short int h = 32767; //2 bytes from -32,768 to 32,767 %d
    unsigned short int i = 65535;  //2 bytes from 0 to 65,535 %d
    printf("character '%d'\n",h);
    printf("character '%d'\n",i);

    //!  INT & Unsigned INT
    int j = 2147483647; //4 bytes from -2,147,483,648 to 2,147,483,647 %d  
    unsigned int k = 4147483647; //4 bytes from 0 to +4,147,483,647 %u

    //! LONG INT
    long long int l= 9223372036854775807; //8 bytes from - 9,223,372,036,854,775,807 to 9,223,372,036,854,775,807 %lld
    unsigned long long int m= 18446744073709551615U;  //8 bytes from 0 - 18,446,744,073,709,551,615 %llu
    printf("%lld\n",l); //!lf Doubles    
    printf("%llu\n",m); //!lf Doubles    


    // printf("Your PI is %lf\n",pi); //!lf Doubles    

    // printf("Your GPA is %f\n",gpa);    

    return 0;

}