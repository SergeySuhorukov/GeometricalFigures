#pragma once

#include "BaseFigure.h"

namespace rio {
class RectangleFigure;
}

class RectangleFigure : public BaseFigure
{

public:
    RectangleFigure(QString* name,
                        float firstSide,
                        float secondSide);
    ~RectangleFigure() override final;
    float getArea() override final;
    void setParameters(float a1,
                       float a2,
                       float a3 = 0.0,
                       float a4 = 0.0) override final;
    virtual QVariant* parameters() override final;
    void setName(QString* name);

private:
    float m_a1;
    float m_a2;
};
