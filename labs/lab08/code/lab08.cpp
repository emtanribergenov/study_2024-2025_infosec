#include <iostream>
#include <string>
#include "functions.h"
using namespace std;


int main(){

  srand(time(NULL));
  string open_txt1, open_txt2, hex_txt1, hex_txt2, key, encrypted_txt1, encrypted_txt2, decrypted_txt1, decrypted_txt2, decoded_txt1, decoded_txt2; 
  
  open_txt1 = "НаВашисходящийот1204    ";
  open_txt2 = "ВСеверныйфилиалБанка";

  cout << "\n Исходные сообщения:\n\n " << open_txt1 << endl;
  hex_txt1 = encode_hex(open_txt1);
  cout << " " << hex_txt1 << endl;
  
  cout << "\n " << open_txt2 << endl;
  hex_txt2 = encode_hex(open_txt2);
  cout << " " << hex_txt2 << endl;
  

  key = key_gen(hex_txt1,rand()%10);
  cout << "\n Ключ:\n " << key << endl;

  encrypted_txt1 = one_time_gamming(hex_txt1, key);
  encrypted_txt2 = one_time_gamming(hex_txt2, key);
  cout << "\n Зашифрованный текст:\n " << encrypted_txt1 << "\n " << encrypted_txt2 << endl;
  

  cout << "\n\n Расшифровка сообщений без ключа:" << endl;
  decrypted_txt1 = one_time_gamming(encrypted_txt1, encrypted_txt2);
  decrypted_txt1 = one_time_gamming(decrypted_txt1, hex_txt1);
  
  decrypted_txt2 = one_time_gamming(encrypted_txt1, encrypted_txt2);
  decrypted_txt2 = one_time_gamming(decrypted_txt2, hex_txt2);

  decoded_txt1 = decode_hex(decrypted_txt1);
  cout << "\n " << decoded_txt1 << endl;

  decoded_txt2 = decode_hex(decrypted_txt2);
  cout << "\n " << decoded_txt2 << endl << endl;
  

   
 return 0;
}
