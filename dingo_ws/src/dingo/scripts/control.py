#!/usr/bin/env python
# license removed for brevity
import rospy
import numpy as np
from dingo_control.msg import ConCir
from sensor_msgs.msg import LaserScan

control_arr = [1,1,0,0]
#old_control_arr = [0,0,0,0]

def talker():
    pub = rospy.Publisher('control_circuit', ConCir, queue_size=10)
    rospy.init_node('control', anonymous=False)
    rate = rospy.Rate(1) # 10hz
    #old_control_arr = [0,0,0,0]
    while not rospy.is_shutdown():
        control_string = ''.join(str(x) for x in control_arr)
        #if control_arr != old_control_arr:
        #    pub.publish(control_string)
        pub.publish(control_string)
        #old_control_arr = control_arr
        rate.sleep()
        
def logic(LaserScan):
    front_range = LaserScan.ranges[0]
    back_range = LaserScan.ranges[600]
    left_range = LaserScan.ranges[300]
    right_range = LaserScan.ranges[900]
    choice = ""
    if LaserScan.ranges[0] < 0.25:
        control_arr[1] = 2
        control_arr[3] = 0
        choice = "GOBACK"
    elif LaserScan.ranges[300] < 0.25:
        control_arr[1] = 0
        control_arr[2] = 2
        choice = "GORIGHT"
    elif LaserScan.ranges[900] < 0.25:
        control_arr[1] = 0
        control_arr[2] = 1
        choice = "GOLEFT"
    else:
        control_arr[1] = 1
        control_arr[2] = 0
        control_arr[3] = 0
        choice = "GOFRONT"
    print("--------------------")
    print("FRONT_RANGE: ", front_range)
    print("LEFT_RANGE: ", left_range)
    print("RIGHT_RANGE: ", right_range)
    print("BACK_RANGE: ", back_range)
    print("CHOCIE: ", choice)
    print("--------------------")
    #print(len(LaserScan.ranges))
    
lidar_listener = rospy.Subscriber('scan', LaserScan, logic)

talker()
