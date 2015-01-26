#include "tccustomedqwtplot.h"
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_legend.h>

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

    QwtLegend *legend = new QwtLegend;
    insertLegend( new QwtLegend() );

    QwtPlotGrid *grid = new QwtPlotGrid();
    grid->attach( this );

    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setTitle( LEGEND_TITLE );
    curve->setPen( Qt::blue, 4 ),
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );

    QwtSymbol *symbol = new QwtSymbol( QwtSymbol::Ellipse,
        QBrush( Qt::yellow ), QPen( Qt::red, 2 ), QSize( 8, 8 ) );
    curve->setSymbol( symbol );

    QPolygonF points;
    points << QPointF( 0.0, 4.4 ) << QPointF( 1.0, 3.0 )
        << QPointF( 2.0, 4.5 ) << QPointF( 3.0, 6.8 )
        << QPointF( 4.0, 7.9 ) << QPointF( 5.0, 7.1 );
    curve->setSamples( points );

    curve->attach(this);
}

TCCustomedQwtPlot::~TCCustomedQwtPlot()
{

}
