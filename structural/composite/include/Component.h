#pragma once

#define MAX_CHILDREN 10

class Component {
  public:
    Component() : num_children(0) {}
    virtual ~Component() {
      for (int i = 0; i < num_children; i++) {
        delete children[i];
      }
    }

    virtual double calculatePrice() = 0;
    virtual void addChild(Component *child) {
      this->children[num_children] = child;
      num_children++;
    }
  
  protected:
    Component *children[MAX_CHILDREN];
    int num_children;
};