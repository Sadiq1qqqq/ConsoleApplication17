

#include <iostream>
using namespace std;
int main()
{
   /* int array[5][5] = 
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15,},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int sum = 0;

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum += array[i][j];
        }
    }

    

    std::cout << "Massiv:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

   

    std::cout << "Massivdeki ededlerin cemi: " << sum << std::endl;

    return 0;*/
    
    int array[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int sum = 0;

  
    for (int i = 0; i < 5; ++i) {
        
        sum += array[i][i];

        
        if (i != 5 - 1 - i) {  
            sum += array[i][5 - 1 - i];
        }
    }+    

    
    std::cout << "Massiv:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }

   
    std::cout << "Esas və Eks diaqonaldakı reqemlerin cemi: " << sum << std::endl;

    return 0;


   
    /*int m[5][5];
    int negative = 0;
    int positive = 0;
    int zero = 0;
    

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5;j++) {

            m[i][j] = std::rand() % 11 - 5;
        }
    }

    std::cout << "Massiv:" << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (m[i][j] < 0) {
                negative++;
            }
            else if (m[i][j] > 0) {
                positive++;
            }
            else {
                zero++;
            }
        }
    }

    
    std::cout << "Menfi ededlerin sayi: " << negative << std::endl;
    std::cout << "Musbet ededlerin sayi: " << positive << std::endl;
    std::cout << "Sifirlarin sayi: " << zero << std::endl;

    return 0;*/





}


