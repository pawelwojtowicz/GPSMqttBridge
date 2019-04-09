#include "GPSClient.h"
namespace GPSLib
{
GPSClient::GPSClient()
: m_gps_rec( )
{
}

bool GPSClient::Initialize()
{

  if (m_gps_rec.stream(WATCH_ENABLE|WATCH_JSON) == NULL) 
  {
    cerr << "No GPSD running.\n";
    return false;
  }
  return true;
}

void GPSClient::Shutdown()
{
}


GPSClient::~GPSClient()
{
}

}


