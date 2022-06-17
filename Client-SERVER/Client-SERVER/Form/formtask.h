#ifndef FORMTASK_H
#define FORMTASK_H
#include "functionsforclient351.h"
#include <QWidget>

namespace Ui {
class FormTask;
}

class FormTask : public QWidget
{
    Q_OBJECT

public:
    explicit FormTask(QWidget *parent = nullptr);
    ~FormTask();
    void set_task_number(int n);

private slots:
    void on_pushButton_Send_clicked();

private:
    Ui::FormTask *ui;
    int task_number;
    QString input_for_task;

};

#endif // FORMTASK_H
