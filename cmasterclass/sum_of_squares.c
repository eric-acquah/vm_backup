#include <stdio.h>
#include <math.h>
/**
 *main - find the sum of squares
 *Return 0 (Succecss)
 */

/*function declearation*/
void crunch(int data_point[]);

int main(void)
{
	/*int cast;
	int sum = 0;
	float len = 0;
	float mean;
	double isfloat;
	double integral;
	int i,j;*/
	int size;
	/*int count = 0;*/
	int q;
	int data_points[20];
	printf("SUM_OF_SQUARES\n");
        printf("___________________\n");
	printf("How many data pionts will you be using? ");
	scanf("%d", &size);
	if (size > 20 )
	{
		printf("%d is too much to work with, try somthing below 21 \n", size);
		scanf("%d", &size);
	}
	printf("Enter %d data points seperated by space: ", size);
	for (q = 0; q <= size - 1; q++)
	{
		scanf("%d", &data_points[q]);
	}

/*check if we would be working with float or otherwise
	for (i = 0; data_points[i] < data_points[5]; i++)
	{
		len++;
	}
	printf("len = %f\n", len);

	for (j = 0; data_points[j] < data_points[5]; j++)
	{
		sum += data_points[j];
		printf("sum :%d, data :%d\n", sum, data_points[j]);
	}

	mean = sum/len;

	printf("%.2f\n", mean);

	isfloat = modf(mean, &integral);

	if (isfloat == 0.000000)
	{
		cast = (int) mean;
		printf("%f is not a float :: %d\n", isfloat, cast);
	}
	else
	{
		printf("%f is a float\n", isfloat);
		}*/

    	crunch(data_points);
	return (0);
}

/**
 *crunch - do the calculation per the formula of sum_of_squares
 *@data_points: input from user as data points
 */

void crunch(int data_points[])
{
	/*find the mean(average)*/
	float len = 0;
	float zero = 0;
	int sum = 0;
	float mean;
	float product[10];
	int result = 0;
	int i,j,k;

	for (i = 0; data_points[i] < data_points[5]; i++)
	{
		len++;
	}

	for (j = 0; data_points[j] < data_points[5]; j++)
	{
		sum += data_points[j];
	}

	mean = sum/len;

	/*find the squared difference of mean from each index*/
	for (k = 0; data_points[k] < data_points[5]; k++)
	{
		product[k] = (data_points[k] - mean);
		product[k] = product[k] * product[k];
	}

	/*Sum the result of the previous opreation*/
	for (k = 0; product[k] < data_points[5] ; k++)
	{
		zero += product[k];
	}

	result = (int) zero;

	printf("The sum of squares of the data points entered is: %d\n", result);
}
