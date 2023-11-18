MAX_TASKS = 100

class Task:
    def __init__(self, description):
        self.description = description
        self.isCompleted = 0

tasks = []
taskCount = 0

def addTask(description):
    global taskCount
    if taskCount < MAX_TASKS:
        tasks.append(Task(description))
        taskCount += 1
        print("Task added successfully.")
    else:
        print("Task limit reached. Cannot add more tasks.")

def markTaskCompleted(index):
    if 0 <= index < taskCount:
        tasks[index].isCompleted = 1
        print("Task marked as completed.")
    else:
        print("Invalid task index.")

def displayTasks():
    if taskCount > 0:
        print("Tasks:")
        for i, task in enumerate(tasks):
            print(f"{i + 1}. {task.description} - {'Completed' if task.isCompleted else 'Pending'}")
    else:
        print("No tasks available.")

def main():
    global taskCount
    choice = 0

    while choice != 4:
        print("\n\t\t\t\t\t\t-- To-Do List Management System --\t\t\t\t\t\t")
        print("1. Add Task")
        print("2. Mark Task as Completed")
        print("3. Display Tasks")
        print("4. Exit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            description = input("Enter task description: ")
            addTask(description)
        elif choice == 2:
            if taskCount > 0:
                index = int(input("Enter the index of the task to mark it as completed: ")) - 1
                markTaskCompleted(index)
            else:
                print("No tasks available to mark as completed.")
        elif choice == 3:
            displayTasks()
        elif choice == 4:
            print("Exiting the program.")
        else:
            print("Invalid choice. Please enter a valid option.")

if __name__ == "__main__":
    main()