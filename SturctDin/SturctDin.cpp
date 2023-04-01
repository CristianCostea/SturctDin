// SturctDin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
typedef struct lista {
    int v;
    lista* next;
};

lista* ultim(lista* prim) {
    lista* t;
    t = prim;
    while (t->next) { t = t->next; };
    return t;
}

void arata(lista* prim) {
    lista* t;
    t = prim;
          
    while (t) { 
        std::cout << t->v << " ";
        t = t->next; };
    
}

int main()
{
    lista* pp, *tmp;
    pp = (lista*)malloc(sizeof(lista));
    pp->v = 1;
    pp-> next = nullptr;
    for (int i=2;i<=10;i++){
    tmp = ultim(pp);
    tmp->next = (lista*)malloc(sizeof(lista));
    tmp->next->v = i;
    tmp->next->next = nullptr;
    }
    arata(pp);
    //std::cout << pp->v << " " << pp->next->v << " " << pp->next->next->v;



    /*
    //----------------------- pointeri cu tipuri simple-----


    int* p, * y;
    p = NULL;
    y = nullptr;
    p = (int*)malloc(sizeof(int)*2);
    p[0]=4;
    p[1] = 3;
    std::cout << p << '\n';
    p = (int*)realloc(p, sizeof(int) * 4);
    y = p + 2;
    std::cout << p << " " << y << '\n';
    p[2] = 2;
    p[3] = 1;
    std::cout << p << " " << *p << *(p+1)<< p[2] << p[3] <<'\n';
    free(p);
    std::cout << p << " " << *p;
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
