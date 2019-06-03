#pragma once

#include "BaseFigure.h"

namespace rio {
class TriangleFigure;
}

class TriangleFigure : public BaseFigure
{

public:
    TriangleFigure(QString* name,
                   float firstSide,
                   float secondSide,
                   float thirdSide);
    ~TriangleFigure() override final;
    float getArea() override final;
    void setParameters(float a1,
                       float a2,
                       float a3,
                       float a4 = 0.0) override final;
    virtual QVariant* parameters() override final;
    void setName(QString* name);

private:
    float m_a1;
    float m_a2;
    float m_a3;
};
