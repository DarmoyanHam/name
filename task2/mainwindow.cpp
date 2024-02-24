#include "mainwindow.h"
#include "ui_mainwindow.h"

NamePopup::NamePopup() {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLineEdit *nameInput = new QLineEdit(this);
    layout->addWidget(nameInput);

    QPushButton *showButton = new QPushButton("Show Name", this);
    layout->addWidget(showButton);

    connect(showButton, &QPushButton::clicked, this, &NamePopup::showNamePopup);
}

void NamePopup::showNamePopup() {
    QLineEdit *nameInput = findChild<QLineEdit*>(); // Assuming there is only one QLineEdit in the widget
    QString enteredName = nameInput->text();

    QMessageBox::information(this, "Entered Name", "Entered Name: " + enteredName);
}

