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
    setContentsMargins( 10, 10, 10, 10 );

    // Customed plot canvas
    QwtPlotCanvas* pCanvas = new QwtPlotCanvas();
    pCanvas->setBorderRadius(5);
    setCanvas(pCanvas);
    plotLayout()->setAlignCanvasToScales( true );
    setCanvasBackground( QBrush(Qt::blue) );

    // Axis options
    setAxisTitle( QwtPlot::xBottom, AXIS_X_TITLE );
    setAxisTitle( QwtPlot::yLeft, AXIS_Y_TITLE );
    setAxisScale( QwtPlot::xBottom, AXIS_X_START, AXIS_X_END );
    setAxisScale( QwtPlot::yLeft, AXIS_Y_START, AXIS_Y_END );

    // Legend
    QwtLegend* pLegend = new QwtLegend;
    pLegend->setDefaultItemMode(QwtLegendData::Checkable);
    insertLegend( pLegend, QwtPlot::RightLegend );

    // Plot grid
    QwtPlotGrid* pGrid = new QwtPlotGrid();
    pGrid->setPen(Qt::white, 4);
    pGrid->attach( this );

    // Plot curve
    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setTitle( LEGEND_TITLE );
    curve->setPen( Qt::blue, 4 );
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );
}

TCCustomedQwtPlot::~TCCustomedQwtPlot()
{

}

void TCCustomedQwtPlot::SetTimerInterval(int msec)
{

}

void TCCustomedQwtPlot::t_SetTimer()
{
    m_pTimer = new QTimer();
    m_pTimer->setInterval(10);
    m_pTimer->setTimerType(Qt::PreciseTimer);
}
