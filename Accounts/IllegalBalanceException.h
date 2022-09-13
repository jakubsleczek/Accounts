#ifndef _ILLEGALBALANCEEXCEPTION_H_
#define _ILLEGALBALANCEEXCEPTION_H_

class IllegalBalanceException: public std::exception{

public:
    virtual const char* what() const noexcept override{return "Can't have negative balance\n";};
    virtual ~IllegalBalanceException() noexcept=default;
    IllegalBalanceException()=default;

};


#endif // _ILLEGALBALANCEEXCEPTION_H_
