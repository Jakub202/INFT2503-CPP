#include "commodity.hpp"

Commodity::Commodity(const std::string &name, int id, double price)
    : name(name), id(id), price(price) {}

std::string Commodity::get_name() const {
  return name;
}

int Commodity::get_id() const {
  return id;
}

double Commodity::get_price() const {
  return price;
}

double Commodity::get_price(double quantity) const {
  return price * quantity;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return price * quantity * (1 + SALES_TAX);
}

void Commodity::set_price(double new_price) {
  price = new_price;
}
