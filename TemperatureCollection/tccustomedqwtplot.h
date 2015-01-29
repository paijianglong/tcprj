#ifndef TCCUSTOMEDQWTPLOT_H
#define TCCUSTOMEDQWTPLOT_H

#include "qwt_plot.h"

class TCCustomedPlotCurve;
class QwtPlotDirectPainter;
class QwtPlotPanner;
class QwtInterval;
class QTcpSocket;
class QTimer;

class TCCustomedQwtPlot : public QwtPlot
{
public:
    TCCustomedQwtPlot( QWidget *parent = 0 );
    virtual ~TCCustomedQwtPlot();

public:
    void SetTimerInterval( int msec );

protected:
    virtual void t_SetTimer();

protected:
    virtual void resizeEvent(QResizeEvent *event );

private:
    TCCustomedPlotCurve* m_pTcCurvePlot;
    QwtPlotDirectPainter* m_pDPainter;
    QwtPlotPanner* m_pPlotPanner;
    QwtInterval* m_pInterval;
    QTcpSocket* m_pTcpSocket;
    QTimer* m_pTimer;

private:
    int m_Interval;
};

#endif // TCCUSTOMEDQWTPLOT_H

