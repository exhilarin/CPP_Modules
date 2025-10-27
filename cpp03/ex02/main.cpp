/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:36:41 by iguney            #+#    #+#             */
/*   Updated: 2025/10/27 15:57:44 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() 
{
    std::cout << "===== TEST 1: ClapTrap =====" << std::endl;
    {
        ClapTrap clap("Clappy");
        clap.attack("target dummy");
        clap.takeDamage(5);
        clap.beRepaired(3);
    } // ClapTrap destructor çağrılmalı

    std::cout << std::endl << "===== TEST 2: ScavTrap =====" << std::endl;
    {
        ScavTrap scav("Scavvy");
        scav.attack("enemy");
        scav.takeDamage(20);
        scav.beRepaired(10);
        scav.guardGate();
    } // ScavTrap ve ClapTrap destructor'ları sırasıyla çağrılmalı

    std::cout << std::endl << "===== TEST 3: FragTrap =====" << std::endl;
    {
        FragTrap frag("Fraggy");
        frag.attack("evil bot");
        frag.takeDamage(40);
        frag.beRepaired(25);
        frag.highFivesGuys();
    } // FragTrap ve ClapTrap destructor'ları sırasıyla çağrılmalı

    std::cout << std::endl << "===== ALL TESTS DONE =====" << std::endl;
    return 0;
}