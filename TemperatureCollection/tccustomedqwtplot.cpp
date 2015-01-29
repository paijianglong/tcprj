#include "tccustomedqwtplot.h"
#include "qwt_plot_panner.h"
#include "qwt_plot_directpainter.h"
#include "systemconfig.h"
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_legend.h>
#include <QTimer>

TCCustomedQwtPlot::TCCustomedQwtPlot(QWidget *parent) : QwtPlot(parent)
{
    // Plot title
    setTitle( CURVE_TITLE );

    // Disable replot for performance
    setAutoReplot( false );

    // Plot margin
    //setContentsMargins( 10, 10, 100, 100 );

    // Customed plot canvas
    QwtPlotCanvas* pCanvas = new QwtPlotCanvas();
    pCanvas->setBorderRadius(5);
    setCanvas(pCanvas);
    plotLayout()->setAlignCanvasToScales( true );
    setCanvasBackground( QBrush(Qt::blue) );

    // Interval
    m_pInterval = new QwtInterval(AXIS_X_START, AXIS_X_END);

    // Axis options
    setAxisTitle( QwtPlot::xBottom, AXIS_X_TITLE );
    setAxisTitle( QwtPlot::yLeft, AXIS_Y_TITLE );
    setAxisScale( QwtPlot::xBottom, m_pInterval->minValue(), m_pInterval->maxValue() );
    setAxisScale( QwtPlot::yLeft, AXIS_Y_START, AXIS_Y_END );

    // Legend
    QwtLegend* pLegend = new QwtLegend;
    pLegend->setDefaultItemMode( QwtLegendData::Checkable );
    insertLegend( pLegend, QwtPlot::RightLegend );

    // Plot grid
    QwtPlotGrid* pGrid = new QwtPlotGrid();
    pGrid->setPen( Qt::gray, 0.0, Qt::DotLine );
    pGrid->enableX( true );
    pGrid->enableXMin( true );
    pGrid->enableY( true );
    pGrid->enableYMin( false );
    pGrid->attach( this );

    // Plot curve
    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setTitle( LEGEND_TITLE );
    curve->setPen( Qt::blue, 4 );
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );
}

TCCustomedQwtPlot::~TCCustomedQwtPlot()
{
    delete m_pTimer;
    delete m_pInterval;
}

void TCCustomedQwtPlot::SetTimerInterval(int msec)
{
    m_Interval = msec;
}

void TCCustomedQwtPlot::t_SetTimer()
{
    m_pTimer = new QTimer();
    // interval can be changed from UI
    m_pTimer->setInterval(m_Interval);
    m_pTimer->setTimerType(Qt::PreciseTimer);
}

void TCCustomedQwtPlot::resizeEvent(QResizeEvent *event)
{
    QwtPlot::resizeEvent( event );
}
