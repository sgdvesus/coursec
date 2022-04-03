#include <stdio.h>
#define NAMED 1.5

/*extern int exten int isExtern;*/

/* Variable Declarations*/
int a, b, c;

/*constants */
const int ALWAYS = 12;

float f, g, h;


enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

enum teams 
{
    noble  = 130,
    blue = 210,
} team;


int main()
{
    /*exten var*/
    int isExtern = 12;
    /*Variable initialization*/
    a = 2147483647;
    b = 10;
    c = b + a;

    printf("named: %f", NAMED);
    printf("Sum 12 + 24: %d \n", c);
    /*Si nos pasamos los numeros posivos continua con los negativos, puede crashear*/

    enum weekDays today;
    today = Saturday;
    printf("Day: %d \n", today+1);
    printf("Size days: %ld \n", sizeof(today));

    team = noble;
    printf("Power: %d \n", team);
    printf("Size team: %ld \n", sizeof(team));
    return 0;
}
int main();
/* Basic Types: 
(A) Aritmethics
    char 1 Byte -128 to 127
    unsigned char 0 to 255

    Compiler define the Bytes. The standar is 4 Bytes
    2 Bytes 
    int -32,768 to 32,767
    unsigned int 0 to 65, 535

    4 Bytes 
    int -2,147,483,648 to 2,147,483,647
    unsigned 0 to 4,294,967,295

    short always is 2 bytes
    2 Bytes
    short -32,768 to 32,767
    unsigned 0 to 65,535

    long  8 Bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
    unsigned long


(B) Float
float 4 Bytes 1.2E-38 to 3.4E+38 6 decimal places
double 8 Bytes 2.3E-308 to 1.7E+308 
long double 10 Bytes 3.4E-4932 to 1.1E+4932 19 decimal places

(C)Void
void Especifica que no hay valor disponible.
func return un tipo void
    void function()
declarar argumentos void 
    int function(void)
Pointer se dirige a un objeto en memoria, sin importar tipo de dato 

*/
