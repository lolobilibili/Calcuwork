#include "tab.h"
#include "calculator.h"

#include <QTabWidget>
#include <QSizePolicy>
#include <QLayout>
#include <QResizeEvent>

Tab::Tab(QWidget* parent)
    : QWidget(parent)
{
    maintab = new QTabWidget(this);
    maintab->setFixedSize(400,400);
    calpage = new Calculator(this);
    maintab->addTab(calpage,"Calculator");
}


void Tab::resizeEvent(QResizeEvent *event)
{
    maintab->setFixedSize(event->size().width(),event->size().height());
}