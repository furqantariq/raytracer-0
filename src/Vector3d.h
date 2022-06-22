#ifndef _H_VECTOR3D_
#define _H_VECTOR3D_

typedef struct
{
    double x;
    double y;
    double z;
} Vector3d;

typedef Vector3d Color;
typedef Vector3d Point3d;

void multiply_with(Vector3d* v, double scalar);
void add_with(Vector3d* v, double scalar);
void divide_with(Vector3d* v, double scalar);

double length(Vector3d* v);
double length_squared(Vector3d* v);

Vector3d add(Vector3d* v1, Vector3d* v2);
Vector3d subtract(Vector3d* v1, Vector3d* v2);
Vector3d multiply(Vector3d* v1, Vector3d* v2);
Vector3d multiply_scalar(Vector3d* v, double scalar);
Vector3d divide(Vector3d* v, double scalar);

double dot(Vector3d* v1, Vector3d* v2);
Vector3d cross(Vector3d* v1, Vector3d* v2);
Vector3d unit(Vector3d* v);


#endif
