/*
  Created by : Pallavi
  Created on : 28-08-2018
  Description: This file creates an agv_publisher node. This is a simulator script that simulates the AGV publishings to open the door.

*/

#ifndef TESTING_MSGS_HPP
#define TESTING_MSGS_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class TestingMsgs : public rclcpp::Node
{
  public:
    TestingMsgs();
    virtual ~TestingMsgs();
    void make_test();

  private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr test_publisher_;
    std_msgs::msg::String::SharedPtr message;
};

#endif