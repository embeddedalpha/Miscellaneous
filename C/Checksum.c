#include <stdio.h>

//GPRMC,102739.000,A,3150.7825,N,11711.9369,E,0.00,303.62,111214,,,D

int main()
{
    int checksum = 0;
    char *c = "$GPGGA,102604.000,3150.7815,N,11711.9352,E,1,4,3.13,57.7,M,0.0,M,,*";
    
    while(*c != '*')
    {
        if(*c != '$')
        {
            if(*c != ',')
            {
                checksum ^= (int)*c;
            }
            
        }
        *c++;
    }

 printf("%x\n",checksum);

    return 0;
}
