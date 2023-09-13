#ifndef TASK_H_
#define TASK_H_

#include <string>


class Task{
public:
    // Constructor
    Task(std::string _title,std::string _description) : title(_title),description(_description), done(false) {}

    // Getters
    std::string getDescription() const { return description; }
    std::string getTitle()const { return title; }
    bool isDone() const { return done; }

    // Setters
    void setDescription(std::string newDescription) { description = newDescription; }
    void setTitle(std::string newTitle) {title = newTitle;}
    void markAsDone() { done = true; }
    void markAsNotDone() { done = false; }
private:
    std::string title;
    std::string description;
    bool done;
};

#endif // TASK_H_