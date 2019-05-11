#include <iostream>
#include <string>

struct Dice{
  int k[6];
    void koro(char c){
      int b;
      if(c=='E'){
        b = k[0];
        k[0] = k[3];
        k[3] = k[5];
        k[5] = k[2];
        k[2] = b;
      }
      if(c=='W'){
        b = k[0];
        k[0] = k[2];
        k[2] = k[5];
        k[5] = k[3];
        k[3] = b;
      }
      if(c=='N'){
        b = k[0];
        k[0] = k[1];
        k[1] = k[5];
        k[5] = k[4];
        k[4] = b;
      }
      if(c=='S'){
        b = k[0];
        k[0] = k[4];
        k[4] = k[5];
        k[5] = k[1];
        k[1] = b;
      }
    }
      int top(){
        return k[0];
      }
    };
int main(){
  Dice d;
  for(int i = 0;i < 6; i++){
    std::cin >> d.k[i];
  }
  std::string k;
  std::cin >> k;
  for (int i = 0; d.size(); i++){
    d.koro(k[i]);
  }
  std::cout << d.top() << std::endl;
  return 0;
}
