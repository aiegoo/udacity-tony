#include <gazebo/gazebo.hh>

namespace gazebo
{
     class WorldPluginMyRobot : public WorldPlugin
     {
     public:
          WorldPluginMyRobot() : WorldPlugin()
          {
               printf("Hello welcome to Tony's world!\n");
          }

     public:
          void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
          {
          }
     };
     GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}