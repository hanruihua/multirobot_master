# !/usr/bin/env python
import message_filters
import sys
import rospy
from nav_msgs.msg import Odometry
from master_msgs.msg import global_info
from master_msgs.msg import node_frame2
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist
from gazebo_msgs.msg import ModelStates

pub_info = rospy.Publisher('/global_info', global_info, queue_size=10)
pub_model = rospy.Publisher('/turtlebot/model_states', ModelStates, queue_size=10)
num_robot = int(sys.argv[1])
seq = 0

def global_callback(*args):

    model_states = ModelStates()
    global_info_msg = global_info()

    global seq
    seq += 1

    # header
    global_info_msg.header.stamp = rospy.Time.now()
    global_info_msg.header.seq = seq
    global_info_msg.header.frame_id = "world"

    for i in range (num_robot):

        index_odom = 2 * i + 1
        index_uwb = 2 * i + 2

        # name
        model_states.name.append("agent"+str(i+1))

        # pose
        pose = Pose()
        pose.position = args[index_uwb].position     # from uwb
        pose.orientation = args[index_odom].pose.pose.orientation  # from odom
        model_states.pose.append(pose)

        # twist
        twist = args[index_odom].twist.twist
        model_states.twist.append(twist)

    global_info_msg.model_states = model_states

    pub_info.publish(global_info_msg)
    pub_model.publish(model_states)

    print("publish global information messages successfully")

def multi_turtlebot_info():
    rospy.init_node('turtlebot2msg', anonymous=True)
    rate=rospy.Rate(10)
    list_info_sub = []

    if len(sys.argv) < 2:
        rospy.logerr_once("Please input the number of the slave robot")
    else:
        for i in range(num_robot):
            topic_name_odom = "Slave0"+str(i+1)+"/odom"
            topic_name_uwb =  "Slave0"+str(i+1)+"/nlink_linktrack_nodeframe2"
            # list_info_sub.append(message_filters.Subscriber(topic_name_odom, Odometry))
            list_info_sub.append(message_filters.Subscriber(topic_name_uwb, node_frame2))

        ts_info = message_filters.ApproximateTimeSynchronizer(list_info_sub, 100, 0.5)
        ts_info.registerCallback(global_callback)
        rospy.spin()

    while not rospy.is_shutdown():
        rate.sleep()
        
if __name__=='__main__':
    try:
        multi_turtlebot_info()
    except rospy.ROSInterruptException:
        pass



