#include "tccustomedcurveplot.h"

TCCustomedPlotCurve::TCCustomedPlotCurve(const QwtText &title) : QwtPlotCurve(title)
{
    setPen(Qt::blue, 2);
    setRenderHint(QwtPlotItem::RenderAntialiased);
}

TCCustomedPlotCurve::~TCCustomedPlotCurve()
{

}
