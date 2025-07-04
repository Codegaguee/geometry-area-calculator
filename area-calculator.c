#include <stdio.h>
#include<math.h>

double equilateral_triangle(double);
double isosceles(double, double);
double scalene_triangle(double, double, double, double);
double right_angled_triangle(double, double);

double rectangle(double, double);
double rhombus(double, double);
double square(double);
double parallelogram(double, double);
double trapezium(double, double, double);

double circle(double, double);

double equilateral_triangle(double x) {

    return (sqrt(3.0)/4.0) * pow(x, 2.0);
}

double isosceles(double x, double y) {

    return (y/4.0) * (sqrt(4.0 * pow(x, 2.0) - pow(y, 2.0)));
}

double scalene_triangle(double w, double x, double y, double z) {

    return sqrt(z * (z - w) * (z - x) * (z - y));
}

double right_angled_triangle(double x, double y) {

    return (1.0/2.0) * x * y;
}

double rectangle(double x, double y) {

    return x * y;
}

double rhombus(double x, double y) {

    return (1.0/2.0) * x * y;
}

double square(double x) {

    return pow(x, 2.0);
}

double parallelogram(double x, double y) {

    return x * y;
}

double trapezium(double x , double y, double z) {

    return (1.0/2.0) * (x+y) * z;
}

double circle(double x, double y) {

    return x * pow(y , 2.0);
}

int main() {

    int choice, choice2;
    double triangle_area, isosceles_area, scalene_triangle_area, right_angled_triangle_area, rectangle_area, rhombus_area, square_area,  parallelogram_area, trapezium_area, circle_area, side_length, base, height, length, width, diagonal1, diagonal2, equal_side, radius, pi = 3.1416, A, B, C ,D;

    do {

    printf("===== Area calculator by Abdullah =====\n");
    printf("     ===== Select Area Type =====\n");
    printf("1. Triangles.\n");
    printf("2. Quadrilaterals.\n");
    printf("3. Circle.\n");
    printf("4. Exit the programme.\n");

    printf("Choose an option : ");

    if(scanf("%d", &choice) != 1) {

        printf("Invalid choice.\n");
        return 1;
    }

    switch(choice) {

        case 1:

        printf("1. Equilateral Triangle.\n");
        printf("2. Isosceles Triangle.\n");
        printf("3. Scalene Triangle.\n");
        printf("4. Right-angled Triangle.\n");

        printf("Select the triangle type: ");

        if(scanf("%d", &choice2) != 1) {

            printf("Invalid choice.\n");
            return 1;

        }

        switch(choice2) {

            case 1:

            printf("Enter side length : ");

            if(scanf("%lf", &side_length) != 1) {

                printf("Invalid choice.\n");
                return 1;

            }

            else if(side_length <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            triangle_area = equilateral_triangle(side_length);

            printf("The area of the Equilateral Triangle is : %.2lf.\n", triangle_area);
            break;

            case 2:

            printf("Enter Equal sides : ");

            if(scanf("%lf", &equal_side) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (equal_side <= 0 ) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter base : ");

            if(scanf("%lf", &base) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(base <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            isosceles_area = isosceles(equal_side, base);

            printf("The area of the Isosceles Triangle is : %.2lf.\n", isosceles_area);
            break;

            case 3:

            printf("Enter side A : ");

            if(scanf("%lf", &A) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(A <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter side B : ");

            if(scanf("%lf", &B) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(B <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter side C : ");

            if(scanf("%lf", &C) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(C <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            D = (A + B + C) / 2;

            scalene_triangle_area = scalene_triangle(A, B, C, D);

            printf("The area of the Scalene Triangle is : %.2lf.\n", scalene_triangle_area);
            break;

            case 4:

            printf("Enter base : ");

            if(scanf("%lf", &base) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(base <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter Height : ");

            if(scanf("%lf", &height) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(height <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            right_angled_triangle_area = right_angled_triangle(base , height);

            printf("The area of the Right-angled Triangle is : %.2lf.\n", right_angled_triangle_area);
            break;

        }
        break;

        case 2:

        printf("1. Rectangle.\n");
        printf("2. Rhombus.\n");
        printf("3. Square.\n");
        printf("4. Parallelogram.\n");
        printf("5. Trapezium.\n");

        printf("Select a Quadrilaterals type : ");

        if(scanf("%d", &choice2) != 1) {

            printf("Invalid choice.\n");
            return 1;
        }

        switch(choice2) {

            case 1:

            printf("Enter lenght : ");

            if(scanf("%lf", &length) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(length <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter width : ");

            if(scanf("%lf", &width) != 1) {

                printf("Invalid Input.\n");
            }

            else if(width <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            rectangle_area = rectangle(length, width);

            printf("The area of the Rectangle is : %.2lf.\n", rectangle_area);
            break;

            case 2:

            printf("Enter your diagonal 1 :");

            if(scanf("%lf", &diagonal1) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (diagonal1 <= 0 ) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter your diagonal 2 :");

            if(scanf("%lf", &diagonal2) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (diagonal2 <= 0 ) {

                printf("Invalid Input.\n");
                return 1;
            }

            rhombus_area = rhombus (diagonal1, diagonal2);

            printf("The area of the Rhombus is : %.2lf.\n", rhombus_area);
            break;

            case 3:

            printf("Enter the side : ");

            if(scanf("%lf", &side_length) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (side_length <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            square_area = square(side_length);

            printf("The area of the Square is : %.2lf.\n", square_area);
            break;

            case 4:

            printf("Enter base : ");

            if(scanf("%lf", &base) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(base <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter Height : ");

            if(scanf("%lf", &height) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(height <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            parallelogram_area = parallelogram(base, height);

            printf("The area of the Parallelogram is : %.2lf.\n", parallelogram_area);
            break;

            case 5:

            printf("Enter parallel side A : ");

            if(scanf("%lf", &A) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(A <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter parallel side B : ");

            if(scanf("%lf", &B) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(B <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            printf("Enter Height : ");

            if(scanf("%lf", &height) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if(height <= 0) {

                printf("Invalid Input.\n");
                return 1;
            }

            trapezium_area = trapezium(A, B, height);

            printf("The area of the Trapezium is : %.2lf.\n", trapezium_area);
            break;

        }
        break;

        case 3:

        printf("Enter the Radius : ");

        if(scanf("%lf", &radius) != 1) {

            printf("Invalid Input.\n");
            return 1;
        }

        else if(radius <= 0) {

            printf("Invalid Input.\n");
            return 1;
        }

        circle_area = circle(pi, radius);

        printf("The area of the Circle is : %.2lf.\n", circle_area);
        break;

    }

} while(choice != 4);

printf("Thank you for using us :D");

    return 0;

}

