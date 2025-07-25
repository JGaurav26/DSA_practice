// problem sttement: calculate the percentage of student marks

#include<stdio.h>

float chkPer(float mobt, float tmarks)
{
    float per = ((mobt / tmarks)*100);
    return per;
}

int main()
{
    auto float obtmarks = 0.0f;
    auto float totalmarks = 0.0f;
    auto float permarks = 0.0f;

    printf("Enter Marks obtained :: \n");
    scanf("%f", &obtmarks);

    printf("Enter Total Marks :: \n");
    scanf("%f", &totalmarks);

    permarks = chkPer(obtmarks, totalmarks);
    printf("Percentage scored :: %0.2f \n", permarks);
    return 0;
}