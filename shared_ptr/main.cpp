#include <iostream>
#include <memory>

void foo(std::shared_ptr<int>shp)
{
  if(shp != nullptr){
    *shp = 20;
    std::cout << *shp<< ' ';
    std::cout << shp.use_count() << std::endl;
  }
}

int main() {

    std::shared_ptr<int> number = std::make_shared<int>(10);

    std::cout<< *number << ' ';
    std::cout<< number.use_count()<< std::endl;

    foo(number);

    std::cout<< *number << ' ';
    std::cout<<number.use_count()<< std::endl;

    return 0;
}

