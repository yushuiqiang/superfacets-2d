/*
 *
 *   2014
 *   Author:       Giulia Picciau - DIBRIS, Università degli studi di Genova
 *   Supervisors:  Leila De Floriani - DIBRIS, Università degli studi di Genova
 *                 Patricio Simari - Department of Electrical Engineering and Computer Science, The Catholic University of America
 *
 *   Title:          Fast and scalable mesh superfacets
 *   Submission to Pacific Graphics 2014
 *
 *
 **/
#ifndef DIALOGS_H
#define DIALOGS_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QImage>

/**
 * @brief The dialogS class opens a popup dialog to save the current framebuffer to an image
 */
class dialogS : public QWidget
{
    Q_OBJECT
public:
    explicit dialogS(QWidget *parent = 0);
    QString nameI;
    QImage outIm;

    //returns the chosen name for the screenshot
    inline QString getNameI(){
        return this->nameI;
    }
    
signals:
    
public slots:
    //name chosen
    void nameGiven();
    //action when the save button is clicked (saves the image)
    void buttonSaveClicked();

private:
    QLabel *nameToGive;
    QTextEdit *imgName;
    QPushButton *bSave;
    
};

#endif // DIALOGS_H
