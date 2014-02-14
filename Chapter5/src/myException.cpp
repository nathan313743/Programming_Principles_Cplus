#ifndef My_Exception
#define My_Exception
#include <exception>
#include <string>

class MyException: public std::exception
{
private:
    std::string message;
public:
    MyException(const std::string& message): message(message){}
    ~MyException() throw() {}

    const char* what() const throw()
    {
        return message.c_str();
    }
};
#endif
