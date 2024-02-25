# include<stdio.h>
# include<conio.h>
//calendar 2024
int main() {
    int month;
    char day;
    printf("Hello World!!  This my first program. In this program you can get dates on which the day will come.\n");
    printf("Enter the Number of Month(1-12) : ");
    scanf("%d", &month);

    switch (month)
    {
    case  1 :
            printf("Enter the charecter as per below :\n");
            printf("m-monday\n");
            printf("t-tuesday\n");
            printf("w-wednesday\n");
            printf("T-thursday\n");
            printf("f-friday\n");
            printf("s-saturday\n");
            printf("S-sunday\n");
            scanf("%s", &day);

            switch (day){
                case 'm' : 
                    printf("In month of January Monday is on dates: 1,8,15,22 and 29");
                    break;
                case 't' :
                    printf("In month of January Tuesday is on dates: 2,9,16,23 and 30");
                    break;
                case 'w' :
                    printf("In month of January Wednesday is on dates: 3,10,17,24 and 31");
                    break;
                case 'T' :
                    printf("In month of January Thursday is on dates: 4,11,18 and 25");
                    break;
                case 'f' :
                    printf("In month of January Friday is on dates: 5,12,19 and 26");
                    break;
                case 's' :
                    printf("In month of January Saturday is on dates: 6,13,20 and 27");
                    break;
                case 'S' :
                    printf("In month of January Sunday is on dates: 7,14,21 and 28");
                    break;
                default:
                    printf("invalid");
            }
        break;
    
    default:
        printf("invalid");
        break;
    
    }
    return 0;
}