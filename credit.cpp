#include <iostream>
using namespace std;

int main() {
  long int card_num = 0;
  int num[15];

  cout << "請輸入卡號:";
  cin >> card_num; 

  for (int i = 0; i < 16; i++){
    num[i] = card_num % 10;    //每個數除以10的餘數
    card_num = card_num / 10;  //把卡號的最後一個數字去掉
  }
  
  //奇數的*2
  for (int x = 1; x < 16; x += 2){
    num[x] *= 2;
  }

  //如果乘積大於等於10要兩數相加
  for (int y = 1; y < 16; y += 2){
    if (num[y] * 2 >= 10){
      int second = num[y] % 10;
      int first = num[y] / 10;
      num[y] = second + first;
    }
  }


  int total = num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9] + num[10] + num[11] + num[12] + num[13] + num[14] + num[15];

  int remainder = total % 10; //餘數
  
  int final_num = 10 - remainder; //驗證碼

  if(final_num == num[0] && num[15] / 2 == 4){
    cout << "是Visa卡";
  } 
  else if(final_num == num[0] && num[15] / 2 == 5 && num[14] >= 1 || num[14] <= 5){
    cout << "是Master卡";
  }
  else{
    cout << "無法辨認";
  }
}

