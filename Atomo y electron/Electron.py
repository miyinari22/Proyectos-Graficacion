import math
from OpenGL.GL import *

def draw_electron():
    glColor3f(1.0, 1.0, 0.0)

    num_slices = 10
    num_stacks = 10

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
            glVertex3f(x * zr0 * 0.05, y * zr0 * 0.05, z0 * 0.05)  

            glNormal3f(x * zr1, y * zr1, z1)
            glVertex3f(x * zr1 * 0.05, y * zr1 * 0.05, z1 * 0.05)  
        glEnd()
