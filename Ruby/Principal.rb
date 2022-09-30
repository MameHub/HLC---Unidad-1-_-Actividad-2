# Le pedimos al usuario que nos introduzca el número hasta donde desea realizar la suma.
puts ("Introduzca hasta que número desea realizar la suma: ")

# Almacenamos el número que ha introducido el usuario en la variable declarada "numero" y lo convertimos en un entero.
numero = gets.chop.to_i

# Declaramos la variable "total" donde almacenaremos el resultado de la operación realizada para obtener la suma de los números.
total = ((1 + numero) * numero) / 2

# Imprimimos por pantalla el resultado de la operación de la suma convirtiendo las variables a mostrar en string.
puts ("El total de la suma hasta el número " + numero.to_s + " es de " + total.to_s)