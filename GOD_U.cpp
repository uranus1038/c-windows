#include <iostream>
#include <string.h>
#include <windows.h>
#include <conio.h>
int text();
int main()
{
    char pwx[20]; 
    bool x = false; 
   
    std::cout<<"12TAILS-JS "<< std::endl ; 
    do
    {
        std::cout<<"pw :  " ;  std::cin>>pwx; 
        if(strcmp(pwx, "nunthawan") == 0)
        {
            text();
            x = true ;
        }else
        {
            std::cout<<"Faild pw code 08."<< std::endl ; 
        }
    }while (x != true);
    return 0 ;
}

int text()
{
    system("Color B");
    std::cout<<"Check File . . ."<< std::endl ;
    Sleep(1800);
    std::cout<<"Unprotect Fredaikis FAC . . ."<< std::endl ;
    Sleep(1800);
    std::cout<<"Bypass Successfully . . ."<< std::endl ;
    Sleep(1800);
    std::cout<<"Activate RansomwareUMI lock network 12tails-TH . . ."<< std::endl ;
    Sleep(1800);
    std::cout<<"Activate Fuction Helper . . ."<< std::endl ;
    Sleep(3000);
    std::cout<<"Your IP is not authorized code 07."<< std::endl ;
    system("Color 4");
    
    getch();
}