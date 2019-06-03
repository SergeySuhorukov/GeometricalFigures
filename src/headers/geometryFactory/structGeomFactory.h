#pragma once

#include "BaseFigure.h"
#include "EllipseFigure.h"
#include "ParallelogramFigure.h"
#include "RectangleFigure.h"
#include "RegularPolygonFigure.h"
#include "TrapezeFigure.h"
#include "TriangleFigure.h"

namespace rio {

typedef QMap<QString, BaseFigure*> mapFigure;

const mapFigure mapFactory;

mapFactory["Ellipse"] =

} // rio
