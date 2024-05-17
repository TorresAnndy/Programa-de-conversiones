/*
。　　　　　　　　　　　　　　　　　ﾟ　　　.　　　　　　　　　　　　　　.
,　　　　　　　　　.　 .　　　　　　　　.
　　　　　。　　　　　　　　🌐　　　　　　　　　　　ﾟ　　　　　　　　　。
　　.　　　　　　　　.　　　　　.　( • ֊ •) c++　　　　　　　　。　　.　
　.　　　　　　　　　　　　🧑🏻‍💻 Andy Gonzales 2024 🧑🏻‍💻ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ 　 。　　.
　 　　　　　　。　　　　　　　　　　　　　　　　　ﾟ　　　.　　　　🌐　　　　　　　　　　.
,　　　　　　　　　.　 .　　　　　　　　.
　　　　　。　　　　　　　　　　　　　　　　　　　ﾟ　　　　　　　　　。
　　.　　　　　　　　.　　　　　.　　　　　　　　　　。　　.
🌐

   ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄                      
   █▒▒░░░░░░░░░▒▒█                         
    █░░█░░░░░█░░█                         
 ▄▄  █░░░▀█▀░░░█  ▄▄
█░░█ ▀▄░░░░░░░▄▀ █░░█
█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
█░░╦─╦╔╗╦─╔╗╔╗╔╦╗╔╗░░█
█░░║║║╠─║─║─║║║║║╠─░░█
█░░╚╩╝╚╝╚╝╚╝╚╝╩─╩╚╝░░█
█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█
*/

#include <iostream>
#include <conio.h> // Esta biblioteca permite pausar el programa y que el usuario presione una tecla para continuar

using namespace std;

/*
      ▄▌█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
   ▄▄██▌█ ESTA FUNCION NOS IMPRIME    █
▄▄▄▌▐██▌█ LAS OPCIONES PARA CONVERTIR █
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█
▀(O)▀▀▀▀▀▀▀(O)(O)▀▀▀▀▀▀▀▀▀▀▀▀▀(O)(O)▀▀▀
*/

void mostrarMenu()//Funcion para preguntarle al usuario que desea convertir
{
    cout << "Elija una Opcion:\n"
         << "Opcion 1 ╰┈➤ Bits a Bytes\n"
         << "Opcion 2 ╰┈➤ Bytes a Bits\n"
         << "Opcion 3 ╰┈➤ Bytes a Kilobytes (KB)\n"
         << "Opcion 4 ╰┈➤ Kilobytes (KB) a Bytes\n"
         << "Opcion 5 ╰┈➤ Kilobytes (KB) a Megabytes (MB)\n"
         << "Opcion 6 ╰┈➤ Megabytes (MB) a Kilobytes (KB)\n"
         << "Opcion 7 ╰┈➤ Megabytes (MB) a Gigabytes (GB)\n"
         << "Opcion 8 ╰┈➤ Gigabytes (GB) a Megabytes (MB)\n"
         << "Opcion 9 ╰┈➤ Gigabytes (GB) a Terabytes (TB)\n"
         << "Opcion 10 ╰┈➤ Terabytes (TB) a Gigabytes (GB)\n"
         << "Opcion 11 ╰┈➤ Salir\n"
         << "Ingrese su opción: ";
}

/*
      ▄▌█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
   ▄▄██▌█ ESTA FUNCION NOS HACE LAS                   █
▄▄▄▌▐██▌█ CONVERSIONES DEPENDE LA OPCION QUE ELIJAMOS █
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█
▀(O)▀▀▀▀▀▀▀(O)(O)▀▀▀▀▀▀▀▀▀▀▀▀▀(O)(O)▀▀▀▀▀▀▀▀▀▀▀(O)(O)▀▀
*/

float Conversion(int opc, float valor)// funcion que nos hace las conversiones
{
    switch (opc) {
        case 1:
            return valor / 8; // Bits a Bytes
        case 2:
            return valor * 8; // Bytes a Bits
        case 3:
            return valor / 1024; // Bytes a Kilobytes (KB)
        case 4:
            return valor * 1024; // Kilobytes (KB) a Bytes
        case 5:
            return valor / 1024; // Kilobytes (KB) a Megabytes (MB)
        case 6:
            return valor * 1024; // Megabytes (MB) a Kilobytes (KB)
        case 7:
            return valor / 1024; // Megabytes (MB) a Gigabytes (GB)
        case 8:
            return valor * 1024; // Gigabytes (GB) a Megabytes (MB)
        case 9:
            return valor / 1024; // Gigabytes (GB) a Terabytes (TB)
        case 10:
            return valor * 1024; // Terabytes (TB) a Gigabytes (GB)
        default:
            return -1; // Opción no válida
    }
};

int main() {
    float numero;
    int opc;

    cout << "─── ⋆⋅☆⋅⋆ ── Bienvenido a mi Programa de Conversion ─── ⋆⋅☆⋅⋆ ──\n"
         << "Presione ENTER para continuar ";
    getch(); // Hacemos la pausa correspondiente
    cout << endl;

 while (true){
        cout << "Ingrese el numero a convertir: ";
        cin >> numero;
        
        if (numero <= 0 )//validamos que se ingrese un numero
        {
            cout << "\nDebes Ingresar un numero. Inténtalo de nuevo.\n";
            continue;//usamos continue para que el bucle continue y no se detenga
        }

        cout << endl;
        mostrarMenu();
        cin >> opc;
        cout << endl;

        if (opc == 11) {
            cout << "Saliendo del programa..." << endl;
            break; // Salir del bucle
        }

        float resultado = Conversion(opc, numero);

        if (resultado < 1 || resultado > 11){
            cout << "Opcion No encontrada. Intentalo de nuevo\n";
        }
        else{
            cout << "El resultado de la conversión es: " << resultado << endl;
        }

        cout << "Presione ENTER para continuar ";
        getch(); // Hacemos la pausa correspondiente
        cout << endl;
    }

    return 0;
}

/*
    ＿人人人人人人人人人人人人人人人人＿
   ＞Hecho por: Andy Gonzales - 3ro TI＜
    ￣Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^￣
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠙⢻⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⣠⣄⠀⢻⣿⣿⣿⣿⣿⡿⠀⣠⣄⠀⠀⠀⢻⣿⣿⣏⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠀⠀⠀⠀⠰⣿⣿⠀⢸⣿⣿⣿⣿⣿⡇⠀⣿⣿⡇⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠙⠃⠀⣼⣿⣿⣿⣿⣿⣇⠀⠙⠛⠁⠀⠀⣼⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣷⣤⣄⣀⣠⣤⣾⣿⣿⣿⣿⣽⣿⣿⣦⣄⣀⣀⣤⣾⣿⣿⣿⣿⠃⠀⠀⢀⣀⠀⠀
⠰⡶⠶⠶⠶⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠛⠉⠉⠙⠛⠋⠀
⠀⠀⢀⣀⣠⣤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠷⠶⠶⠶⢤⣤⣀⠀
⠀⠛⠋⠉⠁⠀⣀⣴⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣤⣀⡀⠀⠀⠀⠀⠘⠃
⠀⠀⢀⣤⡶⠟⠉⠁⠀⠀⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠉⠀⠀⠀⠉⠙⠳⠶⣄⡀⠀⠀
⠀⠀⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
