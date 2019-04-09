#include "GPSClient.h"

int main(int argc, char** argv )
{
  GPSLib::GPSClient gpsClient;

  gpsClient.Initialize();
  return 0;
}
