#include "textviewer.h"

#include <QGridLayout>
#include <QFileDialog>
#include <QTextStream>
#include <QStringList>
#include <QTextEdit>

TextViewer::TextViewer(QWidget *parent): QWidget(parent){

    QGridLayout *base = new QGridLayout();
    setLayout(base);

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open first file to compare..."),"", tr("Text files (*.txt);"));
    QString fileName2 = QFileDialog::getOpenFileName(this, tr("Open first file to compare..."),"", tr("Text files (*.txt);"));

    this->copyTxt(fileName,true);
   // copyTxt(fileName2,true);

    QTextEdit *f1= new QTextEdit();
    QTextEdit *f2= new QTextEdit();

    if(list1.length()!= list2.length()) list1.insert(0,"CIAOOOOOO");

    for(char i=0;i<list1.length();++i){

        f1->append(list1.value(i));
        f2->append(list1.value(i));
    }

    base->addWidget(f1,0,0);
    base->addWidget(f2,0,1);
}

void copyTxt(QString fileName, bool whichFile){

    QFile inputFile(fileName);

    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          TextViewer::list1.append(in.readLine());

       }
       inputFile.close();
    }

}

/*TextViewer::~TextViewer()
{

}*/

