## Description of Task
Using ROS making a chatroom for users where they can view and send messages that all users can see. The chat room has 3 users/nodes that connect to the same.

Making a package called "chatroom" for the entire scenario along with launch files and custom messages.

## Approach undertaken

* Creating 3 nodes which act as both a publishes and subscribes to a common topic.

* Each node uses AsyncSpinner which is a threaded spinner. It means that each callback will get its own thread so it can process multiple callbacks simultaneously and will not cause any delay.

* Creating a custom message which has two elements, the username and the text message.

* Creating a launch file to run the 3 nodes simultaneously in new terminals.

## ROS Topics published

![rostopic](https://user-images.githubusercontent.com/90916099/216265907-8c781506-0624-47cf-9ca3-5624830bd678.png)

## ROS Messages used

![rosmsg](https://user-images.githubusercontent.com/90916099/216265963-537d4120-1391-464a-8dbd-8daf18a731ae.png)

## RQT Graph

![rqtgraph](https://user-images.githubusercontent.com/90916099/216266033-7114a3ec-8baa-4b5e-85e5-450507b3f562.png)

## Working Demo

https://youtu.be/aXdhI7mMYPU
