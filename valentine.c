 #include <stdio.h>

int main(){
    char res[20]; 
        
    printf("Will you be my valentine? ");
    scanf("%s", &res);

    if(res[0] == 'y') {
        if(res[1] == 'e') 
            if(res[0] == 's')
                printf("yay\n");
    }
    else if(res[0] == 'n') {
        if(res[1] == 'o') 
            printf("bum litterally \n");
    } 
    else {
        printf("You tweaking for real\n");
    }
    
    return 0; 
}
