#pragma once

#include <math.h>
#include <iostream>

class RoundPeg {
  public:
    RoundPeg() {}
    RoundPeg(double rad) : radius(rad) {}
    virtual ~RoundPeg() {}

    virtual double getRadius() { return this->radius; }

  private:
    double radius;   
};

class RoundHole {
  public:
    RoundHole(double rad) : radius(rad) {}

    double getRadius() { return this->radius; }

    bool fits(RoundPeg *peg) {
      std::cout << "This radius is: " << this->getRadius() << " and peg radius is: " << peg->getRadius() << std::endl;
      return this->getRadius() >= peg->getRadius();
    }

  private:
    double radius;
};

class SquarePeg {
  public:
    SquarePeg(double wid) : width(wid) {}

    double getWidth() { return width; }
  
  private:
    double width;
};

class SquarePegAdapter : public RoundPeg {
  public:
    SquarePegAdapter() {}
    SquarePegAdapter(SquarePeg *sp) : square_peg(sp) {}

    double getRadius() override {
      std::cout << "SquarePegAdapter::getRadius called!" << std::endl;
      return this->square_peg->getWidth() * sqrt(2.0) / 2.0;
    }

  private:
    SquarePeg *square_peg; 
};