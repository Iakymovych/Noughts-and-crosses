#ifndef MYSTRING_H
#define MYSTRING_H

/**
* @brief   modify str string
* @param   str - C string to be modify.
*/
char* modify(char * str);

/**
* @brief   output str string
* @param   str - C string to be output.
*/
void* print(const char *str);


/**
* @brief   Get span of character set in string
* @param   str1 - C string to be scanned.
* @param   str2 - C string containing the characters to match.
* @return  The length of the initial portion of str1 
           containing only characters that appear in str2.
*/
size_t strspn(const char* str1, const char* str2);

/**
* @brief   Locate first occurrence of character in string.
* @param   str - C string.
* @param   character - Character to be located. 
           It is passed as its int promotion, but it is internally
		   converted back to char for the comparison.
* @return  A pointer to the first occurrence of character in str.
           If the character is not found, the function returns a null pointer.
*/
char * strchr(const char * str, int character);

/**
* @brief   Locate character in block of memory.
* @param   ptr - Pointer to the block of memory where the search is performed.
* @param   value - Value to be located
* @param   num - Number of bytes to be analyzed.
           size_t is an unsigned integral type.
* @return  A pointer to the first occurrence of value
           in the block of memory pointed by ptr.
           If the value is not found, the function returns a null pointer.
*/
void * memchr(void * ptr, int value, size_t num);

/**
* @brief   Copies the values of num bytes from the location pointed
           by source directly to the memory block pointed by destination.
* @param   destination - Pointer to the destination array 
           where the content is to be copied
* @param   source - Pointer to the source of data to be copied
* @param   num - Number of bytes to copy.
           size_t is an unsigned integral type.
* @return  destination 
*/
void * memcpy(void * destination, const void * source, size_t num);

/**
* @brief   Copies the values of num bytes from the location pointed 
           by source to the memory block pointed by destination.
           Copying takes place as if an intermediate buffer were used,
		   allowing the destination and source to overlap.
* @param   destination - Pointer to the destination array 
           where the content is to be copied
* @param   source - Pointer to the source of data to be copied
* @param   num - Number of bytes to copy.
           size_t is an unsigned integral type.
* @return  destination 
*/
void * memmove(void * destination, const void * source, size_t num);

/**
* @brief   Copies the C string pointed by source into the array pointed
           by destination,including the terminating null character 
		   (and stopping at that point).
* @param   destination - Pointer to the destination array 
           where the content is to be copied.
* @param   source - C string to be copied.  
* @return  destination 
*/
char * strcpy(char * destination, const char * source);

/**
* @brief   Copy characters from string.
* @param   destination - pointer to the destination array 
           where the content is to be copied.
* @param   source - C string to be copied.
* @param   num - Maximum number of characters to be copied from source.
           size_t is an unsigned integral type.
* @return  destination 
*/
char * strncpy(char * destination, const char * source, size_t num);


/**
* @brief   Concatenate strings
* @param   destination - Pointer to the destination array,
           which should contain a C string,
           and be large enough to contain the concatenated resulting string.
* @param   source - C string to be appended. 
           This should not overlap destination
* @return  destination
*/
char * strcat(char * destination, const char * source);

/**
* @brief   Append characters from string
* @param   destination - Pointer to the destination array, 
           which should contain a C string,
           and be large enough to contain the concatenated resulting string,
		   including the additional null-character.
* @param   source - C string to be appended.
* @return  num - Maximum number of characters to be appended.
           size_t is an unsigned integral type.
*/
char * strncat(char * destination, const char * source, size_t num);

/**
* @brief   Compares the C string str1 to the C string str2.
* @param   str1 - C string to be compared
* @param   str2 - C string to be compared
* @return  Returns an integral value indicating the relationship between the strings
           <0 - the first character that does not match has a lower
		        value in str1 than in str2
		   >0 - the first character that does not match has a greater 
		        value in str1 than in str2
		    0 - the contents of both strings are equal
*/
int strcmp(const char * str1, const char * str2);

/**
* @brief   Function split string into tokens
* @param   str - C string to truncate.
* @param   delim - C string containing the delimiter characters.
* @return  If a token is found, a pointer to the beginning of the token.
           Otherwise, a null pointer.
*/char * mystrtok(char * str, const char * delim);

/**
* @brief   Function search substring 
* @param   str1 - C string to be scanned
* @param   str2 - C string containing the sequence of characters to match
* @return  a pointer to the first occurrence of str2 in str1,
           or a null pointer if str2 is not part of str1
*/
char * strstr(const char * str1, const char * str2);

/**
* @brief  determines the length of the C string str
* @param  str - C string
* @return the length of string.
*/
size_t strlen(const char * str);

/**
* @brief  Sets the first num bytes of the block of memory
          pointed by ptr to the specified value
          (interpreted as an unsigned char)
* @param  ptr - pointer to the block of memory to fill
* @param  valuse - Value to be set. The value is passed as an int,
          but the function fills the block of memory using the unsigned char
		  conversion of this value
* @param  num - Number of bytes to be set to the value.
          size_t is an unsigned integral type.
*/
void * memset(void * ptr, int value, size_t num);

/**
* @brief  compare the first number of bytes
* @param  ptr1 - pointer to block of memory
* @param  ptr2 - pointer to block of memory
* @param  num - numbers of byte to compare
* @return  <0 first smaller then second
        >0 second smaller then first
         0 equal
*/
int memcmp(const void* ptr1, const void* ptr2, size_t size);

/**
* @brief  compare first num chars in char arrays ended with
          terminal symbol
* @param  pointer1 - C string to be compared.
* @param  pointer2 - C string to be compared.
* @param  size - Maximum number of characters to compare.
* @return  <0 first smaller then second
           >0 second smaller then first
            0 equal
*/
int strncmp(const char* pointer1, const char* pointer2, size_t size);

#endif
