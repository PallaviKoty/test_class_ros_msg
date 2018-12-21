#include "testing_msgs/Test_msgs.hpp"

using namespace std;

TestingMsgs::TestingMsgs() : Node("testing_msgs_node")
{
    RCLCPP_INFO(this->get_logger(), "Staring the node");
    test_publisher_ = this->create_publisher<std_msgs::msg::String>("/test_msg_topic");
    make_test();
}

TestingMsgs::~TestingMsgs()
{
}

void TestingMsgs::make_test()
{
    RCLCPP_INFO(this->get_logger(), "Assigning variable to ros msg");
    message->data = "AAA";
    RCLCPP_INFO(this->get_logger(), "Assigned variable to ros msg");
    test_publisher_->publish(message);
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TestingMsgs>());
  rclcpp::shutdown();
  return 0;
}

 
  