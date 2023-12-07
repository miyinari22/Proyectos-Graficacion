# Iluminación de esferas en OpenGL

Este código demuestra el uso de iluminación en OpenGL para representar dos esferas con un tallo simulado.

## Descripción del código

El programa utiliza OpenGL para representar dos esferas con diferentes tamaños y ubicaciones relativas, junto con un "tallo" que simula una pera. La iluminación se aplica a las esferas, lo que proporciona un efecto de sombreado y resalta las superficies.

### Funciones principales

- **init:** Esta función inicializa el entorno gráfico, estableciendo el color de fondo, la matriz de visualización y la proyección perspectiva.
  
- **esfera1 y esfera2:** Dibujan las dos esferas, utilizando transformaciones de escala y traslación para modificar su apariencia y posición.
  
- **tallo:** Dibuja un "tallo" entre las dos esferas simulando una conexión, utilizando una esfera más pequeña y modificando su posición y escala.

- **ilumina2:** Configura las propiedades de la iluminación, estableciendo la posición, color y atenuación de dos luces distintas, junto con el material y direcciones de la luz.

- **desactiva_luz:** Desactiva las configuraciones de iluminación para el dibujo del "tallo".

- **pera:** Función principal que dibuja las esferas, aplica la iluminación y luego desactiva la luz para el dibujo del "tallo".

## Uso del código

El programa crea una ventana de visualización que muestra las esferas iluminadas y el "tallo". Utiliza la función `glutDisplayFunc(pera)` para ejecutar la función principal de dibujo.
