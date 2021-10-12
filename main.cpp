
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;
 
float f(float x) {
  return (x*x*x-4);
}

void BisectionMethod(float atas, float bawah, int iterasi) {
  float fb,fc,fa;
  float c;
  int   n;

  printf("Bisection\n");

  for (n = 0; n < iterasi; n++) {
    fb  = f(bawah);
    fa  = f(atas);

    c   = (bawah + atas) / 2;
    c   = roundf(c * 1000) / 1000;
    fc  = f(c);

    printf("Iterasi %d:\t Xr %f\t F(Xr)\t%f\n",n+1,c,fc); 
    if (fc * fb < 0) {
      atas = c;
    } else {
      bawah = c;
    }
  }
}
// "hello"    string/character
// 123        int 
// 0.1        float
// 0.1e5      decimal
// true false bool

// variable = {
//  alamat: 0xdddasd1,
//  value:  123,
// }

// function
float acak(float bilangan) { // contohvar: 11.123
  // return contohVar - 10;
  return (bilangan - 10);
}

int morningGreet(char const *nama) {
  printf("Hello %s \n", nama); // hello zidan
  return 0;
}

// void printKata(string katanya) {
//   printf("katanya %c \n", katanya);
// }

int main() {
  // printKata('h');
  // char str[80] = 'hello';
  int hasilint = morningGreet("zidan");
  // int hasilint = 1231;

  // float panjangKontainer = 21;
  // float hasil = acak(panjangKontainer);
  // printf("hasil adalah %f \n", hasil);

  // float a,b,c;
  // int iterasi;
  // a = 1;
  // b = 3;
  // c = 0;
  
  // printf("Fungsi X^3 - 4\n");
  // printf("masukan iterasi\n");

  // ngisi variable dengan. inputann use
  // scanf("%d", &iterasi);
  // tampilkan isi dari variable iterasi
  // printf("user menginputkan %d \n", iterasi);

  // RegulaFalsi(a, b, iterasi);
  // BisectionMethod(a, b, iterasi);
  return 0;
}