#ifndef DECIDESTRAT_H
#define DECIDESTRAT_H


class DecideStrat {
public:
    virtual int execute(int a, int b) = 0;
    virtual ~DecideStrat();
};

class Strong : public DecideStrat {
public:
    virtual int execute(int a, int b);
    ~Strong();
};

class Meduim : public DecideStrat {
public:
    virtual int execute(int a, int b);
    ~Meduim();
};

class Weak : public DecideStrat {
public:
    virtual int execute(int a, int b);
    ~Weak();
};


#endif

