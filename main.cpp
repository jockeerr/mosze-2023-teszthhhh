#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                       //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'             //"" nem '' a cout után és ; a végére és endl
    for (int i = 0;)                                   //for ciklus kevés feltétellel
    {                                                        
        b[i] = i * 2;                                    
    }                                                    
    for (int i = 0; i; i++)                                    
    {                                                    
        std::cout << "Ertek:"                          //nincs ;
    }                                                  
    std::cout << "Atlag szamitasa: " << std::endl;     
    int atlag;                                         
    for (int i = 0; i < N_ELEMENTS, i++)               //; N_ELEMENTS után
    {                                                  
        atlag += b[i]                                  //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
