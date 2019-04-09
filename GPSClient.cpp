#include "GPSClient.h"
#include <iostream>

namespace GPSLib
{
GPSClient::GPSClient()
: m_gps_rec( "127.0.0.1", DEFAULT_GPSD_PORT)
{
}

bool GPSClient::Initialize()
{

  if (m_gps_rec.stream(WATCH_ENABLE|WATCH_JSON) == NULL) 
  {
    std::cerr << "No GPSD running.\n";
    return false;
  }
  return true;
}

void GPSClient::Run()
{
  for (;;) {
    struct gps_data_t* newdata;

    if (!m_gps_rec.waiting(50000000))
      continue;

    if ((newdata = m_gps_rec.read()) == NULL) {
      std::cerr << "Read error.\n";
      return;
    } else {
//            PROCESS(newdata);
    }
  }
}

void GPSClient::Shutdown()
{
}


GPSClient::~GPSClient()
{
}

}


