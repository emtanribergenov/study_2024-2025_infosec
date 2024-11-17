#pragma once
#include <iostream>
#include <sstream>
#include <bitset>
#include <ctime>
using namespace std;


// Кодирует текст в шестнадцатеричную последовальтельность

string encode_hex(string norm_txt){

  string hex_txt;
  stringstream ss;
  string::const_iterator cii;
  unsigned char c;
  unsigned long int cnum;
 
  for(cii=norm_txt.begin(); cii!=norm_txt.end(); cii++){
      c = *cii;
      cnum = int(c);
      ss << hex << cnum;
  }
  hex_txt = ss.str();

  return hex_txt;
}


// Декодирует шестнадцатеричную последовательность в текст

string decode_hex(string hex_txt){
 
  string norm_txt, tmp="";
  stringstream ss;
  string::const_iterator cii;
  char *chr_hex_txt = new char[hex_txt.length()];
  int n=0;

  for(cii=hex_txt.begin(); cii!=hex_txt.end(); cii++){
      tmp += *cii;
      chr_hex_txt[n] = *cii;
      n++;
  }
  hex_txt = tmp;
   
  for(int i=0; i<n; i+=2){
     tmp="";
     for(int j=i; j<i+2; j++)
	tmp += chr_hex_txt[j];
     ss << char(stoi(tmp,nullptr,16));
  }
  norm_txt = ss.str();

  delete [] chr_hex_txt;
  chr_hex_txt = nullptr;

  return norm_txt;
}



// Гаммирование

string one_time_gamming(string hex_txt, string key){

  string gammed_txt="", str_xor, hex1, hex2;
  stringstream ss;
  bitset<8> bin_xor;
  int int_xor, int_sumnd1,int_sumnd2;
  string::const_iterator cii, cij;
  char *chr_message = new char[key.length()];
  char *chr_key = new char[key.length()];
  int n=0,m=0;

  for (cii=hex_txt.begin(); cii!=hex_txt.end(); cii++){
	chr_message[n] = *cii;
	n++;
  }
  for (cij=key.begin(); cij!=key.end(); cij++){
	chr_key[m] = *cij;
	m++;
  }

  for(int i=0; i<n; i+=2){
	hex1 = "";
	hex2 = "";	
	for(int j=i; j<i+2; j++)
	{
	   hex1 += chr_message[j];
	   hex2 += chr_key[j];
	}
	int_sumnd1 = stoi(hex1, nullptr, 16);
	int_sumnd2 = stoi(hex2, nullptr, 16);
        bin_xor = bitset<8>(int_sumnd1) ^= bitset<8>(int_sumnd2);
	str_xor = bin_xor.to_string();
	int_xor = stoi(str_xor, nullptr, 2);
	if(int_xor < 16)
	    ss << hex << 0 << int_xor;
	else
	    ss << hex << int_xor;
  }
 gammed_txt = ss.str();
 
 delete [] chr_message;
 delete [] chr_key;
 chr_message = nullptr;
 chr_key = nullptr;

 return gammed_txt;
}


// Генерация ключа

 string key_gen(string text, int rand_num){
  
  string key;
  stringstream ss;
  string::const_iterator cii;

  for(cii=text.begin(); cii!=text.end(); cii++)
      ss << hex << (rand()%100 + rand_num)%16;
  key = ss.str();

  return key;
}
