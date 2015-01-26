#ifndef TCCUSTOMEDCURVEPLOT_H
#define TCCUSTOMEDCURVEPLOT_H

#include <qwt_plot_curve.h>

class TCCustomedPlotCurve : public QwtPlotCurve
{
    explicit TCCustomedPlotCurve(const QwtText &title);
    virtual ~TCCustomedPlotCurve();
};

#endif // TCCUSTOMEDCURVEPLOT_H

