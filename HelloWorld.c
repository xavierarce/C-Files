#include <stdio.h>
#include <stdbool.h>


int main(void){
    // printf("I \nLike \npizza\n");
    // printf("It\t's really good\n");

    int age =21; 
    float gpa = 3.1234567891123456789;
    char grade = 'C'; //!single qoutes
    char name[]= "Bro"; //!Double quotes
    double pi = 3.1234567891123456789;


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
    short int h = 32767; //2 bytes
    unsigned short int i = 65535;  //2 bytes
    printf("character '%d'\n",h);
    printf("character '%d'\n",i);

    //!  INT & Unsigned INT
    int j = 2147483647; //4 bytes %d 


    // printf("Your PI is %lf\n",pi); //!lf Doubles    

    // printf("Your GPA is %f\n",gpa);    

    return 0;

}