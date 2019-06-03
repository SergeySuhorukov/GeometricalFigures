#include "TriangleFigure.h"
#include "math.h"

TriangleFigure::TriangleFigure(QString* name,
                               float firstSide,
                               float secondSide,
                               float thirdSide)
    : BaseFigure (3, name)
{
    setParameters(firstSide,
                  secondSide,
                  thirdSide);
};

TriangleFigure::~TriangleFigure()
{

};

float TriangleFigure::getArea()
{
    float s = (m_a1 + m_a2 + m_a3) / 2;
    return  std::sqrt(s*(s-m_a1)*(s-m_a2)*(s-m_a3));
};

void TriangleFigure::setParameters(float a1,
                                  float a2,
                                  float a3,
                                  float a4)
{
    m_a1 = a1;
    m_a2 = a2;
    m_a3 = a3;
};
