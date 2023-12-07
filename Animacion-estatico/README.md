# Descripción del Código

Este programa en C utiliza la biblioteca GLUT para representar una figura en movimiento y una figura estatica. La figura representa a un personaje con elementos básicos del cuerpo humano, como piernas, tronco, brazos y cabeza, dibujados utilizando primitivas gráficas en 2D.

## Funciones Principales

- `inicializa()`: Configura el entorno gráfico y define la proyección.
- `piernaDer()`, `piernaIzq()`, `tronco()`, `brazoL()`, `brazoC()`, `cabeza()`, `boca()`, `ojo()`, `pupila()`: Dibujan diferentes partes del personaje utilizando líneas y puntos.
- `pinta()`, `pinta1()`: Combinan las funciones de dibujo para representar el personaje completo en diferentes posiciones.

## Función de Animación

- `mueve()`: Controla la animación del personaje moviéndolo hacia adelante y atrás en la pantalla.
