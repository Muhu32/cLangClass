#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";
    int l = strlen(s);
    int cnt = 0;

    char *s2 = strtok(s, " ,.!?;");

    while(s2 != NULL){
        if(strcmp(s2, "my") == 0 || strcmp(s2, "My") == 0 || strcmp(s2, "MY") == 0 || strcmp(s2, "mY") == 0) 
            cnt++;
        s2 = strtok(NULL, " ,.!?;");
    }

    printf("Length: %d\n", l);
    printf("Count: %d\n", cnt);

    return 0;
}
