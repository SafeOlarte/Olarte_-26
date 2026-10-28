#include <stdio.h>
#include <stdlib.h>
#include <function.h>

int main() {
    int n, i;
    int *ptr;
    char choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

   
   
   
    ptr = (int*)calloc(n, sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter values:\n");
    for (i = 0; i < n; i++) { 
        scanf("%d", ptr + i);
    }

    printf("Output:\n");
    displayData(ptr, n);

    printf("Do you want to add more elements? (Y/n): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') { 
        int extra;
        
        
        printf("How many elements?: ");
        scanf("%d", &extra); 

        int *temp = realloc(ptr, (n + extra) * sizeof(int)); 
        if (temp == NULL) {
            
            
            printf("Memory reallocation failed!\n");
        } else {
            ptr = temp;
           
           
            printf("Enter additional values:\n");
            for (i = n; i < n + extra; i++) { 
                scanf("%d", ptr + i);
            }
           
            p = extra; 
            displayData(ptr, n);
        }
    }

    free(ptr);
    return 0;
}
