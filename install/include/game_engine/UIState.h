// Generated by gencpp from file game_engine/UIState.msg
// DO NOT EDIT!


#ifndef GAME_ENGINE_MESSAGE_UISTATE_H
#define GAME_ENGINE_MESSAGE_UISTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace game_engine
{
template <class ContainerAllocator>
struct UIState_
{
  typedef UIState_<ContainerAllocator> Type;

  UIState_()
    : setupStart(false)
    , gameStart(false)
    , teamGame(false)
    , paused(false)
    , aiGame(false)
    , simGame(false)
    , seconds(0)  {
    }
  UIState_(const ContainerAllocator& _alloc)
    : setupStart(false)
    , gameStart(false)
    , teamGame(false)
    , paused(false)
    , aiGame(false)
    , simGame(false)
    , seconds(0)  {
  (void)_alloc;
    }



   typedef uint8_t _setupStart_type;
  _setupStart_type setupStart;

   typedef uint8_t _gameStart_type;
  _gameStart_type gameStart;

   typedef uint8_t _teamGame_type;
  _teamGame_type teamGame;

   typedef uint8_t _paused_type;
  _paused_type paused;

   typedef uint8_t _aiGame_type;
  _aiGame_type aiGame;

   typedef uint8_t _simGame_type;
  _simGame_type simGame;

   typedef int32_t _seconds_type;
  _seconds_type seconds;





  typedef boost::shared_ptr< ::game_engine::UIState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::game_engine::UIState_<ContainerAllocator> const> ConstPtr;

}; // struct UIState_

typedef ::game_engine::UIState_<std::allocator<void> > UIState;

typedef boost::shared_ptr< ::game_engine::UIState > UIStatePtr;
typedef boost::shared_ptr< ::game_engine::UIState const> UIStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::game_engine::UIState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::game_engine::UIState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace game_engine

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'game_engine': ['/home/sergio/teste420/src/game_engine/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::UIState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::game_engine::UIState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::UIState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_engine::UIState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::UIState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_engine::UIState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::game_engine::UIState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f7f5fff7672344f07999ef4cb15a0ebc";
  }

  static const char* value(const ::game_engine::UIState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf7f5fff7672344f0ULL;
  static const uint64_t static_value2 = 0x7999ef4cb15a0ebcULL;
};

template<class ContainerAllocator>
struct DataType< ::game_engine::UIState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "game_engine/UIState";
  }

  static const char* value(const ::game_engine::UIState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::game_engine::UIState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool setupStart\n\
bool gameStart\n\
bool teamGame\n\
bool paused\n\
bool aiGame\n\
bool simGame\n\
int32 seconds\n\
";
  }

  static const char* value(const ::game_engine::UIState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::game_engine::UIState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.setupStart);
      stream.next(m.gameStart);
      stream.next(m.teamGame);
      stream.next(m.paused);
      stream.next(m.aiGame);
      stream.next(m.simGame);
      stream.next(m.seconds);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UIState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::game_engine::UIState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::game_engine::UIState_<ContainerAllocator>& v)
  {
    s << indent << "setupStart: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.setupStart);
    s << indent << "gameStart: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gameStart);
    s << indent << "teamGame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.teamGame);
    s << indent << "paused: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.paused);
    s << indent << "aiGame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.aiGame);
    s << indent << "simGame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.simGame);
    s << indent << "seconds: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seconds);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAME_ENGINE_MESSAGE_UISTATE_H
