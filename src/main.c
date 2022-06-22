#include <stdio.h>
#include "Vector3d.h"

void write_color(FILE* fp, Color* color);

int main()
{
    int image_height=600, image_width=800, max_color=255;
    
    FILE* fp = fopen("out.ppm", "w");


    fprintf(fp, "P3\n%d %d\n%d\n", image_width, image_height, max_color);

    for(int i=0; i< image_height; ++i)
    {
        for(int j=0; j< image_width; ++j)
        {
            Color color;
            color.x = ((double)i)/image_height * max_color;
            color.y = ((double)j)/image_width * max_color;
            color.z = 0.25 * max_color; 

            write_color(fp, &color);
        }
        fprintf(fp, "\n");
    }


    fclose(fp);
    
    return 0;
}

void write_color(FILE* fp, Color* color)
{
    fprintf(fp, "%f %f %f ",  color->x, color->y, color->z);
}





