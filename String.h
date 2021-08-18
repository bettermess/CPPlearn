#ifndef STRING_HHH
#define STRING_HHH
#include <string.h>
#include <ostream>

using namespace std;

class String
{
private:
    char *date;
public:
    String(const char* p = nullptr);
    String(const String& str);
    String& operator=(const String& str);
    
    ~String();
    friend ostream& operator << (ostream& os, const String& str);
    char * get_char() const {return date;}
};

inline
String::String(const char* p)
{
    if(p)
    {
        date = new char[strlen(p)+1];
        strcpy(date, p);
    }
    else
    {
         date = new char[1];
         *date = '\0';
    }
}

inline
String::String(const String& str)
{
    date = new char[strlen(str.date)+1];
    strcpy(date,  str.date);
}

inline
String& String::operator = (const String& str)
{
    if(this == &str)
    {
        return *this;
    }
    delete[] date;
    date = new char[strlen(str.date)+1];
    strcpy(date, str.date);
    return *this;
}

inline
String::~String()
{
    delete[] date;
}

inline
ostream& operator << (ostream& os, const String& str)
{
    return os<<str.get_char();
}

#endif