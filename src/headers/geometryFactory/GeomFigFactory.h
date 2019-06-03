#pragma once

#include "BaseFigure.h"
#include "EllipseFigure.h"
#include "ParallelogramFigure.h"
#include "RectangleFigure.h"
#include "RegularPolygonFigure.h"
#include "TrapezeFigure.h"
#include "TriangleFigure.h"

namespace rio {
class GeomFigFactory;
}

class GeomFigFactory
{

public:
    GeomFigFactory();
    virtual ~GeomFigFactory();
    BaseFigure* makeNewFigure();

private:
    int counter{0};
    typedef QHash<QString, BaseFigure*> MapFigures;
};
