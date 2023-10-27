#include <ros/ros.h>
#include <std_msgs/String.h>
#include<chatroom/message.h>

using namespace std;

void Callback(const chatroom::message::ConstPtr& msg) {
  ROS_INFO("%s: %s", msg->user.c_str(), msg->text.c_str());
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "user1");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("chat", 1000, Callback);
  ros::Publisher pub = nh.advertise<chatroom::message>("chat", 1000);

  chatroom::message msg;

  string user_name;
  cout<<"Enter Name: ";
  getline(cin,user_name);
  msg.user = user_name;

  ros::AsyncSpinner spinner(3);
  spinner.start();

  while (ros::ok()) {
    string input;
    getline(cin, input);
    if (input=="/exit")
      break;
    msg.text = input;
    pub.publish(msg);
  }

  return 0;
}
