﻿#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <QStringList>
#include <QString>

#include "readfilepath.h"

using namespace std;

readFilePath::readFilePath()
{

}

readFilePath::~readFilePath()
{

}

void readFilePath::readFile(QVector<QString> &path , QString filePathName, QString fileType)
{
    QDir dir(filePathName);
    dir.setFilter(QDir::Files|QDir::Hidden|QDir::NoSymLinks);
    dir.setSorting(QDir::Name);
    QStringList ObsPathName;
    ObsPathName << fileType;  //"*.*o"
    QFileInfoList ObsList = dir.entryInfoList(ObsPathName,QDir::AllEntries,QDir::DirsFirst);

    for( int i=0; i<ObsList.size(); i++)
    {
        QFileInfo fileInfo = ObsList[i];
        path.push_back(fileInfo.filePath());
    }

}

