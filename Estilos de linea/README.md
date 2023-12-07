# Estilos de línea en OpenGL

Este programa en OpenGL muestra diferentes patrones de línea utilizando la función `glLineStipple()` para crear variaciones visuales en las líneas dibujadas en la ventana.

## Descripción del código

El código dibuja líneas horizontales con diferentes patrones de líneas mediante la función `glLineStipple()`. Cada línea se crea con un grosor diferente utilizando `glLineWidth()` y tiene un patrón de línea específico configurado con `glLineStipple()`.

### Función principal

- **inicializa:** Esta función inicializa la ventana de visualización con un color de fondo blanco y establece la matriz de proyección ortográfica.

- **pinta:** Dibuja líneas horizontales con diferentes patrones de línea y grosores, utilizando `glLineStipple()` y `glLineWidth()`. Cada par de líneas utiliza un patrón de línea diferente.

## Uso del código

El programa crea una ventana de visualización que muestra varias líneas horizontales con diferentes patrones y grosores. Utiliza la función `glutDisplayFunc(pinta)` para ejecutar la función principal de dibujo.