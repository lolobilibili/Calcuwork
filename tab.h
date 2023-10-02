#ifndef TAB_H
#define TAB_H

#endif // TAB_H
#include "calculator.h"
#include "notepad.h"
#include "todolist.h"
#include <QTabWidget>
#include "potato.h"
class Tab : public QWidget{

    Q_OBJECT
public:
    Tab(QWidget *parent = nullptr);


private:
    QTabWidget* maintab;
    Calculator* calpage;
    Notepad* textpage;
    ToDoList* todopage;
    Potato* potatoclock;
    // QWidget interface
protected:
    virtual void resizeEvent(QResizeEvent *event) override;
};