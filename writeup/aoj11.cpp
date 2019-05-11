#include <iostream>
#include <utility>

int main(){
  int x, y;
  for(int i = 0; ; i++){
       std::cin >> x >> y;
       if( x == 0 && y == 0) break;
       if(x >= y){
         std::cout << y << " " <<  x << std::endl;
       }
       else if(x < y){
         std::cout << x << " " <<  y << std::endl;
       }
    }
return 0;
}
