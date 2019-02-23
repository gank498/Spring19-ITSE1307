// CH3Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fileVCard;

	fileVCard.open("Computer Service.vcf");

	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "N:mathew;garcia;" << endl;
	fileVCard << "FN: Mathew Garcia" << endl;
	fileVCard << "ORG: Ganks's Computer Services" << endl;
	fileVCard << "Title: Technician" << endl;
	fileVCard << "Photo;MEDIATYPE=image/.jpg:https://i.ytimg.com/vi/uhlBqFj9kDw/maxresdefault.jpg" << endl;
	fileVCard << "TEL; TYPE=work,voice;VALUE=uri:tel:+1-210-555-5555" << endl;
	fileVCard << "TEL; TYPE=home, voice; VALUE = uri:tel:+1-210-555-5555" << endl;
	fileVCard << "ADR;TYPE=WORK:;;555 Broadway St;San Antonio;TX;78215-1820;US" << endl;
	fileVCard << "Email: gank497@yahoo.com" << endl;
	fileVCard << "REV:20080424T195243Z" << endl;
	fileVCard << "x-qq:21588891" << endl;
	fileVCard << "END:VCARD" << endl;
	fileVCard.close();

	return 0;
}
