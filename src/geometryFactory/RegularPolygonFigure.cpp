#include "RegularPolygonFigure.h"
#include "constans.h"
#include "math.h"

RegularPolygonFigure::RegularPolygonFigure(QString* name,
                                           int numAngle,
                                           float lengthSides)
    : BaseFigure (numAngle, name)
{
    setParameters(lengthSides);
};

RegularPolygonFigure::~RegularPolygonFigure()
{

};

float RegularPolygonFigure::getArea()
{
    return  nAngles * m_a1 * m_a1 / 4 / std::tan(rio::pi/nAngles);
};

void RegularPolygonFigure::setParameters(float a1,
                                         float a2,
                                         float a3,
                                         float a4)
{
    m_a1 = a1;
};
