project( GPSClient )

SET( OUTPUT_NAME GPSClient )

add_library( ${OUTPUT_NAME} SHARED
GPSClient.cpp
)
target_link_libraries( ${OUTPUT_NAME} gps)

add_executable( gpsClient main.cpp)
target_link_libraries( gpsClient GPSClient )
