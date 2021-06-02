add_library(CountScrabbleScore SHARED
  src/countScore.cpp
)

target_include_directories (CountScrabbleScore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)

add_subdirectory(ut)
