#pragma once
#include <string>

const double SALES_TAX = 0.25; // 25% sales tax as a global constant

class Commodity {
public:
  Commodity(const std::string &name, int id, double price);
  std::string get_name() const;
  int get_id() const;
  double get_price() const;
  double get_price(double quantity) const;
  double get_price_with_sales_tax(double quantity) const;
  void set_price(double new_price);

private:
  std::string name;
  int id;
  double price;
};
