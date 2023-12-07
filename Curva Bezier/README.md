# Curvas de Bézier con OpenGL en C

Este programa en C utiliza la biblioteca GLUT para representar visualmente curvas de Bézier en una ventana.

## Funcionamiento del Código

- La función `inicializa` configura los parámetros de visualización, estableciendo el color de fondo y el sistema de coordenadas.
- La función `Curva_Bezier` dibuja tres curvas de Bézier en la ventana utilizando diferentes conjuntos de puntos de control.
- La función `main` inicializa la ventana de visualización, define la función de dibujo (`Curva_Bezier`) y entra en el bucle principal de GLUT para mantener abierta la ventana.
