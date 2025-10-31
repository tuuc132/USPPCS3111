#ifndef SEMMONITOR_H
#define SEMMONITOR_H
#include <string>
#include <stdexcept>
using namespace std;

class SemMonitor : public logic_error{
public:
    SemMonitor(string mensagem);
    ~SemMonitor();
};

#endif