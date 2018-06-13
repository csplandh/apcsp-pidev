int main(void) {
  printf("\n");
  printf("How to Calculate Rectangle and Triangle Areas\n");
  printf("\n");
  double lenght, width, rectanglearea, trianglearea;    
  printf("Enter the Lenght or Base and Width or Height:");
  scanf("%lf %lf", &lenght, &width);
  rectanglearea = lenght * width;
  trianglearea = lenght * width / 2;
  printf("\n");
  printf("Lenght or Base = %.2lf\n", lenght);
  printf("\n");
  printf("Width or Height = %.2lf\n", width);
  printf("\n");
  printf("Rectangle Area: %.2lf * %.2lf = %.2lf\n", lenght, width, rectanglearea);
  printf("\n");
  printf("Triangle Area: %.2lf * %.2lf / 2 = %.2lf\n", lenght, width, trianglearea);
  printf("\n");
  printf("F O R M U L A S\n");
  printf("\n");
  printf("Rectangle Area = Lenght * Width\n");
  printf("\n");
  printf("Triangle Area = Base * Height / 2\n");
  printf("\n");
  return 0;
  }

