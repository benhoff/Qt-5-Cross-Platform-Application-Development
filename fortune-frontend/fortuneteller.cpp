#include "fortuneteller.h"
#include <QtWidgets>

FortuneTeller::FortuneTeller(QWidget *parent)
    : QDialog(parent),
      fortuneButton(new QPushButton("Get Fortune")),
      statusLabel(new QLabel())
{
    resize(200, 100);
    setWindowTitle("FortuneTeller");

    connect(fortuneButton, &QPushButton::clicked, this, &FortuneTeller::tellFortune);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(statusLabel, 2, 0, 1, 2);
    mainLayout->addWidget(fortuneButton, 3, 0, 1, 2);
}

void FortuneTeller::tellFortune()
{
    fortunes << "fortune01"
             << "fortune02"
             << "Fortune03"
             << "Fortune04";
    int fortuneIndex = QRandomGenerator::global()->bounded(0, fortunes.size());
    QString fortune = fortunes.at(fortuneIndex);
    statusLabel->setText(fortune);
}
