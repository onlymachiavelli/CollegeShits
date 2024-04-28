#include <iostream>
#include <cmath>

using namespace std;

class Forme {
public:
    virtual float aire() = 0; 
};

class Triangle : public Forme {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float aire() override {
        return (base / 2) * height;
    }
};

class Cercle : public Forme {
private:
    float rayon;

public:
    Cercle(float r) : rayon(r) {}

    float aire() override {
        return 3.14 * rayon * rayon;
    }
};

class Rectangle : public Forme {
private:
    float width, height;

public:
    Rectangle(float w, float h) : width(w), height(h) {}

    float aire() override {
        return width * height;
    }
};

class Square : public Forme {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float aire() override {
        return side * side;
    }
};

int main() {
    const int numShapes = 4;

    Forme* shapes[numShapes];

    Triangle triangle(5, 7);
    Cercle cercle(3);
    Rectangle rectangle(4, 6);
    Square square(5);

    shapes[0] = &triangle;
    shapes[1] = &cercle;
    shapes[2] = &rectangle;
    shapes[3] = &square;

    for (int i = 0; i < numShapes; ++i) {
        cout << "Area of shape " << i+1 << ": " << shapes[i]->aire() << endl;
    }

    return 0;
}
