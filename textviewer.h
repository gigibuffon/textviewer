#ifndef TEXTVIEWER_H
#define TEXTVIEWER_H

#include <QWidget>
#include <QStringList>


class TextViewer : public QWidget
{
    Q_OBJECT



public:
    TextViewer(QWidget *parent = 0);
   // ~TextViewer();

    QStringList list1;
    QStringList list2;

    void copyTxt(QString fileName, bool whichFile);


};

#endif // TEXTVIEWER_H
