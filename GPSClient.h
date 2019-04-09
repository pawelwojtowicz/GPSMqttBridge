#pragma once
#include <libgpsmm>

namespace GPSLib
{
class GPSClient
{
public:
  GPSClient();
  virtual ~GPSClient();

  bool Initialize();
  void Shutdown();

private:
  gpsmm m_gps_rec;
};
}
