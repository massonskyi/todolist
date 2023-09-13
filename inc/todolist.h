#ifndef TODOLITS_H_
#define TODOLITS_H_

#include <vector>
#include "task.h"
#include <iostream>
#include <sstream>
class TodoList{
public:
    // Constructor
    TodoList() {}

    // Add task to the list
    void addTask(Task newTask) { tasks.push_back(newTask); }

    // Remove task from the list
    void removeTask(int taskIndex) { tasks.erase(tasks.begin() + taskIndex); }

    // Mark task as done/not done
    void markTaskAsDone(int taskIndex) { tasks[taskIndex].markAsDone(); }
    void markTaskAsNotDone(int taskIndex) { tasks[taskIndex].markAsNotDone(); }

    friend std::ostream& operator<<(std::ostream& os, const TodoList& obj) {
        if (obj.tasks.empty()) {
            os << "No tasks" << std::endl;
            return os;
        }
        int i = 1;
        for (const auto& task : obj.tasks) {
            os << i++ << ". [" << (task.isDone() ? "X" : " ") << "] "
            << task.getTitle() << " - " << task.getDescription() << std::endl;
        }
        return os;
    }
private:
    std::vector<Task> tasks;
};

#endif // TODOLITS_H_