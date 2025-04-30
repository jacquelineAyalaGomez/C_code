#include <stdio.h>

//ex of how to use struct 
struct Person{
    char name[25];
    int age;
}Jacky; 
//ex of how to use a funtion on a struct
void printP(struct Person p){
    printf("Name: %s", p.name);
    printf("\nAge: %d", p.age);
}
int main(void){
    //another way to initalize 
    struct Person Jane = {"Jane", 24};

    //how to chage array 
    char newName[] = "Change";
    //any array type       Note: Can not be bigger then OG array!!
    memcpy(Jane.name, newName, sizeof(Jane.name)); 
    //only for char "string" array 
    strcpy(Jane.name, "newName");

    //define 
    Jacky = (struct Person) {"Jacky", 22};

    //change one element
    Jacky.age = 40;

    //can use " . " to getAge
    //printf("Age: %d", Jacky.age);

    //funtcion call
    printP(Jacky);
    return 0;
}