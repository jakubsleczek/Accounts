#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_

class InsufficientFundsException: public std::exception{
public:
    InsufficientFundsException()=default;
    virtual ~InsufficientFundsException()noexcept=default;
    virtual const char* what() const noexcept override{return "Insufficient Funds\n";};
};

#endif // _INSUFFICIENTFUNDSEXCEPTION_H_
