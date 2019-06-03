#include "TrapezeFigure.h"
#include "math.h"

TrapezeFigure::TrapezeFigure(QString* name,
                             float firstParallelSide,
                             float secondParallelSide,
                             float firstLateralSide,
                             float secondLateralSide)
    : BaseFigure (4, name)
{
    setParameters(firstParallelSide,
                  secondParallelSide,
                  firstLateralSide,
                  secondLateralSide);
};

TrapezeFigure::~TrapezeFigure()
{

};

float TrapezeFigure::getArea()
{
    float s = (m_a1 + m_a2 + m_a3 + m_a4) / 2;
    return  (m_a1 + m_a2)/(m_a2 - m_a1)*
            std::sqrt((s-m_a1)*(s-m_a2)*(s-m_a2-m_a3)*(s-m_a2-m_a4));
};

void TrapezeFigure::setParameters(float a1,
                                  float a2,
                                  float a3,
                                  float a4)
{
    m_a1 = std::min(a1, a2);
    m_a2 = std::max(a1, a2);
    m_a3 = a3;
    m_a4 = a4;
};
