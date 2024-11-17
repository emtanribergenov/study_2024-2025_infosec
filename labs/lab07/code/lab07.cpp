#include <iostream>
#include <string>
#include "functions.h"
using namespace std;


int main(){

  srand(time(NULL));
  string open_txt, hex_txt, key, encrypted_txt, decrypted_txt, decoded_txt; 
  
  open_txt = "Yes";
  cout << "\n Исходное сообщение:\n\n " << open_txt << endl;
  hex_txt = encode_hex(open_txt);
  cout << " " << hex_txt << endl;
  
  key = key_gen(hex_txt,rand()%10);
  cout << "\n Ключ:\n " << key << endl;

  encrypted_txt = one_time_gamming(hex_txt, key);
  cout << "\n Зашифрованный текст:\n " << encrypted_txt << endl;
  
  key = key_gen(encrypted_txt,rand()%10);

  cout << "\n Расшифровка текста...\n\n Пробный ключ:\n " << key << endl;
  decrypted_txt = one_time_gamming(encrypted_txt, key);
  decoded_txt = decode_hex(decrypted_txt);
  cout << "\n Расшифрованное сообщение:\n\n " << decoded_txt << endl << endl;
  
  cout << " Подбор ключа..." << endl;
 
  do{
    key = key_gen(encrypted_txt, rand()%10);
    decrypted_txt = one_time_gamming(encrypted_txt, key);
    decoded_txt = decode_hex(decrypted_txt);

  }while(decoded_txt!=open_txt);

   cout << "\n Ключ:\n " << key << endl;
   cout << "\n " << decoded_txt << endl << endl;
 
 return 0;
}
