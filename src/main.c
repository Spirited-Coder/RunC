#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

#define MAX_PROGRAMS 100

// Function to list .c files and their corresponding executable names
void list_programs(char programs[][MAX_PROGRAMS], int *count) {
    struct dirent *entry;
    DIR *dp = opendir("./src");  // Open the source directory

    if (dp == NULL) {
        perror("opendir");
        exit(1);
    }

    // Loop through all files in the directory
    while ((entry = readdir(dp))) {
        // Only process .c files
        if (strstr(entry->d_name, ".c") != NULL) {
            // Remove the .c extension and store the program name
            strncpy(programs[*count], entry->d_name, MAX_PROGRAMS);
            programs[*count][strlen(entry->d_name) - 2] = '\0';  // Remove the ".c"
            (*count)++;
        }
    }

    closedir(dp);
}

// Function to execute the program
int execute_program(const char *program) {
    char command[MAX_PROGRAMS + 10];
    snprintf(command, sizeof(command), "./bin/%s", program);
    return system(command);
}

int main() {
    char programs[MAX_PROGRAMS][MAX_PROGRAMS];
    int count = 0;

    // List all programs
    list_programs(programs, &count);

    if (count == 0) {
        printf("No programs found in the source directory.\n");
        return 1;
    }

    // Display the list of programs to the user
    printf("Choose a program to execute:\n");
    for (int i = 0; i < count; i++) {
        printf("%d: %s\n", i + 1, programs[i]);
    }
    printf("Enter the number corresponding to the program (0 to Exit): ");
    
    int choice;
    if (scanf("%d", &choice) != 1 || choice < 0 || choice > count) {
        printf("Invalid input\n");
        return 1;
    }

    // Exit if the user chooses 0
    if (choice == 0) {
        exit(0);
    }

    // Execute the chosen program
    if (execute_program(programs[choice - 1]) != 0) {
        printf("Error executing %s\n", programs[choice - 1]);
        return 1;
    }

    return 0;
}

