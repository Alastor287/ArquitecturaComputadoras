/**********************************************************************************************
* Nombre: Sergio Alexandeer Sanchez Garcia.                                                   *
* Docente: Ismael Jiménez Sánchez.                                                            *
* Materia: Organización y diseño de computadoras.                                             *
* Programa: contorno de un cuadrado.                                                          *
***********************************************************************************************/


#include <stdio.h>

int main()
{
     int lado = 12;
     
     for(int i = 0;i < lado; i++) //Lado superior
     {
         printf(" ߛ");
     }
     printf("\n");
    
    for(int i = 0; i < lado - 2; i++) //Lados derecho e izquierdo
    {
        printf(" ߛ");
        
        for(int i = 0; i < lado*2; i++)
        {
            printf(" ");
        }
        
        printf(" ߛ\n");
    }
        for(int i = 0; i < lado; i++) //Lado inferior
        {
            printf(" ߛ");
        }
    return 0;
}
