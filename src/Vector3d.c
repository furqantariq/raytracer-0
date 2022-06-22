#include "Vector3d.h"
#include <math.h>

void multiply_with(Vector3d* v, double scalar)
{
    v->x*=scalar;
    v->y*=scalar;
    v->z*=scalar;
}

void add_with(Vector3d* v, double scalar)
{
    v->x+=scalar;
    v->y+=scalar;
    v->z+=scalar;
}

void divide_with(Vector3d* v, double scalar)
{
    multiply_with(v, 1.0/scalar);
}

double length(Vector3d* v)
{
    return sqrt(length_squared(v));
}

double length_squared(Vector3d* v)
{
    return pow(v->x, 2) + pow(v->y, 2) + pow(v->z, 2);
}

Vector3d add(Vector3d* v1, Vector3d* v2)
{
     Vector3d v;
     v.x = v1->x + v2->x;
     v.y = v1->y + v2->y;
     v.z = v1->z + v2->z;
     return v;
}

Vector3d subtract(Vector3d* v1, Vector3d* v2)
{
    Vector3d v;
    v.x = v1->x - v2->x;
    v.y = v1->y - v2->y;
    v.z = v1->z - v2->z;
    return v;
}

Vector3d multiply(Vector3d* v1, Vector3d* v2)
{
    Vector3d v;
    v.x = v1->x * v2->x;
    v.y = v1->y * v2->y;
    v.z = v1->z * v2->z;
    return v;
}

Vector3d multiply_scalar(Vector3d* v, double scalar)
{
    Vector3d v1 = *v;
    multiply_with(&v1, scalar);
    return v1;
}


Vector3d divide(Vector3d* v, double scalar)
{
    Vector3d v1 = *v;
    divide_with(&v1, scalar);
    return v1;
}

double dot(Vector3d* v1, Vector3d* v2)
{
    return v1->x*v2->x + v1->y*v2->y + v1->z*v2->z;
}

Vector3d cross(Vector3d* v1, Vector3d* v2)
{
    Vector3d v;
    v.x = v1->y*v2->z - v1->z*v2->y;
    v.y = v1->x*v2->z - v1->z*v2->x;
    v.z = v1->x*v2->y - v1->y*v2->x;
    return v;
}

Vector3d unit(Vector3d* v)
{
     return divide(v, length(v)); 
}


















