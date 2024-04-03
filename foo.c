#include<stdint.h>
#include <stdio.h> 
int sumIt();
int main(){
    #include <stdio.h> // Include the necessary header file

    printf("%d\n", sumIt());
    printf("%d\n", sumIt());

    int b = 14;
    sizeof(b);
    printf("%d\n", b);

}
int sumIt(){
    static int sum = 0;
    sum ++;
    return sum;
}
