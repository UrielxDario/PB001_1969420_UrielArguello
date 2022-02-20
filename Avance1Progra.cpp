#include <iostream>
using namespace std; 
int main()
{
    int opcion;
    char nombre[50], hora[10], trat [50];
    float precio, total; 
    int cantidad; 
    int des, i=1;

    do
    {

        system("cls");
        cout << "********MENU********" << endl;
        cout << "1. Agendar cita" << endl;
        cout << "2. Modificar cita" << endl;
        cout << "3. Eliminar cita" << endl;
        cout << "4. Citas vigentes" << endl;
        cout << "5. Limpiar pantalla" << endl;
        cout << "6. Salir" << endl;
        cout << "********************" << endl;
        cout << "Opcion:";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            do
            {
                system("cls");
                cout << "----------AGREGANDO CITA------------"<<endl;
                cout << "*Ingrese nombre del paciente:" << endl;
                cin >> nombre;

                cout << "*Hora del tratamiento (formato 12hrs):" << endl;
                cin >> hora;

                cout << "*Nombre del tratamiento:" << endl;
                cin >> trat;

                cout << "*Precio del tratamiento: " << endl;
                cin >> precio;

                cout << "*Cantidad del tratamiento: " << endl;
                cin >> cantidad;

                total = (cantidad * precio);
                cout << "Total: " << total;
                cout << endl << "---------------";
                system("pause");

                system("cls");
               
                cout << "*********Cita " << i << "*******"<<endl; 
                cout << "Nombre: " <<nombre <<endl;
                cout << "Hora: " << hora << endl; 
                cout << "Tratamiento: " << trat << endl; 
                cout << "Total:"<<total<<endl ;
                cout << "***************************" << endl<<endl;
                i = i + 1;
                cout << "Quiere agendar una nueva cita? 1 si, 2 no" << endl;
                cin >> des;
                
            } while (des == 1);
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        
    } while (opcion != 6);

    

    
    return 0;
}
