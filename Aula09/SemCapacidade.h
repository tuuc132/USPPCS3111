#ifndef SEMCAPACIDADE_H
#define SEMCAPACIDADE_H
#include <stdexcept>
#include <string>
using namespace std;

class SemCapacidade : public logic_error {
public:
    SemCapacidade (string mensagem);    
    ~SemCapacidade();
};

#endif