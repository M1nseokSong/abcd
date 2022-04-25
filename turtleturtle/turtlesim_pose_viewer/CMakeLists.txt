cmake_minimum_required(VERSION 2.8.3)
project(turtlesim_pose_viewer)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs message_generation)

catkin_package(
  #INCLUDE_DIRS include
  LIBRARIES turtlesim_pose_viewer
  CATKIN_DEPENDS roscpp std_msgs
)

include_directories(${catkin_INCLUDE_DIRS}) 

add_executable(turtlesim_pose_viewer src/turtlesim_pose_viewer.cpp)
target_link_libraries(turtlesim_pose_viewer ${catkin_LIBRARIES})
add_dependencies(turtlesim_pose_viewer ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})