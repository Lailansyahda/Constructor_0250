#include <iostream>
using namespace std;

class angka{
  private :
  int *arr;
  int panjang;
  
  public :
  angka(int); //Constructor
  ~angka(); // destructor
  void cetakData();
  void isiData();
};