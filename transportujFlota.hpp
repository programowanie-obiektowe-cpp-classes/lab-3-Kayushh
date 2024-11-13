#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) return 0;
    Stocznia stocznia;
    unsigned int tot_towar = 0;
    unsigned int ile_zaglowcow = 0;

    while (tot_towar < towar) {
        Statek* statek = stocznia(); 
        tot_towar += statek->transportuj(); 
        if (dynamic_cast<Zaglowiec*>(statek)) {
            ++ile_zaglowcow;
        }
        delete statek; 
    }
    return ile_zaglowcow; 
}
