#ifndef FORTUNETELLER_H
#define FORTUNETELLER_H

#include <QDialog>
QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
QT_END_NAMESPACE

class FortuneTeller : public QDialog
{
    Q_OBJECT

public:
    FortuneTeller(QWidget *parent = 0);

private slots:
    void tellFortune();

private:
    QPushButton *fortuneButton;
    QStringList fortunes;
    QLabel *statusLabel;
};

#endif // FORTUNETELLER_H
