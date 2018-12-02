#define c1 5
#define c2 4
#define c3 3
#define c4 2
#define c5 1
float midpoint_10000(float a, float b);
float trapezoidal_10000(float a, float b);
float simpson_10000(float a, float b);
float f(float x);

float midpoint_10000(float a, float b)
{
    float sum = 0.0L, i, de_x = (float)(b - a) / 10000;
    for (i = a; i < b; i += de_x)
        sum += f(i + de_x);
    sum *= de_x;
    return sum;
}
float trapezoidal_10000(float a, float b)
{
    float sum = 0.0L, i, de_x = (float)(b - a) / 10000;
    sum += f(a) + f(b);
    for (i = a + de_x; i < b; i += de_x)
        sum += 2 * f(i);
    sum *= de_x / 2;
    return sum;
}
float simpson_10000(float a, float b)
{
    int time = 0;
    float sum = 0.0L, i, de_x = (float)(b - a) / 10000;
    sum += f(a) + f(b);
    time++;
    for (i = a + de_x; i < b; i += de_x, time++)
    {
        if (time % 2)
            sum += 4 * f(i);
        else
            sum += 2 * f(i);
    }
    sum = sum * de_x / 3;
    return sum;
}
float f(float x)
{
    return c1 * x * x * x * x + c2 * x * x * x + c3 * x * x + c4 * x + c5;
}
