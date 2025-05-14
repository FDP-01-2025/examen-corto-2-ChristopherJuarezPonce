#include <iostream>
using namespace std;

/*
Paso 2: Solicitar el tipo de usuario (1 punto)
El programa debe pedir al usuario que seleccione una categoría:
• Estudiante
• Profesional
• Ver todos
Paso 3: Mostrar los dispositivos disponibles según el tipo de usuario (1.5 puntos)
El programa debe mostrar una lista de dispositivos disponibles según el tipo de usuario
seleccionado. Las listas son las siguientes:
Para Estudiantes (descuento del 20%):
• Laptop Básica: $900
• Tablet Estudiantil: $600
• Chromebook: $700
Para Profesionales (descuento del 10%):
• Laptop Avanzada: $1500
• Tablet Pro: $1200
• Estación de Trabajo: $2000
Paso 4: Verificar si el usuario tiene suficiente dinero (1.5 puntos)
El programa debe comprobar si el usuario tiene suficiente dinero para realizar la compra. Se
debe asumir un saldo fijo disponible de $1000.
• Si el precio final del dispositivo seleccionado es mayor que el saldo disponible, el
programa debe indicar cuánto dinero le falta al usuario para poder comprarlo.
• Si el saldo es suficiente, el programa debe mostrar el saldo restante después de
la compra.
Paso 5: Mensaje final (0.5 puntos)
Al finalizar el programa, se debe mostrar un mensaje al usuario con el resultado final de la
transacción.
• Si la compra fue exitosa, mostrar el dispositivo comprado y el saldo restante.
• Si no fue posible realizar la compra, indicar el nombre del dispositivo y cuánto le
faltó para poder adquirirlo.*/

int main()
{

    // DECLARAMOS LAS VARIABLES
    int Edad, TipoUsuario, MenuEstudiante, MenuProfesional, MenuTodos;
    float Billetera = 1000, Restante, Descuento, PrecioFinal; // LA BILLETERA INICIA CON $1000

    // PEDIMOS AL USUARIO QUE INGRESE SU EDAD
    cout << "Por favor ingrese su edad para proseguir con la compra" << endl;
    cin >> Edad;

    // HACEMOS UN IF PARA QUE LA EDAD NO SEA NEGATIVA
    if (Edad < 0)
    {
        cout << "Los valores no son valido" << endl;
        return 1;
    }
    // HACEMOS UN ELSE IF PARA LA EDAD SEA MAYOR A 16 PARA SEGUIR CON LA COMPRA
    else if (Edad >= 0 && Edad < 16)
    {
        cout << "Su edad es menor a 16 no puede seguir con su compra" << endl;
        return 0;
    }
    else
    {
        cout << "Puede seguir con su compra" << endl;
    }

    // SOLICITAMOS EL TIPO DE USUARIO
    cout << "Seleccione la categoria que desea ver: " << endl;
    cout << "--------------Categoria---------------: " << endl;
    cout << "1. Estudiante                           |" << endl;
    cout << "2. Profesional                          |" << endl;
    cout << "3. Ver todos                            | " << endl;
    cout << "--------------------------------------" << endl;
    cin >> TipoUsuario;

    // HACEMOS UN SWITCH PARA VER EL MENU DE CADA CATEGORIA

    switch (TipoUsuario)
    {
    case 1:
        cout << "Para Estudiantes (descuento del 20%)" << endl;
        cout << "--------------Producto---------------: " << endl;
        cout << "1. Laptop Básica: $900               |" << endl;
        cout << "2. Tablet Estudiantil: $600          |" << endl;
        cout << "3. Chromebook: $700                  | " << endl;
        cout << "--------------------------------------" << endl;
        cin >> MenuEstudiante;

        switch (MenuEstudiante)
        {
        case 1:
            cout << "Usted selecciono la Laptop Basica con el precio de $900" << endl;
            Descuento = 900 * 0.20;
            PrecioFinal = 900 - Descuento;
            Restante = Billetera - PrecioFinal;
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            cout << "El restante de su billetera es: $" << Restante << endl;      // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        case 2:
            cout << "Usted selecciono la Tablet Estudiantil con el precio de $600" << endl;
            Descuento = 600 * 0.20;
            PrecioFinal = 600 - Descuento;
            Restante = Billetera - PrecioFinal;
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            cout << "El restante de su billetera es: $" << Restante << endl;      // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        case 3:
            cout << "Usted selecciono la Chromebook con el precio de $700" << endl;
            Descuento = 700 * 0.20;
            PrecioFinal = 700 - Descuento;
            Restante = Billetera - PrecioFinal;
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            cout << "El restante de su billetera es: $" << Restante << endl;      // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;

    case 2:
        cout << "Para Profesionales (descuento del 10%):" << endl;
        cout << "--------------Producto---------------: " << endl;
        cout << "1. Laptop Avanzada: $1500            |" << endl;
        cout << "2. Tablet Pro: $1200                 |" << endl;
        cout << "3. Estación de Trabajo: $2000        |" << endl;
        cout << "--------------------------------------" << endl;
        cin >> MenuProfesional;

        switch (MenuProfesional)
        {
        case 1:
            cout << "Usted selecciono la Laptop Avanzada: $1500" << endl;
            Descuento = 1500 * 0.10;
            PrecioFinal = 1500 - Descuento;
            Restante = Billetera - PrecioFinal;
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            break;
        case 2:
            cout << "Usted selecciono la Tablet Pro: $1200" << endl;
            Descuento = 1200 * 0.10;
            PrecioFinal = 1200 - Descuento;
            Restante = Billetera - PrecioFinal;
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            break;
        case 3:
            cout << "Usted selecciono la Estación de Trabajo: $2000" << endl;
            Descuento = 2000 * 0.10;
            PrecioFinal = 2000 - Descuento;
            Restante = Billetera - PrecioFinal;
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }
            cout << "El Precio aplicando descuento es: $" << PrecioFinal << endl; // PARA SABER EL PRECIO FINAL
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;
    case 3:
        cout << "Todas las categorias:" << endl;
        cout << "--------------Producto---------------: " << endl;
        cout << "1. Laptop Avanzada: $1500            |" << endl;
        cout << "2. Tablet Pro: $1200                 |" << endl;
        cout << "3. Estación de Trabajo: $2000        |" << endl;
        cout << "4. Laptop Básica: $900               |" << endl;
        cout << "5. Tablet Estudiantil: $600          |" << endl;
        cout << "6. Chromebook: $700                  |" << endl;
        cout << "--------------------------------------" << endl;
        cin >> MenuTodos;

        switch (MenuTodos)
        {
        case 1:
            cout << "Usted selecciono la Laptop Avanzada: $1500" << endl;
            Restante = (Billetera - 1500); // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }

            break;
        case 2:
            cout << "Usted selecciono la Tablet Pro: $1200" << endl;
            Restante = (Billetera - 1200); // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }

            break;
        case 3:
            cout << "Usted selecciono la Estación de Trabajo: $2000" << endl;
            Restante = (Billetera - 2000); // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            // Validamos que si la billtera es menor a 0 no pueda comprar
            if (Restante < 0)
            {
                cout << "Usted no puede realizar la compra por fondos insuficiente por: $" << Restante << endl;
            }

            break;
        case 4:
            cout << "Usted selecciono la Laptop Basica con el precio de $900" << endl;
            Restante = (Billetera - 900);                                    // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            cout << "El restante de su billetera es: $" << Restante << endl; // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        case 5:
            cout << "Usted selecciono la Tablet Estudiantil con el precio de $600" << endl;
            Restante = (Billetera - 600);                                    // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            cout << "El restante de su billetera es: $" << Restante << endl; // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        case 6:
            cout << "Usted selecciono la Chromebook con el precio de $700" << endl;
            Restante = (Billetera - 700);                                    // OPERACION PARA RESTAR EL MONTO DE LA BILLETERA
            cout << "El restante de su billetera es: $" << Restante << endl; // PARA SABER EL RESTANTE DE LA BILLTERA
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;
    // VALIDAMOS QUE SI EL USUARIO PONE OTRA OPCION SALGA ESTE ERROR
    default:
        cout << "La opcion elegida no es valida" << endl;
        break;
    }

    // FIN DEL PROGRAMA
    return 0;
}