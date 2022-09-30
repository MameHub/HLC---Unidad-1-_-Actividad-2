using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Principal2
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // Imprimimos por pantalla al usuario que debe introducir un número.
            Console.WriteLine("Introduzca el número hasta donde desea realizar la suma: ");

            // Almacenamos ese número en la variable "variable".
            String variable = Console.ReadLine();

            // Declaramos una variable de tipo entero y almacenamos la variable anterior convirtiendola en entero.
            int numero = int.Parse(variable);

            // Declaramos una variable llamada "total" donde almacenaremos el resultado de la operación.
            int total = ((1 + numero) * numero) / 2;

            // Mostramos el resultado por pantalla.
            Console.WriteLine("La suma hasta el número " + numero + " es de " + total);

            // Utilizaremos "Console.ReadLine()" para detener la ejecución.
            Console.ReadLine();

        }
    }
}
