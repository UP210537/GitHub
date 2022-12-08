#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESC 27

//Prototipos de las funciones
void gotoxy(int x, int y);
void ocultarCursor();
void cuadro();
void guardar_posicion();
void dibujar_cuerpo();
void borrar_cuerpo();
void teclear();
void comida();
bool perder();

//Declaracion global de variables 
int cuerpo[200][2];
int n = 1, tam = 10, dir = 3;
int x = 10, y = 12;
int xc = 30, yc = 15;
int velocidad = 60;
int puntos=0;
char tecla;


int main(){
	system("mode con cols=80 lines=25"); //Define las dimensiones de la ventana del programa a 80 columnas y 25 filas.
 	gotoxy (35,1); printf("Juego de la serpiente :) <3");
 	printf("\n\n");
	ocultarCursor();
 	cuadro();
 	gotoxy(xc, yc); printf("%c", 4); //Ubicar la primera "manzanita"
 
 	while(tecla != ESC && perder()){
 		gotoxy (3,2); printf("Puntuacion: %i",puntos);
		borrar_cuerpo();
		guardar_posicion();
		dibujar_cuerpo();
		comida();
		teclear();
		teclear();
 
		if(dir == 1) y--; //Abajo
		if(dir == 2) y++; //Arriba
		if(dir == 3) x++; //Derecha
		if(dir == 4) x--; //Izquierda
 
		Sleep(velocidad);
 	}
 	
 	system("cls"); //Limpia la pantalla
 	gotoxy (35,1); printf("Juego de la serpiente :) <3");
 	cuadro();
 	gotoxy (22,12); printf("Obtuviste una puntuacion de: %i",puntos);
 	gotoxy (22,14); printf("Presione cualquier tecla para continuar :)");
 	getch();
	return 0;
}
 


//Funcion que realiza el recuadro del juego
void cuadro(){ 
	int i,v;
	
	for(i=2; i < 78; i++){
		gotoxy (i, 4); printf ("%c", 196);  //Parte de arriba y de abajo       printf = Codigo ASCII
 		gotoxy(i, 23); printf ("%c", 196); 
	}

	for(v=4; v < 23; v++){
 		gotoxy (2,v); printf ("%c", 179); //Parte de las paredes
 		gotoxy(77,v); printf ("%c", 179); 
	}
	
 	gotoxy (2,4); printf ("%c", 218); //Extremos/conectores
 	gotoxy (2,23); printf ("%c", 192);
 	gotoxy (77,4); printf ("%c", 191);
 	gotoxy(77,23); printf ("%c", 217); 
}

 
//Funcion que guarda la posicion en la que se encuentra la serpiente 
void guardar_posicion(){
	cuerpo[n][0] = x; //Los tres deben de coincidir sino no funciona :c   Posicion de donde empieza la serpiente
 	cuerpo[n][1] = y;  //Ciclo
 	n++;
 
 	if(n == tam) n = 1; //Si n llega a ser igual a 10, se "resetea" 
}

//Funcion que dibuja el cuerpo de la serpiente 
void dibujar_cuerpo(){
	int i;
	for(i = 1; i < tam; i++){
 		gotoxy(cuerpo[i][0] , cuerpo[i][1]); printf("*");
	}
}

//Funcion que borra el cuerpo de la serpiente (hasta la ultima parte del cuerpo de la serpiente) 
void borrar_cuerpo(){
	gotoxy(cuerpo[n][0] , cuerpo[n][1]); printf(" ");
}
 

//Funcion que detecta que tecla se esta presionando 
void teclear(){
	if(kbhit()){
		tecla = getch(); //Detecta la tecla pero no la imprime
	 	switch(tecla){
	 		
			case ARRIBA : if(dir != 2) dir = 1; break;
	 		case ABAJO : if(dir != 1) dir = 2; break;
	 		case DERECHA : if(dir != 4) dir = 3; break;
	 		case IZQUIERDA : if(dir != 3) dir = 4; break;
		}
 	}
}

//Funcion que muestra la comida de forma aleatoria en alguna zona de la pantalla 
void comida(){
	if(x == xc && y == yc){
		xc = (rand() % 73) + 4;
 		yc = (rand() % 18) + 5;
 		tam++;
 		puntos+=100;
 		gotoxy(xc, yc); printf("%c", 4);
	}
}

//Funcion que verifica si se ha topado el recuadro o se ha chocado con él mismo 
bool perder(){
	int j;
	
	if(y == 4 || y == 23 || x == 2 || x == 77) 
		return false;
		
 	for(j = tam - 1; j > 0; j--){
	 	if(cuerpo[j][0] == x && cuerpo[j][1] == y)
	 	return false;
	}
	
	return true;
}


//Funcion gotoxy, se envian coordenadas para "x" y "y", se logra posicionar algun mensaje en una zona determinada de la pantalla 
void gotoxy(int x, int y) 
{ 
 	HANDLE hCon; 
 	COORD dwPos; 
 
 	dwPos.X = x; 
 	dwPos.Y = y; 
 	hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
 	SetConsoleCursorPosition(hCon,dwPos); 
}

//Funcion que oculta el cursor
void ocultarCursor() {
	CONSOLE_CURSOR_INFO cci = {100, FALSE};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}


