#include "../inc/includes.h"


int main() {
    TodoList todoList;

    // Adding tasks
    todoList.addTask(Task("Purchases","Buy groceries"));
    todoList.addTask(Task("Cleaning","Clean the house"));
    todoList.addTask(Task("Study","Study for the exam"));

    // Interacting with tasks
    todoList.markTaskAsDone(0);
    std::cout<<todoList<<std::endl;
    todoList.removeTask(1);
    todoList.markTaskAsNotDone(0);
    std::cout<<todoList<<std::endl;
    return 0;
}