# RoboND-Term1-P1-Build-My-World
Project 1 of Udacity Robotics Software Engineer Nanodegree Program


## Project Rubric
### 1. Basic Requirements
#### 1.1 Does the project include a world directory containing the Gazebo world file, a model directory containing a structure and an object model files, a script directory containing the C++ plugin code, and a CMakeLists.txt file?
Completed
### 2. Building
#### 2.1 Does the project include a house with walls?
Yes
### 3. Modeling
#### 3.1 Does the project include an object built using the Model Editor?
Yes, robot and wheely
### 4. Gazebo World
#### 4.1 Does the project contain a Gazebo world with multiple models?

### 5. World Plugin
#### 5.1 Does the project contain a C++ world plugin?
Yes, it does

## Project setup
### Directory Structure
```
. build_my_world                  # Workspace directory
├── CMakeLists.txt
├── docs                          # Results and notes
│   ├── my_world.png
│   ├── notes
│   └── with_output.png
├── LICENSE
├── model
│   ├── metal_hawk               # Model of robot
│   │   ├── model.config
│   │   └── model.sdf
│   └── my_building              # Model of environment
│       ├── model.config
│       └── model.sdf
├── README.md
├── script
│   └── welcome_message.cpp      # Gazebo World plugin C++ script
└── world
    └── my_world                 # Gazebo main World containing models

```

### Steps to launch the simulation

#### Step 1 Update and upgrade the Workspace image
```sh
$ sudo apt-get update
$ sudo apt-get upgrade -y
```

#### Step 2 Clone the lab folder in /home/workspace/
```sh
$ cd /home/workspace/
$ git clone git@github.com:aiegoo/udacity-tony.git
```

#### Step 3 Compile the code
```sh
$ cd /home/workspace/build_my_world/
$ mkdir build
$ cd build/
$ cmake ../
$ make
```

#### Step 4 Add the library path to the Gazebo plugin path
```sh
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/build_my_world/build
```

#### Step 5 Run the Gazebo World file
```sh
$ cd /home/workspace/build_my_world/world/
$ gazebo my_world
```


## Output