/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, May 30 2023
*******************************************************************/
#ifndef SDDS_CSTRING_H
#define SDDS_CSTRING_H

namespace sdds {
	void strCpy(char* des, const char* src);
	void strnCpy(char* des, const char* src, int len);
	int strCmp(const char* s1, const char* s2);
	int strnCmp(const char* s1, const char* s2, int len);
	int strLen(const char* s);
	const char* strStr(const char* str1, const char* str2);
	void strCat(char* des, const char* src);
}
#endif // !SDDS_CSTRING_H
