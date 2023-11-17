#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

struct Task{
    char description[100];
    int isCompleted;
};

struct Task tasks[MAX_TASKS];
int taskCount = 0;

void addTask (const char *description) {
    if (taskCount < MAX_TASKS) {
        strcpy(tasks[taskCount].description, description);
        tasks[taskCount].isCompleted = 0;
        taskCount++;
        printf("Task added successfully.\n");
    } else{
        printf("Task limit reached. Cannot add more tasks.\n");
    }
}

void markTaskCompleted(int index) {
    if (index >= 0 && index < taskCount) {
        tasks[index].isCompleted = 1;
        printf("Task marked as completed.\n");
    } else {
        printf("Invalid task index.\n");
    }
}

void displayTasks() {
    if (taskCount > 0) {
        printf("Tasks:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s - %s\n", i + 1, tasks[i].description, (tasks[i].isCompleted ? "Completed" : "Pending"));
        }
    } else {
        printf("No tasks available.\n");
    }
}

int main() {
    int choice;
    char description[100];

    do {
        printf("\n\t\t\t\t\t-- To-Do List Management System --\t\t\t\t\t\n");
        printf("1. Add Task\n");
        printf("2. Mark Task as Completed\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task description:");
                scanf(" %[^\n]s", description);
                addTask(description);
                break;
            case 2:
                if (taskCount > 0) {
                    printf("Enter the index of the task to mark it as completed: ");
                    int index;
                    scanf("%d", &index);
                    markTaskCompleted(index - 1);
                } else {
                    printf("No tasks available to mark as completed.\n");
                }
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}