#include "BaseFigure.h"

BaseFigure::BaseFigure(int numAngles, QString* name)
    : nAngles{numAngles}, nameFigure{name} // TODO is correct?
{

}

BaseFigure::~BaseFigure()
{
    delete nameFigure;
    nameFigure = nullptr;
}

void BaseFigure::setName(QString* name)
{
    delete nameFigure;                // TODO is correct?
    nameFigure = new QString(*name);
}
