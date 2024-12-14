#pragma once

struct Tuple {
  double x;
  double y;
  double z;
  double w;

  Tuple() : x{0.0}, y{0.0}, z{0.0}, w{0.0} {};
  Tuple(double x, double y, double z, double w) : x{x}, y{y}, z{z}, w{w} {};

  bool isPoint();
  bool isVector();
};
