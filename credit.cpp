#include <iostream>
#include<math.h>
using namespace std;

int main() {
  long int num = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  int m = 0;
  int n = 0;
  int o = 0;
  int p = 0;
  int aone = 0;
  int anew = 0;
  int cone = 0;
  int cnew = 0;
  int eone = 0;
  int enew = 0;
  int gone = 0;
  int gnew = 0;
  int ione = 0;
  int inew = 0;
  int kone = 0;
  int knew = 0;
  int mone = 0;
  int mnew = 0;
  int oone = 0;
  int onew = 0;

  cout << "請輸入卡號:";
  cin >> num;

  while(num >= pow(10,15)){
    num = num - pow(10,15);
    a++;
  }

  while(num >= pow(10,14)){
    num = num - pow(10,14);
    b++;
  }

  while(num >= pow(10,13)){
    num = num - pow(10,13);
    c++;
  }

  while(num >= pow(10,12)){
    num = num - pow(10,12);
    d++;
  }

  while(num >= pow(10,11)){
    num = num - pow(10,11);
    e++;
  }

  while(num >= pow(10,10)){
    num = num - pow(10,10);
    f++;
  }

  while(num >= pow(10,9)){
    num = num - pow(10,9);
    g++;
  }

  while(num >= pow(10,8)){
    num = num - pow(10,8);
    h++;
  }

  while(num >= pow(10,7)){
    num = num - pow(10,7);
    i++;
  }

  while(num >= pow(10,6)){
    num = num - pow(10,6);
    j++;
  }

  while(num >= pow(10,5)){
    num = num - pow(10,5);
    k++;
  }

  while(num >= pow(10,4)){
    num = num - pow(10,4);
    l++;
  }

  while(num >= pow(10,3)){
    num = num - pow(10,3);
    m++;
  }

  while(num >= pow(10,2)){
    num = num - pow(10,2);
    n++;
  }

  while(num >= pow(10,1)){
    num = num - pow(10,1);
    o++;
  }

  while(num >= pow(10,0)){
    num = num - pow(10,0);
    p++;
  }

  if(a * 2 >= 10){
    aone = a * 2 % 10;
    anew = 1 + aone;
  } else{
    anew = a * 2;
  }

  if(c * 2 >= 10){
    cone = c * 2 % 10;
    cnew = 1 + cone;
  } else{
    cnew = c * 2;
  }

  if(e * 2 >= 10){
    eone = e * 2 % 10;
    enew = 1 + eone;
  } else{
    enew = e * 2;
  }

  if(g * 2 >= 10){
    gone = g * 2 % 10;
    gnew = 1 + gone;
  } else{
    gnew = g * 2;
  }

  if(i * 2 >= 10){
    ione = i * 2 % 10;
    inew = 1 + ione;
  } else{
    inew = i * 2;
  }

  if(k * 2 >= 10){
    kone = k * 2 % 10;
    knew = 1 + kone;
  } else{
    knew = k * 2;
  }

  if(m * 2 >= 10){
    mone = m * 2 % 10;
    mnew = 1 + mone;
  } else{
    mnew = m * 2;
  }

  if(o * 2 >= 10){
    oone = o * 2 % 10;
    onew = 1 + oone;
  } else{
    onew = o * 2;
  }

  int total =  anew + b + cnew + d + enew + f + gnew + h + inew + j + knew + l + mnew + n + onew;

  int remainder = total % 10;; //餘數
  
  int final_num = 10 - remainder;; //驗證碼

  if(final_num == p && a == 4){
    cout << "是Visa卡";
  } 
  else if(final_num == p && a == 5 && b >= 1 && b <= 5){
    cout << "是Master卡";
  }
  else{
    cout << "無法辨認";
  }
}
