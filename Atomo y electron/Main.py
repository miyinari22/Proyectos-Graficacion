import pygame
import math
from pygame.locals import *
from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
from Electron import draw_electron

elementos = ["H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne"]

def draw_atom_with_electrons(num_electrones, time_passed):
    glColor3f(0.5, 0.5, 1.0)  # Color azul claro para la esfera

    glPushMatrix()
    glScalef(0.3, 0.3, 0.3) 
    num_slices = 50
    num_stacks = 50

    for i in range(num_slices):
        lat0 = math.pi * (-0.5 + (i - 1) / num_slices)
        z0 = math.sin(lat0)
        zr0 = math.cos(lat0)

        lat1 = math.pi * (-0.5 + i / num_slices)
        z1 = math.sin(lat1)
        zr1 = math.cos(lat1)

        glBegin(GL_QUAD_STRIP)
        for j in range(num_stacks + 1):
            lng = 2 * math.pi * (j - 1) / num_stacks
            x = math.cos(lng)
            y = math.sin(lng)

            glNormal3f(x * zr0, y * zr0, z0)
            glVertex3f(x * zr0, y * zr0, z0)

            glNormal3f(x * zr1, y * zr1, z1)
            glVertex3f(x * zr1, y * zr1, z1)
        glEnd()

    glPopMatrix()

    glLoadIdentity()

    num_electrones_a_dibujar = min(num_electrones, 10)

    for i in range(num_electrones_a_dibujar):
        glPushMatrix()
        angle = 2 * math.pi * i / num_electrones
        radius = 0.5
        rotation_speed = 0.5
        translation_speed = 0.5

        x = radius * math.cos(angle + rotation_speed * time_passed) + translation_speed * math.sin(angle + rotation_speed * time_passed)
        y = radius * math.sin(angle + rotation_speed * time_passed) - translation_speed * math.cos(angle + rotation_speed * time_passed)
        z = 0

        glTranslatef(x, y, z)
        draw_electron()
        glPopMatrix()

def main():
    pygame.init()
    display = (800, 600)
    pygame.display.set_mode(display, DOUBLEBUF | OPENGL)

    gluPerspective(45, (display[0] / display[1]), 0.1, 50.0)
    glTranslatef(0.0, 0.0, -5)

    glEnable(GL_DEPTH_TEST)

    clock = pygame.time.Clock()
    current_element = 0
    num_electrones = 1
    last_time = pygame.time.get_ticks()

    movement = 0.1
    direction = (1, 1)

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_EQUALS or event.key == pygame.K_PLUS:
                    current_element = (current_element + 1) % len(elementos)
                    num_electrones = current_element + 1
                elif event.key == pygame.K_MINUS:
                    current_element = (current_element - 1) % len(elementos)
                    num_electrones = current_element + 1

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        glLoadIdentity()

        current_time = pygame.time.get_ticks()
        time_passed = (current_time - last_time) / 1000.0
        last_time = current_time

        draw_atom_with_electrons(num_electrones, time_passed)

        pygame.display.flip()
        clock.tick(60)

if __name__ == "__main__":
    main()