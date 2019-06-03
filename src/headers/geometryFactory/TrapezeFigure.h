#pragma once

#include "BaseFigure.h"

namespace rio {
class TrapezeFigure;
}

class TrapezeFigure : public BaseFigure
{

public:
    TrapezeFigure(QString* name,
                  float firstParallelSide,
                  float secondParallelSide,
                  float firstLateralSide,
                  float secondLateralSide);
    ~TrapezeFigure() override final;
    float getArea() override final;
    void setParameters(float a1,
                       float a2,
                       float a3,
                       float a4) override final;
    virtual QVariant* parameters() override final;
    void setName(QString* name);

private:
    float m_a1;
    float m_a2;
    float m_a3;
    float m_a4;
};
