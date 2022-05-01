#include <iostream>
#include <mysql.h>
#include "Estudiantes.h"
using namespace std;

int main()
{
	string carnet, nombres, apellidos, direccion, email, fecha_nacimiento,genero;
	int op, telefono = 0, idestudiantes = {};

	
	do{
		system("cls");
		cout << "*-----Crud Parcial-----*" << endl;
		cout << "*****menu*****" << endl;
		cout << "1.Leer registros de datos" << endl;
		cout << "2.Insertar registros de datos" << endl;
		cout << "3.Updated registros de datos" << endl;
		cout << "4.Borrar registros de datos" << endl;
		cout << "5.Salir" << endl;
		cout << "Seleccione una Opcion: ";
		cin >> op;

		if (op == 1) {
			system("cls");
			cout << "Registro de estudiantes" << endl;
			Estudiante Est = Estudiante();
			Est.leer();
		}
		if (op == 2) {
			system("cls");
			cout << "Crear Estudiante" << endl;
			cout << "Ingrese No. Carnet:";
			cin>>carnet;
			cout << "Ingrese Nombres:";
			cin>>nombres;
			cout << "Ingrese Apellidos:";
			cin>>apellidos;
			cout << "Ingrese Direccion:";
			cin>>direccion;
			cout << "Ingrese Email:";
			cin>>email;
			cout << "Ingrese Telefono:";
			cin >> telefono;
			cin.ignore();
			cout << "Fecha Nacimiento:";
			cin >> fecha_nacimiento;
			cout << "Ingrese Genero:";
			cin>>genero;

			Estudiante Est2 = Estudiante(idestudiantes,carnet,nombres,apellidos,direccion,email,telefono,fecha_nacimiento,genero);
			Est2.crear();
		}
		if (op == 3) {
			system("cls");
			
			Estudiante Est3 = Estudiante();
			Est3.leer();

			cout << "Actulizar Estudiante" << endl;
			cout << "Selecciona el id a actualizar" << endl;
			cin >> idestudiantes;
			cout << "Ingrese No. Carnet:";
			cin >> carnet;
			cout << "Ingrese Nombres:";
			cin >> nombres;
			cout << "Ingrese Apellidos:";
			cin >> apellidos;
			cout << "Ingrese Direccion:";
			cin >> direccion;
			cout << "Ingrese Email:";
			cin >> email;
			cout << "Ingrese Telefono:";
			cin >> telefono;
			cin.ignore();
			cout << "Fecha Nacimiento:";
			cin >> fecha_nacimiento;
			cout << "Ingrese Genero:";
			cin >> genero;

			Estudiante Est4 = Estudiante(idestudiantes, carnet, nombres, apellidos, direccion, email, telefono, fecha_nacimiento, genero);
			Est4.actualizar();
		}
		if (op == 4) {
			system("cls");

			Estudiante Est5 = Estudiante();
			Est5.leer();

			cout << "Eliminar Estudiante" << endl;
			cout << "Selecciona el id a Eliminar" << endl;
			cin >> idestudiantes;

			Estudiante Est3 = Estudiante(idestudiantes, carnet, nombres, apellidos, direccion, email, telefono, fecha_nacimiento, genero);
			Est3.eliminar();
		}

			
			
	} while (op != 5);

	

}

