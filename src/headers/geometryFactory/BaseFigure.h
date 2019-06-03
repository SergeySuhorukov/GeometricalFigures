#pragma once

#include <QString>
#include <QVariant>

namespace rio {
class BaseFigure;
}

class BaseFigure
{

public:
    BaseFigure(int numAngles, QString* name);
    virtual ~BaseFigure();
    virtual float getArea() = 0;
    virtual void setParameters(float a,
                               float b,
                               float c,
                               float d) = 0;
    virtual QVariant* parameters() = 0;
    void setName(QString* name);

protected:
    int nAngles;
    QString* nameFigure;
};
