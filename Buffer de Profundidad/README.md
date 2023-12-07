# Buffer de Profundidad en OpenGL

Este programa en C utiliza la biblioteca GLUT para visualizar el uso del buffer de profundidad (depth buffer) en una animación de un toro y una esfera rotando.

## Funcionamiento del Código

- La función `init` configura los parámetros de visualización, estableciendo el color de fondo, la perspectiva y la posición del observador.
- La función `Cubos` realiza la animación de rotación de cubos utilizando el buffer de profundidad:
  - Se aplica una rotación de 1 grado en cada iteración para simular la rotación de los cubos.
  - Se utiliza el buffer de profundidad (`GL_DEPTH_BUFFER_BIT`) para gestionar la profundidad y mantener la correcta representación de los objetos en la escena.
  - Se dibujan sólidos y alambres de esferas y toros con diferentes colores.
  - Se utiliza `glEnable(GL_DEPTH_TEST)` y `glDisable(GL_DEPTH_TEST)` para activar y desactivar la verificación de profundidad en cada iteración de la animación.
