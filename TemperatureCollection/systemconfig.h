#ifndef SYSTEMCONFIG_H
#define SYSTEMCONFIG_H

#define H_MARGIN_RATIO (0.15)
#define V_MARGIN_RATIO (0.10)

#define PLOT_H_MARGIN_RATIO (0.15)
#define PLOT_V_MARGIN_RATIO (0.10)
#define CURVE_TITLE "温度实时采集系统"
#define LEGEND_TITLE "当前温度"
#define AXIS_X_TITLE "温度(℃)"
#define AXIS_Y_TITLE "时间(s)"
#define AXIS_X_START 0
#define AXIS_X_END 1800
#define AXIS_Y_START 0
#define AXIS_Y_END 40

//?Qt5.4 may have bugs when excute below code, check later (2015-01-25 21:49)
//class SystemConfig
//{
//public:
//    static const float UIDisplayHorizonMarginRatio;
//    static const float UIDisplayVerticalMarginRatio;
//};

//const float SystemConfig::UIDisplayHorizonMarginRatio = 0.15f;
//const float SystemConfig::UIDisplayVerticalMarginRatio = 0.10f;

#endif // SYSTEMCONFIG_H
