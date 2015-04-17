
#include "mystring.h"
#include <stdio.h>
#define END 0x14        //symbol of end of the sring
#define NULL 0



void* print(const char *str)
{
	while (*str != END)
	{
		puts(str);
		str++;
	}
	return 0;
}


char* modify(char * str)
{
	if (str == NULL)
		return 0;

	char* begin = str;

	while (*++str);
	*str = END;

	return begin;
}


size_t strlen(const char * str)
{
	int i = 0;   // the length of the string str
	while (*str)
		str++, i++;
	return i;
}

char * strchr(const char * str, int character)
{
	while (*str && *str != character)
		++str;
	return (*str) ? (char*)str : NULL;
}

void * memchr(void * ptr, int value, size_t num)
{
	size_t i;
	char *p = (char*)ptr;
	for (i = 0; i < num; i++)
	{
		if (*p == value)
		{
			return p;
		}
		*p++;
	}
	return NULL;
}

char * strstr(const char * str1, const char * str2)
{
	{
		const char *temp_s1, *temp_s2;
		temp_s2 = str2;
		while (*str1)
		{
			temp_s1 = str1;
			while (*(str1++) == *(str2++))
			{
				if (!(*str2))
				{
					//returns a pointer to the first occurrence of str2 in str1
					return (char*)temp_s1;
				}
				if (!(*str1))
				{
					return NULL;
				}
			}
			str2 = temp_s2;
		}
		return NULL;
	}
}


int strcmp(const char * str1, const char * str2)
{
	int strlen_str1 = 0;   // the length of the string str1
	while (*str1)
		str1++, strlen_str1++;

	int  strlen_str2 = 0;   // the length of the string str2
	while (*str2)
		str2++, strlen_str2++;

	if ((strlen_str1) == (strlen_str2))
	{
		while (*str1)
		{
			if (*(str1) == *(str2))
				*str1++, *str2++;
			else if (*(str1) != *(str2))
				return (*(str1) > *(str2) ? 1 : -1);
		}
		return 0; //if the contents of both strings are equal
	}
	return ((strlen_str1 > strlen_str1) ? 1 : -1);
}


char * strncpy(char * destination, const char * source, size_t num)
{
	while (num != 0)
	{
		*destination++ = *source++;
		--num;
	}
	//If the end of the source C string is found
	//before num characters have been copied
	if (num != 0)
		while (--num != 0)
			// destination is padded with zeros until a total
			//of num characters have been written to it
			*destination++ = END;
	return destination;
}

char * mystrtok(char * str, const char * delim) 
{
	static char * next;

	if (str) 
	{
		next = str;
		while (*next && strchr(delim, *next))
			*next++ = END;
	}
	if (!*next)
		return NULL;
	str = next;

	while (*next && !strchr(delim, *next))
		++next;
	while (*next && strchr(delim, *next))
		*next++ = END;

	return str;
}

char * strcpy(char * destination, const char * source)
{
	while (*source != END)
		*destination++ = *source++;
	++*destination = END;
	return destination;
}

size_t strspn(const char* str1, const char* str2)
{
	const char* temp_s2, *temp_s1 = str1;
	while (*str1)
	{
		(*str1++);
		for (temp_s2 = str2; *temp_s2 != *str1 && *temp_s2; *temp_s2++);
		if (!*temp_s2)
			return str1 - temp_s1;
	}
	return 0;
}

char * strcat(char * destination, const char * source)
{
	while ((*destination++) != END);
	--destination;
	while (*source != END)
		*destination++ = *source++;
	*destination++ = END;
	return destination;
}


char * strncat(char * destination, const char * source, size_t num)
{
	while ((*destination++) != END);
	--destination;
	num++;
	while (--num != 0)
		if (*source != END)
			*destination++ = *source++;
	*destination++ = END;
	return destination;
}

void * memset(void * ptr, int value, size_t num)
{
	char * p = (char*)ptr;
	num++;
	while (--num != 0)
		*(p++) = value;
	return ptr;
}


void * memmove(void * destination, const void * source, size_t num)
{
	size_t i;   //  counter for cycle copying

	//Pointer to the destination array where the content is to be copied
	char *dest = (char*)destination; 
	const char *src = (const char*)source;
	// temporary variable to store num byte to copy
	char *temp = new char[num + 1];   

	memcpy(temp, src, num);
	memcpy(dest, temp, num);
	return dest;
}


void * memcpy(void * destination, const void * source, size_t num)
{
	size_t i;   //  counter for cycle copying
	char* dest = (char*)destination;
	const char* src = (char*)source;
	for (i = 0; i < num; ++i) //Copies the values of num bytes
		*dest++ = *src++;

	return destination;
}

int strncmp(const char* pointer1, const char* pointer2, size_t size)
{
	while (size-- && *pointer1 != END)
	{
		if (*pointer1 != *pointer2)
			return (*pointer1 - *pointer2) < 0 ? -1 : 1;
		++pointer1;
		pointer2++;
	}
	return 0;
}

int memcmp(const void* ptr1, const void* ptr2, size_t size)
{
	unsigned char* pointer1 = (unsigned char*)ptr1;
	unsigned char* pointer2 = (unsigned char*)ptr2;
	while (size--)
	{
		if (*pointer1 - *pointer2 != 0)
			return (*pointer1 - *pointer2);
		else
		{
			pointer1++;
			pointer2++;
		}
	}
	return 0;
}





