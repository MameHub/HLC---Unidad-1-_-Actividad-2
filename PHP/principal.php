<?php

    # Declaramos una variable donde almacenaremos el contenido enviado mediante "POST" del "input" html "numero".
    $numero = $_POST['numero'];
    
    // Realizamos la operación y almacenamos el resultado en la variable declarada "total".
    $total = ((1 + $numero) * $numero) / 2;

    /* Imprimos por pantalla la información al usuario. */
    echo "El total de la suma hasta el numero ", $numero, " es de ", $total;
            
?>