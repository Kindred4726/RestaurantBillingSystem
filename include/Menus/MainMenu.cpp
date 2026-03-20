#include "MainMenu.hpp"

void MainMenu::display()
{
    std::cout<<_header<<std::endl;
    for(int i = 0; i < 4; i++)
    {
        std::cout<<_options[i]<<std::endl;
    }
}