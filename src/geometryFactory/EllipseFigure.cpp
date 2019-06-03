#include "EllipseFigure.h"
#include "ostream"
#include "constans.h"

EllipseFigure::EllipseFigure(QString* name,
                             float firstSemiAxis,
                             float secondSemiAxis)
    : BaseFigure (0, name)
{
    setParameters(firstSemiAxis,
                  secondSemiAxis);
};

EllipseFigure::~EllipseFigure()
{

};

float EllipseFigure::getArea()
{
    return  rio::pi * m_a1 * m_a2;
};

void EllipseFigure::setParameters(float a1,
                                  float a2,
                                  float a3,
                                  float a4)
{
    m_a1 = a1;
    m_a2 = a2;
};
