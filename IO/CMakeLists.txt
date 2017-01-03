GET_SOURCE_FILES(SOURCES)

# Create the library
add_library(IO ${SOURCES})

target_link_libraries( IO )
