#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void calculos(int n1, int n2) {
  
  // soma
  int soma = n1+n2;
  std::cout << "\nSOMA DE " << n1 << " + " << n2 << " = " << soma << "\n";
  // sub
  int sub = n1-n2;
  std::cout << "\nSUBTRACAO DE " << n1 << " - " << n2 << " = " << sub << "\n";
  //mult
  int mult = n1*n2; 
  std::cout << "\nMULTIPLICACAO DE " << n1 << " * " << n2 << " = " << mult << "\n";
  //div
  float div = n1/n2;
  std::cout << "\nDIVISAO DE " << n1 << " / " << n2 << " = " << std::fixed<<setprecision(5)<< div << "\n";
}

void mediaEscola() {
  float n1,n2,n3;
  std::cout << "Favor digitar suas notas: \n";
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  
  float media = (n1 + n2 + n3)/3;
  if (media >= 6) {
    std::cout << "aprovado com media " << media<< "!\n";
  } else if (media < 6) {
    std::cout << "reprovado com media "<< std::fixed<<setprecision(1) << media << "!\n";;
  }
}
 
int main() {
  
  std::cout << "CÁLCULOS!\n";
  //calculos(104654,156149);
  mediaEscola();
  
  return 0;
}