# HashHacks3_Spearheads
IDEATION STAGE
BRIEF INTRODUCTION

We are planning to make a working  model  of a complete smart city , which will include advanced subsystems like smart Waste management system ,smart Parking, smart street light ,smart pollution toll and more. We have divided our model into 4 parts so as to isolate the connections and for easier understanding .

# SMART WASTE MANAGEMENT SYSTEM 

These days dustbins are either full or not present ,Full dustbins tend to spill over and pollute the surroundings .To solve this we will make a system which will tell us the status of the dustbins and pickup solution . 

# SMART PARKING 

Smart Parking will deal with the problem of filled parking slots and problems related to management and availability of Parking Spot.

# SMART TRAFFIC LIGHTS

Traffic Lights that will provide efficient priority passage to emergency vehicles thereby reducing many accidents and saving precious lives


# SMART STREET LIGHTS

Lights that glow only when traffic is coming, thereby saving energy and reducing costs.

# SMART POLLUTION TOLL 

As we all know pollution is the hottest problem right now , we are planning to make arrangements to solve that as well . pollution meter attached tolls will be there to grant access to safe vehicles . 
With new ideas involved we will try to reduce as many as small-small problems in a single city model all futuristic.







 







                                                Smart Air Pollution Toll 

Smart Air Pollution tolls are a unique way to reduce the ever increasing pollution levels of a city. Many vehicles, especially industrial trucks emit high amount of toxic gases. 

To improve the scenario, we plan to build air pollution toll at the entrance of the city which would check the levels of various toxic gases being emitted and would give the information whether its an harmful level or not. 

Only vehicles whose pollution stats are within limits would be allowed in city premises. Others would have to get their pollution levels checked first. Air pollution or toxic gases sensors can be used for the same.

Working

In our model, we are using a MQ2 Gas sensor to detect combined readings of various harmful gases like smoke and CO by providing artificial flame here. A servo motor is attached with it which is controlled by the reading of the sensor. 

If the readings are below the specified limit, the toll would open. But if the flame is provided, the readings rise above the specified level causing the toll to block the path of the vehicle.


                                                  Smart Street Lights

Smart Street Lights are a great way to reduce the energy consumption levels of a city, making it more efficient and environment friendly.

These lights only light up when any vehicle is detected in the path and close as soon as vehicle moves away. System clocks can be used to limit the process only to night hours .

Working

IR sensors are used in our model to detect the vehicle in the path. 
As soon as the car arrives in front of the street light, IR sensor sends the reading and makes the Street Light glow.

Street light closes as soon as the car passes away from it.


Smart Traffic Lights

As we know, a lot of accidents that can be prevented still occur because the emergency vehicles such as Ambulance, Fire Brigade and Police Car often get stuck in traffic Jams at Red Lights.
These can be easily prevented if these vehicles are allowed an easy passage through these red lights.

Here comes are concept of smart  traffic lights.
These will make the signal green for the lane in which the emergency vehicle is present, just with the help of pressing a small button at the end of the vehicle.

Working

A Transmitter and Receiver circuit is being used to make this possible. The transmitter end is placed within the emergency vehicle and the receiver end is connected with the traffic light.

If the vehicle is in a case of emergency, it presses a button which sends a signal from the transmitter  end to the receiver end, triggering the input at traffic light thus making the signal green for the vehicle to pass as fast as possible. 

As soon as the button is released, traffic light returns to its normal functioning.

Smart Parking

-> In this project of smart city we are trying to reduce efforts of people to find an empty parking slot.
Our main objective is to build up a smart car parking
-> Generally,  Unavailability of parking slots nearby or the knowledge of their location and vacancy status causes inconvenience to the people. Hence it gives rise to illegal parking and traffic.
People can easily just check the available slots on their mobiles through net and decide where to park.
     Working
-> In this project,  We are using IR sensors to provide the reading of every slot and tell whether its occupied or not.
We are using a combination of Dweet.io and Freeboard.io to send the live data of each parking slot on to the server which can easily be accessed on mobile. All the details about parking slot are given(mentioned) on the site.
Also, at the entrance of the parking lot we attached a servo motor which will allow the car to enter the Parking lot only when there is space available.

Smart Waste Management System
Overfilling of dustbins make the city dirty and cause many diseases. So to solve this problem, small dustbins will be placed in different parts of a locality and a common big dustbin will be present for that area.
 When small dustbins get full, their waste will be sent to the common one via suction pipes. As soon as the larger dustbin gets filled up, a message is sent with the location of the big dustbin  upon the server at the local MCD to come and pick up the trash from the common big dustbin.
Working
Here we have placed IR sensors in the small dustbins ,which when high will trigger the servo motor attached to the base of the dustbins ,making a way for the waste to travel through the pipeline below towards the big dustbin. 
The big dustbin has an ultrasonic sensor attached on its lid which will give the distance between lid and waste . Live data will be sent to the server via dweet.io and freeboard.io. 
