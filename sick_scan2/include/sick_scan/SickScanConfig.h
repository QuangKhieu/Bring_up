//#line 2 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
// 
// File autogenerated for the sick_scan package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

#ifndef __sick_scan__SICKSCANCONFIG_H__
#define __sick_scan__SICKSCANCONFIG_H__

#include <string>
namespace sick_scan
{
  class SickScanConfig {
  public:
      std::string frame_id;
      std::string imu_frame_id;
      bool imu_enable;
      bool intensity;
      bool auto_reboot;
      double min_ang;
      double max_ang;
      int skip;
      bool use_software_pll;
      bool sw_pll_only_publish;

  };
}

#endif // __SICKSCANRECONFIGURATOR_H__