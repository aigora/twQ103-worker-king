#include <stdio.h>
#include <conio.h>
#include <string.h> 
#include <stdlib.h> // para que funcione exit()

#define USUARIO "HERMES"
#define CLAVE "0357"
#define LONGITUD 6

int main()
{
	char usuario[LONGITUD + 1];
    char clave[LONGITUD + 1];
    int intento = 0;
    int ingresa = 0;
    char caracter;
    int i = 0;
    int opcion;
   
/* seguridad por contraseña; mejora de la aplicacion, no estaba en los objetivos iniciales, en pruebas 

fuente https://algoritmosyalgomas.com/login-en-c-con-clave-en-asteriscos-y-3-intentos/
*/
   
    do {
        i = 0;
        system("cls");
        printf("\n\t\t\tUU  UU      PPPPP       MM    MM");	
		printf("\n\t\t\tUU  UU      PP  PP      MMM  MMM");
		printf("\n\t\t\tUU  UU      PPPPP       MM MM MM");
		printf("\n\t\t\tUU  UU      PP          MM  M MM");
		printf("\n\t\t\t UUU        PP          MM    MM");
		printf("\n\t\t\t................................");
		printf("\n\n\n\n\t\t\t\tINICIO DE SESION");
        printf("\n\t\t\t\t===============\n");
        printf("\n\n\n\n\tTECLEE SU USUARIO: ");
        gets(usuario);
        printf("\n\n\tTECLEE SU PASSWORD: ");
        
        while (caracter = getch()) {
            if (caracter == 13) {
                clave[i] = '\0';
                break;
                
            } else if (caracter == 8) {
                if (i > 0) {
                    i--;
                    printf("\b \b");
                }
                
            } else {
                if (i < LONGITUD) {
                    printf("*");
                    clave[i] = caracter;
                    i++;
                }
            }
        }
        
        if (strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0) {
            ingresa = 1;
            
        } else {
            printf("\n\n\n\tUsuario y/o password son incorrectos\n\n\n Pulse 'INTRO' para volver a intentarlo. ");
            intento++;
            getchar();
        }
        
    } while (intento < 3 && ingresa == 0);
    
    if (ingresa == 1) {
        system("cls");
		system ("color 0a"); 
		printf("\n\n\n\n\t\t     *****   BIENVENIDO A LA APLICACION   *****\n\n\n\n");
		printf("\n\t\t\tUU  UU      PPPPP       MM    MM");	
		printf("\n\t\t\tUU  UU      PP  PP      MMM  MMM");
		printf("\n\t\t\tUU  UU      PPPPP       MM MM MM");
		printf("\n\t\t\tUU  UU      PP          MM  M MM");
		printf("\n\t\t\t UUU        PP          MM    MM");
		printf("\n\t\t\t................................");
		printf("\n\n\n\nPulse una tecla para continuar");
        getch();
        
    } else {
        system("cls");
		system ("color 0c"); 
		printf("\n\t\t\tUU  UU      PPPPP       MM    MM");	
		printf("\n\t\t\tUU  UU      PP  PP      MMM  MMM");
		printf("\n\t\t\tUU  UU      PPPPP       MM MM MM");
		printf("\n\t\t\tUU  UU      PP          MM  M MM");
		printf("\n\t\t\t UUU        PP          MM    MM");
		printf("\n\t\t\t................................");
		printf("\n\n\n\n\n\t\t\t ******  E R R O R  ******\n\n\n");
		printf("\n\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
		getch();
		exit(0); // fuerza la salida del programa
    }

/*system ("color xx"); - Esto cambia el color del fondo y el texto en la ventana de resultados.
 El primer número controla el color de fondo y
  el segundo controla el color del texto.  
0 = Negro 
1 = azul 
2 = verde 
3 = Aqua 
4 = Rojo 
5 = Púrpura 
6 = Amarillo 
7 = blanco 
8 = gris 
9 = Azul claro 
a = Luz Verde 
b = Aqua Luz 
c = Rojo 
d = luz violeta 
e =  Amarillo claro 
f = blanco brillante
*/

	system("cls");
	system ("color 0f"); 

	
	do{
	printf("\n\t\t\tUU  UU    PPPPP     MM    MM");	
	printf("\n\t\t\tUU  UU    PP  PP    MMM  MMM");
	printf("\n\t\t\tUU  UU    PPPPP     MM MM MM");
	printf("\n\t\t\tUU  UU    PP        MM  M MM");
	printf("\n\t\t\t UUU      PP        MM    MM");
	printf("\n\t\t\t.............................");
	printf("\n\n\n\t\t\t\tMENU PRINCIPAL \n\t\t\t\t============== \n\n\n \t\t10-Menu filiacion.\n\n \t\t20-Menu Horas Extras.");
	printf("\n\n\t\t30-Menu Nominas.\n\n\n\t\t90-SALIR DE LA APLICACION \n");
	printf("\n-------------------------------------------------------------------- ");
	printf("\nTeclee la opcion deseada: ");
	
	scanf(" %d",&opcion);
	
switch(opcion)
{
	// cada case se intentara pasar a una funcion independiente.
	case 10:
			
			system("cls");
			printf("\n\t\t*   *      *****      *     *");	
			printf("\n\t\t*   *      *   *      **   **"); 
			printf("\n\t\t*   *      *****      * *** *");
			printf("\n\t\t*   *      *          *  *  *");
			printf("\n\t\t ***       *          *     *");
			printf("\n\t\t..............................");
			printf("\n\n\n\t\t\tMENU FILIACION \n\t\t\t============== \n\n\n \t\t10-Alta de un trabajador.\n\n \t\t20-Consulta de un trabajador.");
			printf("\n\n \t\t30-Modificacion Filiacion de un trabajador.\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n\n\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	break;
	
	case 20:
		
			system("cls");
			printf("\n\t\t*   *      *****      *     *");	
			printf("\n\t\t*   *      *   *      **   **"); 
			printf("\n\t\t*   *      *****      * *** *");
			printf("\n\t\t*   *      *          *  *  *");
			printf("\n\t\t ***       *          *     *");
			printf("\n\t\t..............................");
			printf("\n\n\n\t\t\tMENU HORAS EXTRAS \n\t\t\t================= \n\n\n \t\t10-Alta horas extras de un trabajador.\n\n \t\t20-Consulta horas extras por trabajador y dia.");
			printf("\n\n \t\t30-Consulta horas extras trabajador y mes.\n\n \t\t40-Consulta total horas extras por mes.\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n\n\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	
	break;
	case 30:
		
			system("cls");
			printf("\n\t\t*   *      *****      *     *");	
			printf("\n\t\t*   *      *   *      **   **"); 
			printf("\n\t\t*   *      *****      * *** *");
			printf("\n\t\t*   *      *          *  *  *");
			printf("\n\t\t ***       *          *     *");
			printf("\n\t\t..............................");
			printf("\n\n\n\t\t\tMENU NOMINAS \n\t\t\t============ \n\n\n \t\t10-Imprimir todas las nominas de un mes .\n\n \t\t20-Imprimir nomina de un trabajor y mes.");
			printf("\n\n \t\t\n\n\n\t\t90-VOLVER MENU ANTERIOR \n");
			printf("\n\n\nTeclee la opcion deseada: ");
			scanf(" %d",&opcion);
		
	break;
	
}
}while(opcion!=90);
	system ("color 0a"); 
	system("cls");
	printf("\n\t\t\tUU  UU      PPPPP       MM    MM");	
	printf("\n\t\t\tUU  UU      PP  PP      MMM  MMM");
	printf("\n\t\t\tUU  UU      PPPPP       MM MM MM");
	printf("\n\t\t\tUU  UU      PP          MM  M MM");
	printf("\n\t\t\t UUU        PP          MM    MM");
	printf("\n\t\t\t................................");
	printf("\n\n\n\t\t\t     SALIO DE LA APLICACION\n\n\n\nQue pase un buen dia :) \n\n\n\n");
return 0;
}
