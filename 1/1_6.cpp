#include <iostream>

class Point
{
public:
	float x, y;

	Point() 
	{
		x = 0;
		y = 0;
	};

	Point(float x_cord, float y_cord)
	{
		x = x_cord;
		y = y_cord;
	};
	
	void update_cord(float x_cord, float y_cord)
	{
		x = x_cord;
		y = y_cord;
	};
};

int main()
{
	int i;
	float x_cord, y_cord;
	Point p[3];
	float distance[3], area, s=0;

	for (i = 0; i < 3; i++)
	{
		std::cout << "Insira as coordenadas (x,y) do ponto " << i + 1 << ": ";
		std::cin >> x_cord >> y_cord;

		p[i].update_cord(x_cord, y_cord);
	}

	distance[0] = sqrt(pow((p[2].x - p[0].x), 2) + pow((p[2].y - p[0].y), 2));
	distance[1] = sqrt(pow((p[2].x - p[1].x), 2) + pow((p[2].y - p[1].y), 2));
	distance[2] = sqrt(pow((p[1].x - p[0].x), 2) + pow((p[1].y - p[0].y), 2));

	for (i = 0; i < 3; i++)
	{
		std::cout << "Distancia_" << i << " : " << distance[i] << std::endl ;
		s += distance[i];
	}
	s /= 2; // semi perimeter = perimeter / 2

	area = sqrt(s*(s - distance[0])*(s - distance[1])*(s - distance[2]));

	std::cout << "Area do triangulo formado pelos pontos :" << area << std::endl;

	return 0;
}