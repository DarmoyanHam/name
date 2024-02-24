#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

class NamePopup : public QWidget {
    Q_OBJECT

public:
    NamePopup();

public slots:
    void showNamePopup();
};
