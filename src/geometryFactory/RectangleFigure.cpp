#include "RectangleFigure.h"

RectangleFigure::RectangleFigure(QString* name,
                                 float firstSide,
                                 float secondSide)
    : BaseFigure (4, name)
{
    setParameters(firstSide, secondSide);
};

RectangleFigure::~RectangleFigure()
{

};

float RectangleFigure::getArea()
{
    return  m_a1 * m_a2;
};

void RectangleFigure::setParameters(float a1,
                                    float a2,
                                    float a3,
                                    float a4)
{
    m_a1 = a1;
    m_a2 = a2;
};
