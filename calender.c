# include<stdio.h>
# include<conio.h>
//calendar 2024
int main() {
    int month;
    char day;
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
                    printf("In month of January Monday is on date: 1,8,15,22 and 29");
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