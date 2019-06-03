#include "ParallelogramFigure.h"

ParallelogramFigure::ParallelogramFigure(QString* name,
                                         float firstSide,
                                         float secondSide,
                                         float sin)
    : BaseFigure (4, name)
{
    setParameters(firstSide, secondSide, sin);
};

ParallelogramFigure::~ParallelogramFigure()
{

};

float ParallelogramFigure::getArea()
{
    return  m_a1 * m_a2 * m_sin;
};

void ParallelogramFigure::setParameters(float a1,
                                        float a2,
                                        float a3,
                                        float a4)
{
    m_a1 = a1;
    m_a2 = a2;
    m_sin = a3;
};
