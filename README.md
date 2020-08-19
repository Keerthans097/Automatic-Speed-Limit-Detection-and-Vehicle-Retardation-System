# Automatic-Speed-Limit-Detection-and-Vehicle-Retardation-System

Automatic Speed Limit Detection and Vehicle Retardation System


Each year over 40,000 fatalities and 2,788,000 non-fatal injuries occur due to automobile accidents on the road. In addition, it is predicted that hospital bills, damaged
properties and additional accident-related costs will add up to approximately one to
three percent of the world’s gross domestic product. This can have owed to the fact that
most drivers of automobiles knowingly or unknowingly break the rules of traffic. The
carelessness of these certain driver cost the world many valuable lives. Over-speeding
is one the most broken traffic rule. This is the motivation behind this project. This
project aims to create a system for electric cars through which the car reads speed limit
boards placed by the government along the road and automatically limits the speed of
the vehicle overriding the driver’s control


Objectives

• To design an automatic speed limiter system for electric cars that detects and
interprets speed limiter signs placed alongside roads efficiently. The system is
also supposed to communicate with other similar automobiles in its vicinity and
inform them of the detected speed limit. Similarly, the system is supposed to
receive similar information from other vehicles and limit its speed.

• To test the system for various test cases, verify its functionalities and find ways to
fix its faults/errors is any.


Speed Limit board detection
The Heart of the whole project is image processing part that is speed limit sign number
detection. Normal contour drawing and segmentation in not enough to detect the board
numbers, since there are different types of traffic sign boards in respective to signs,
numbers, shapes, etc... and also the accuracy of an image processing part will get
reduced.Hence we use CNN and ML to detect the numbers.
Our approach to building this speed limit sign classification model is discussed in four
steps:

• Explore the dataset

• Build a CNN model

• Train and validate the model

• Test the model with test dataset




![image](https://user-images.githubusercontent.com/119934119/206096524-9ad5a2ff-d423-4abd-96f5-b1dc5bda639c.png)


![image](https://user-images.githubusercontent.com/119934119/206096729-f93d34c8-b673-4faa-ba63-1cbb2dcf0097.png)

![image](https://user-images.githubusercontent.com/119934119/206096863-e34eed09-303f-4e83-b81d-fa36977b249a.png)

![image](https://user-images.githubusercontent.com/119934119/206096904-18044b28-5877-4d67-b8a3-e92661460a01.png)

![image](https://user-images.githubusercontent.com/119934119/206097036-0f7798c4-9c25-41bc-8f66-b48ef81a18de.png)



