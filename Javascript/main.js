//Mediante este método podemos mostrar por consola el mensaje que queramos.
console.log("Bienvenido al programa en JavaScript");

//Mediante el método "alert()" 
alert("Bienvenido al programa en JavaScript");

//Crearemos la variable número para almacenar en esta la hasta donde queremos hacer la suma progresiva.
var numero = 10;
var nombre, total, final;

//Mediante el método "prompt()" podremos mostrar un texto por pantalla y permitir al usuario introducir datos, estos lo almacenaremos en una variable.
nombre = prompt("Introduzca su nombre");
console.log("Bienvenido "+ nombre);
alert("Bienvenido "+ nombre)

//Realizaremos las operaciones necesarias para conseguir la suma de los diez primeros números.
total = ((1 + numero) * numero);
final = total / 2

//Mostramos el resultado.
console.log("El total de la suma consecutiva hasta " + numero + " es de " + final);
alert("El total de la suma consecutiva hasta " + numero + " es de " + final)