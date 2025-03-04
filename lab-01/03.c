#include <stdio.h>

// function prototypes
float circleArea(float radius);
float rectangleArea(float length, float width);
float triangleArea(float base, float height);

int main()
{
    float radius = 3.14159;
    float length = 10.6;
    float width = 5.3;

    float areaCircle = circleArea(radius);
    float areaRectangle = rectangleArea(length, width);

    printf("The area of circle: %f\n", areaCircle);
    printf("The area of rectange: %f\n", areaRectangle);
    printf("The area of triangle: %f\n", triangleArea(2, 8));

    return 0;
}

float circleArea(float radius)
{
    return 22 / 7 * (radius * radius);
}

float rectangleArea(float length, float width)
{
    return length * width;
}

float triangleArea(float base, float height)
{
    return  0.5 * base * height;
}
