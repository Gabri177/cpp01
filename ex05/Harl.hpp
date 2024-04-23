#ifndef HARL_CPP
# define HARL_CPP
# include "main.hpp"

class Harl{

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    public:
        void    complain (std::string level);
};

typedef void (Harl::*t_func)(void);
typedef std::string levels[4];

#endif