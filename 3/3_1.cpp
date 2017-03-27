#include <iostream>
#include <cmath>

class Point
{
private:
	double x, y;
public:
	Point() 
	{
		x = 0;
		y = 0;
	};

	Point(double x_cord, double y_cord)
	{
		x = x_cord;
		y = y_cord;
	};
	
	void update_cord(double x_cord, double y_cord)
	{
		x = x_cord;
		y = y_cord;
	};

	double getX(){
		return x;
	}

	double getY(){
		return y;
	}
};


double distance(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}


double area(double x1, double y1, double x2, double y2, double x3, double y3){
	double dis[3], s=0;

	dis[0] = distance(x1, y1, x3, y3);
	dis[1] = distance(x2, y2, x3, y3);
	dis[2] = distance(x1, y1, x2, y2);

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Distancia_" << i << " : " << dis[i] << std::endl ;
		s += dis[i];
	}
	s/=2;

	return sqrt(s*(s - dis[0])*(s - dis[1])*(s - dis[2]));

}

int main (){

	double x_cord, y_cord, a;
	Point p[3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Insira as coordenadas (x,y) do ponto " << i + 1 << ": ";
		std::cin >> x_cord >> y_cord;

		p[i].update_cord(x_cord, y_cord);
	}

	a = area(p[0].getX(), p[0].getY(), p[1].getX(), p[1].getY(), p[2].getX(), p[2].getY());

	std::cout << "Area do triangulo formado pelos pontos :" << a << std::endl;

	return 0;
}