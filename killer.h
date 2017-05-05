/******************************************************************************
* @name    Kill Bug                                                           *
* @author  Jony Bepary                                                        *
* @version 0.94                                                               *
* @date   2017                                                                *
******************************************************************************/

int ai(int DEBUG){
    int ch;
    if(DEBUG == 1){
        return 1;
    } else
    if(DEBUG == 0){
        return 0;
    } else
    if (DEBUG > 1) {
        printf("Do you want to perform Debug Operation: ");
        ch = getchar();
        if(ch == 'Y' || ch == 'y'){
           return 1;
        }else {
            return 0;
        }
    }
    return 0;
}

int i_debug(int DEBUG, int a){
    if(ai(DEBUG) == 0) return 0;
    printf("\n************\\> Kill Bug 1.01 <//*****************\n");
    printf("Data Type: int\n");
    printf("Value of this Variable is: %d\n", a);
    printf("\n*************\\> Result End <//*****************\n");
    return 0;
}
float f_debug(int DEBUG, float a){
    if(ai(DEBUG) == 0) return 0;
    printf("\n************\\> Kill Bug 1.01 <//*****************\n");
    printf("Data Type: float\n");
    printf("Value of this Variable is: %f\n", a);
    printf("\n*************\\> Result End <//*****************\n");
    return 0;
}
double d_debug(int DEBUG, double a){
    if(ai(DEBUG) == 0) return 0;
    printf("\n************\\> Kill Bug 1.01 <//*****************\n");
    printf("Data Type: double\n");
    printf("Value of this Variable is: %lf\n", a);
    printf("\n*************\\> Result End <//*****************\n");
    return 0;
}
char ch_debug(int DEBUG, char a){
    if(ai(DEBUG) == 0) return 0;
    printf("\n************\\> Kill Bug 1.01 <//*****************\n");
    printf("Data Type: char\n");
    printf("Value of this Variable is: %c\n", a);
    printf("\n*************\\> Result End <//*****************\n");
    return 0;
}
