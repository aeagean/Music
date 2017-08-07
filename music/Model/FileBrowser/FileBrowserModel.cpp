#include "FileBrowserModel.h"

FileBrowserModel::FileBrowserModel(QObject *parent):
    BaseItemModel(parent)
{
    m_pathName = "";
    m_isSelected = false;
}

QString FileBrowserModel::getPathName()
{
    return m_pathName;
}

void FileBrowserModel::setPathName(QString pathName)
{
    m_pathName = pathName;
    emit statusChanged();
}

bool FileBrowserModel::getIsSelected()
{
    return m_isSelected;
}

void FileBrowserModel::setIsSelected(bool status)
{
    m_isSelected = status;
    emit statusChanged();
}

void FileBrowserModel::operator=(const FileBrowserModel &model)
{
    this->m_pathName = model.m_pathName;
    this->m_isSelected = model.m_isSelected;
    emit statusChanged();
}
