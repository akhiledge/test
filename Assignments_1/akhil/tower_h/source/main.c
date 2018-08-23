/**
 * File              : source/main.c
 * Author            : Akhil Budampati <a.budampati@globaledgesoft.com>
 * Date              : 15.07.2018
 * Last Modified Date: 19.07.2018
 * Last Modified By  : Akhil Budampati <a.budampati@globaledgesoft.com>
 */

#include "./../header/standard.h"
#include "./../header/tower.h"

/**
 * @Synopsis main function to the program towers of hanoi 
 *
 * @Param argc --> No.of arguments are given by user
 * @Param argv --> Arguments given by user, one should be no.of disks
 *
 * @Returns   integer value
 */
int
main(int argc,
     char ** argv
        )
{
    /**
     * Input validation
     **/
    if(argc < 2 || argc >= 3 ){
        printf("Invalid arguments please enter 1 "\
                "argument only with executable : %s\n",strerror(EINVAL));
        return 0;
    }
    /**
     * Process starts
     *
     **/
    printf("%-10s | %-5s | %-5s |\n","disc moves","from","to"); 
    /**
     * @Synopsis  
     *
     * @Param argv[1]
     * @Param 'A' --> source tower 
     * @Param 'C' --> destination tower
     * @Param 'B' --> Intermediate tower
     */
    hanoi_tower (atoi(argv[1]),'A','C','B');
    return 0;
}
