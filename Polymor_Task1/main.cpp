#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure(int sides, const std::string& figure_name) {
        sides_count = sides;
        name = figure_name;
    }

    int get_sides_count(){
        return sides_count;
    }
    
    std::string get_name(){
        return name;
    }
};

class Triangle : public Figure{
public:
    Triangle() : Figure(3, "Треугольник"){}
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4, "Четырехугольник"){}
};

int main(int argc, const char * argv[]) {
    Figure figure(0, "Фигура");
    std::cout << "Количество сторон: " << std::endl << figure.get_name() << " : " << figure.get_sides_count() << std::endl;
    
    Triangle triangle;
    std::cout << triangle.get_name() << " : " << triangle.get_sides_count() << std::endl;
    Quadrangle quadrangle;
    std::cout << quadrangle.get_name() << " : " << quadrangle.get_sides_count() << std::endl;
        return 0;
}
