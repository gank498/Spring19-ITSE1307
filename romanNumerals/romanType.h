#pragma once

class romanType{
      char R[8];
      int decimal; //stores the decimal number after converting
public:
      romanType(); //constructor
      void RomanTodecimal(); //declaration of a function to convert roman into decimal
      int get_decimal();//declaration of a function to get decimal number
	  bool operator>=(int);
};