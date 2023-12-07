# Descripción del Código

Este programa en C utiliza la biblioteca GLUT para dibujar una escena nocturna con una casa, elementos urbanos y una animación simple de una persona en bicicleta.

## Funciones Principales

- `inicializa()`: Configura el entorno gráfico y define la proyección.
- `luna()`, `estrellas()`: Dibujan la luna y las estrellas en el cielo.
- `techo()`, `fachada()`, `esquina()`, `banqueta()`, `texto()`, `calle()`, `reciclaje()`, `ventanas()`, `puerta()`, `picaporte()`, `arbol()`, `faro()`: Dibujan los elementos de la escena urbana, como una casa, una calle, un árbol, etc.
- `persona()`, `escoba()`, `basura()`: Dibujan una figura humana, una escoba y basura en la calle.

## Funciones de Animación y Movimiento

- `pinta()`, `pinta1()`: Combinan las funciones de dibujo para representar la escena con variaciones en la posición de la escoba y la basura.
- `anima()`: Realiza una animación alternando entre dos representaciones de la escena para simular movimiento.
- `persona_Mueve()`: Mueve una figura humana en bicicleta a lo largo de la escena.
