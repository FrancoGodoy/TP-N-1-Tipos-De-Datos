/* Godoy Franco 
Curso K1051
14/04/2015*/

#include <iostream>

using namespace std;

int main ()
{
	
	cout << "Tipo de datos Int" << endl << endl;
	int aint, bint;
	cout << "Ingrese un numero: ";
	cin >> aint;
	cout << "Ingrese otro numero: ";
	cin >> bint;
	cout << "La suma de ambos numeros es: " << aint + bint << endl;
	cout << "La resta de ambos numeros es: " << aint - bint << endl;
	cout << "La multiplicacion de ambos numeros es: " << aint * bint << endl;
	cout << "La division de ambos numeros es: " << aint / bint << endl << endl << endl;
	
	
	cout << "Tipo de datos Char" << endl << endl;
	char achar, bchar;
	cout << "Introduzca la letra inicial de su nombre: ";
	cin >> achar;
	cout << "Introduzca la letra inicial de su apellido: ";
	cin >> bchar;
	cout << "Sus iniciales serian: " << achar + bchar << endl << endl << endl;
		
	
	cout << "Tipo de datos String" << endl << endl;
	string astring, bstring;
	cout << "Ingrese su nombre: ";
	cin >> astring;
	cout << "Ingrese su apellido: ";
	cin >> bstring;
	cout << "Bienvenido al mundo, " << astring + bstring << endl << endl << endl;
	
		
	cout << "Tipo de datos Bool" << endl << endl;
	bool logico;
	int abool, bbool;
	cout << "Introduzca un valor A: ";
	cin >> abool;
	cout << "Introduzca otro valor B: ";
	cin >> bbool;
	logico = abool < bbool;
	cout << "Como a < b entonces mostrara 1 en caso de verdadero y 0 en caso de falso" << endl;
	cout << "El resultado es: " << logico << endl << endl << endl;
	
	
	cout << "Tipo de datos Double" << endl << endl;
	double adouble, bdouble;
	cout << "Introduzca un numero con coma: ";
	cin >> adouble;
	cout << "Introduzca otro numero con coma: ";
	cin >> bdouble;
	cout << "La suma de ambos numeros es: " << adouble + bdouble << endl;
	cout << "La resta de ambos numeros es: " << adouble - bdouble << endl;
	cout << "La multiplicacion de ambos numeros es: " << adouble * bdouble << endl;
	cout << "La division de ambos numeros es: " << adouble / bdouble << endl;
	
	return 0;
}
