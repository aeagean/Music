#include "MusicBase.h"

MusicBase::MusicBase()
{
    m_id = "";
    m_name = QString::fromUtf8("Undefined");
    m_pathName = "/";
    m_musicName = QString::fromUtf8("Undefined");
}

MusicBase::~MusicBase()
{

}

QString MusicBase::getId()
{
    return m_id;
}

void MusicBase::setId(QString id)
{
    m_id = id;
}

QString MusicBase::getName()
{
    return m_name;
}

void MusicBase::setName(QString name)
{
    m_name = name;
}

QString MusicBase::getMusicName()
{
    return m_musicName;
}

void MusicBase::setMusicName(QString musicName)
{
    m_musicName = musicName;
}

QString MusicBase::getPathName()
{
    return m_pathName;
}

void MusicBase::setPathName(QString pathName)
{
    m_pathName = pathName;
}