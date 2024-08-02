#include <stdio.h>

int main() {

int size, i, j, nstars, nspaces;

        printf("Enter size: ");
        scanf("%d",&size);

        for(nstars = 1; nstars <= size; nstars++) {
                for(nspaces = nstars; nspaces < size; nspaces++){
                        printf(" ");
                }

                for(nspaces = 1; nspaces <= nstars; nspaces++) {
                        printf("*");
                }

                printf("\n");
        }

return 0;
}

