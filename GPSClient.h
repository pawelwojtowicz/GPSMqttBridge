#pragma once
#include <libgpsmm.h>

namespace GPSLib
{
class GPSClient
{
public:
  GPSClient();
  virtual ~GPSClient();

  bool Initialize();

  void Run();

  void Shutdown();

private:
  gpsmm m_gps_rec;
};
}
