#ifndef TCCUSTOMEDQWTPLOT_H
#define TCCUSTOMEDQWTPLOT_H

#include "qwt_plot.h"
#include "systemconfig.h"

class TCCustomedPlotCurve;
class QTcpSocket;

class TCCustomedQwtPlot : public QwtPlot
{
public:
    TCCustomedQwtPlot(QWidget *parent = 0);
    virtual ~TCCustomedQwtPlot();

private:
    TCCustomedPlotCurve* m_pTcCurvePlot;
    QTcpSocket* m_pTcpSocket;
};

#endif // TCCUSTOMEDQWTPLOT_H

