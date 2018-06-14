#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
	double radiusmin, radiusmax, circlearea;
	//	{ M_PI; }
	if (argc == 3) {
		printf(
			"Find the area of the circle with the miniumum radius %s\n and the "
			"maximum radius %s\n",
			argv[1],
			argv[2]);
	} else if (argc != 3) {
		printf("Enter two integers");
		scanf("%lf %lf", &radiusmin, &radiusmax);
	}
	      int found = sscanf(argv[1], "%lf", &radiusmin);
	      if (found != 1) {
	              printf("first arg is not an integer, enter two ints\n");
	              return 1;
	      }

	      found = sscanf(argv[2], "%lf", &radiusmax);
	      if (found != 1) {
	              printf("second arg is not an integer, enter two ints\n");
	              return 1;
	      }

	      if (argc == 3) {

	float areaofcircle(float r) {
		float area = M_PI * r * r;
		printf("r = %f, area = %f\n", r, area);
		return area;
	}

	for (float i = radiusmin; i <= radiusmax; i++) {
		areaofcircle(i);
	}
}
}
