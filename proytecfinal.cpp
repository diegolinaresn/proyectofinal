# include <iostream>
# include <array>

using namespace std;

int main()

{
    array<string, 10> articulos = 
    {

        "Galletas",
        "Agua",
        "Pan",
        "Azucar",
        "Cereal",
        "Cafe",
        "Aceites",
        "Especias",
        "Sal",
        "Frijoles",
    };

    array<float, 10> costos = {
        5.00 , 10.20, 15.86, 6.10 , 8.00, 20.99, 10.00, 15.53, 2.00, 4.99
    };

    array<int, 10> cantidades = {
        10, 25, 45, 20, 5, 8, 28, 13, 19, 40
    };

    
    string eleccion = "";
   
    while (eleccion != "2")
    {
        
        cout << "____________" << endl;
        for (int i = 0; i < 10; i++)
        {
            
            cout << "Numero: " << i + 1 << endl;
            cout << "Articulo: " << articulos[i] << endl;
            cout << "Costo: " << costos[i] << endl;
            cout << "Cantidad: " << cantidades[i] << endl;
            cout << "____________" << endl;
        }
        
        cout << "1.Para comprar articulo\n2. Para salir\nSeleccione: ";
        
        cin >> eleccion;
        
        if (eleccion == "1")
        {
            int numeroArticulo;
            cout << "Ingrese el numero de artículo: ";
            cin >> numeroArticulo;
            
            int indice = numeroArticulo - 1;
            
            if (indice >= 0 && indice <= 3)
            {
                
                int cantidad;
                cout << "Ingrese la cantidad que compra: ";
                cin >> cantidad;
                
                if (cantidad > cantidades[indice])
                {
                    cout << "No hay suficiente existencia" << endl;
                }
                else
                {
                    
                    double costo = costos[indice];
                    
                    double total = costo * cantidad;
                    
                    
                    string Nombre;
                    cout << "Ingrese su Nombre y Apellido: ";
                    cin >> Nombre;
                        
                    
                    string Calle;
                    cout << "Ingrese Calle: ";
                    cin >> Calle;
                    
                    
                    string Colonia;
                    cout << "Ingrese la colonia: ";
                    cin >> Colonia;
                    
                    int NumeroCasa;
                    cout << "Ingrese el numero de su casa: ";
                    cin >> NumeroCasa;
                    
                    
                    int cp;
                    cout << "Ingrese su codigo postal: ";
                    cin >> cp;

                    system("cls");
                    
                    cout << "========================================" << endl;
                    cout << "========================================" << endl;
                    cout << "Usted ha comprado " << articulos[indice] << " X " << cantidad << endl;
                    cout << "Total " << total << endl;
                    cout << "GRACIAS POR SU COMPRA" << endl;
                    cout << "SU PEDIDO LLEGARA EN ALREDEDOR DE 25-50 MINUTOS" << endl;
                    cout << "========================================" << endl;
                    cout << "========================================" << endl;
                    
                    cantidades[indice] = cantidades[indice] - cantidad;
                    system("pause");
                }
            }
            else
            {
            
            cout << "Número de artículo " << numeroArticulo << " inválido" << endl;
            }
            
        }
    }
}