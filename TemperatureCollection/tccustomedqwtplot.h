#ifndef TCCUSTOMEDQWTPLOT_H
#define TCCUSTOMEDQWTPLOT_H

#include "qwt_plot.h"

class TCCustomedPlotCurve;
class QwtPlotDirectPainter;
class QwtPlotPanner;
class QTcpSocket;
class QTimer;

class TCCustomedQwtPlot : public QwtPlot
{
public:
    TCCustomedQwtPlot(QWidget *parent = 0);
    virtual ~TCCustomedQwtPlot();

public:
    void SetTimerInterval(int msec);

protected:
    void t_SetTimer();

private:
    TCCustomedPlotCurve* m_pTcCurvePlot;
    QwtPlotDirectPainter* m_pDPainter;
    QwtPlotPanner* m_pPlotPanner;
    QTcpSocket* m_pTcpSocket;
    QTimer* m_pTimer;
};

#endif // TCCUSTOMEDQWTPLOT_H

