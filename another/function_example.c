/*

. For banbladeshe people print 'thank you and most welcome'
. For german people print 'Danke and Bitte schon' &
. Fpr french people print 'Merci and Je vous en pri'

*/

#include<stdio.h>

void bangladesh();
void german();
void french();

int main(){
    printf("Enter for bangladeshi 'b' for german 'g' for french 'f' : ");

    char bgf;
    scanf("%c", &bgf);

    if (bgf == 'b')
    {
        bangladesh();
    }

    else if (bgf == 'g')
    {
        german();
    }

    else if (bgf == 'f')
    {
        french();
    }

    else
    {
        printf("plz enter b g or f in charecter");
    }
    
    return 0;
    
}

void bangladesh(){
    printf("Thank you \n");
    printf("and most welcome\n");
}

void german(){
    printf("Danke \n");
    printf("and Bitte schon\n");
}

void french(){
    printf("Merci\n");
    printf("and Je vous en pri\n");
}