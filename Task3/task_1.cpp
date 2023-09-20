const double pi = 3.141592;

class Circle {
public:
  Circle(double radius_);  // Retter circle til Circle
  double get_area() const; // Return typen skal være double og ikke int
  double get_circumference() const;

private:
  double radius; // Syntaks feil
};

// Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) {} // Rettet radius_(radius) til radius(radius_)

double Circle::get_area() const { // Rettet return typen
  return pi * radius * radius;
}

double Circle::get_circumference() const { // La til return type
  return 2.0 * pi * radius;
}
