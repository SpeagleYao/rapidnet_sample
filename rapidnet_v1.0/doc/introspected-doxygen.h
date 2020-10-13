/*!
\fn static TypeId ns3::Object::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Object

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ObjectBase::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ObjectBase

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
/*!
/*!
/*!
/*!
/*!
\fn static TypeId ns3::ListScheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ListScheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Scheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Scheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MapScheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MapScheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::HeapScheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::HeapScheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::CalendarScheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::CalendarScheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ns2CalendarScheduler::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ns2CalendarScheduler

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::DefaultSimulatorImpl::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::DefaultSimulatorImpl

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RealtimeSimulatorImpl::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RealtimeSimulatorImpl

Attributes defined for this type:<br>
<ul>
<li><b>SynchronizationMode</b>: What to do if the simulation cannot keep up with real time.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref BestEffort|HardLimit</li>
    <li>Initial value: BestEffort</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>HardLimit</b>: Maximum acceptable real-time jitter (used in conjunction with SynchronizationMode=HardLimit)
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 100000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Chunk::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Chunk

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Header::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Header

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Trailer::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Trailer

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ErrorModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ErrorModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice/ReceiveErrorModel</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice/ReceiveErrorModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>IsEnabled</b>: Whether this ErrorModel is enabled or not.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RateErrorModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RateErrorModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice/ReceiveErrorModel/$%ns3::%RateErrorModel</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice/ReceiveErrorModel/$%ns3::%RateErrorModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>ErrorUnit</b>: The error unit
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref EU_BYTE|EU_PKT|EU_BIT</li>
    <li>Initial value: EU_BYTE</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ErrorRate</b>: The error rate.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RanVar</b>: The decision variable attached to this error model.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::ErrorModel:<br>
<ul>
<li><b>IsEnabled</b>: Whether this ErrorModel is enabled or not.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ListErrorModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ListErrorModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice/ReceiveErrorModel/$%ns3::%ListErrorModel</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice/ReceiveErrorModel/$%ns3::%ListErrorModel</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::ErrorModel:<br>
<ul>
<li><b>IsEnabled</b>: Whether this ErrorModel is enabled or not.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ConfigStore::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConfigStore

Attributes defined for this type:<br>
<ul>
<li><b>Mode</b>: Configuration mode
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref None|Load|Save</li>
    <li>Initial value: None</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>Filename</b>: The file where the configuration should be saved to or loaded from.
  <ul>
    <li>Set with class: \ref StringValue</li>
    <li>Underlying type: \ref std::string</li>
    <li>Initial value: </li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>FileFormat</b>: Type of file format
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref RawText|Xml</li>
    <li>Initial value: RawText</li>
    <li>Flags: construct write </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Node::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Node

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DeviceList</b>: The list of devices associated to this Node.
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::NetDevice ></li>
    <li>Flags: read </li>
  </ul> 
<li><b>ApplicationList</b>: The list of applications associated to this Node.
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Application ></li>
    <li>Flags: read </li>
  </ul> 
<li><b>Id</b>: The id (unique integer) of this Node.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4Header::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4Header

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::NetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::NetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::LlcSnapHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::LlcSnapHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::EthernetHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::EthernetHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::EthernetTrailer::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::EthernetTrailer

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4RoutingProtocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4RoutingProtocol

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Queue::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Queue

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice/TxQueue</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%EmuNetDevice/TxQueue</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice/TxQueue</li>
</ul>
No Attributes defined for this type.<br>
TraceSources defined for this type:<br>
<ul>
<li><b>Enqueue</b>: Enqueue a packet in the queue.
</li>
<li><b>Dequeue</b>: Dequeue a packet from the queue.
</li>
<li><b>Drop</b>: Drop a packet stored in the queue.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::DropTailQueue::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::DropTailQueue

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice/TxQueue/$%ns3::%DropTailQueue</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%EmuNetDevice/TxQueue/$%ns3::%DropTailQueue</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice/TxQueue/$%ns3::%DropTailQueue</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Mode</b>: Whether to use Bytes (see MaxBytes) or Packets (see MaxPackets) as the maximum queue size metric.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref Bytes|Packets</li>
    <li>Initial value: Packets</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>MaxPackets</b>: The maximum number of packets accepted by this DropTailQueue.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 100</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxBytes</b>: The maximum number of bytes accepted by this DropTailQueue.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 6553500</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::Queue:<br>
<ul>
<li><b>Enqueue</b>: Enqueue a packet in the queue.
</li>
<li><b>Dequeue</b>: Dequeue a packet from the queue.
</li>
<li><b>Drop</b>: Drop a packet stored in the queue.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::Channel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Channel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::NodeListPriv::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::NodeListPriv

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li></li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>NodeList</b>: The list of all nodes created during the simulation.
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Node ></li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::SocketFactory::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::SocketFactory

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::PacketSocketFactory::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PacketSocketFactory

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%PacketSocketFactory</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::UdpSocket::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpSocket

Attributes defined for this type:<br>
<ul>
<li><b>RcvBufSize</b>: UdpSocket maximum receive buffer size (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 4294967295</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IpTtl</b>: socket-specific TTL for unicast IP packets (if non-zero)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint8_t 0:255</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IpMulticastTtl</b>: socket-specific TTL for multicast IP packets (if non-zero)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint8_t 0:255</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IpMulticastIf</b>: interface index for outgoing multicast on this socket; -1 indicates to use default interface
  <ul>
    <li>Set with class: \ref ns3::IntegerValue</li>
    <li>Underlying type: \ref int32_t -2147483648:2147483647</li>
    <li>Initial value: -1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IpMulticastLoop</b>: whether outgoing multicast sent also to loopback interface
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MtuDiscover</b>: If enabled, every outgoing ip packet will have the DF flag set.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::UdpSocketFactory::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpSocketFactory

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%UdpSocketFactory</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::TcpSocket::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TcpSocket

Attributes defined for this type:<br>
<ul>
<li><b>SndBufSize</b>: TcpSocket maximum transmit buffer size (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 131072</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RcvBufSize</b>: TcpSocket maximum receive buffer size (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 4294967295</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SegmentSize</b>: TCP maximum segment size in bytes (may be adjusted based on MTU discovery)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 536</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SlowStartThreshold</b>: TCP slow start threshold (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 65535</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InitialCwnd</b>: TCP initial congestion window size (segments)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnTimeout</b>: TCP retransmission timeout when opening connection (seconds)
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnCount</b>: Number of connection attempts (SYN retransmissions) before returning failure
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 6</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DelAckTimeout</b>: Timeout value for TCP delayed acks, in seconds
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 200000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DelAckCount</b>: Number of packets to wait before sending a TCP ack
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::TcpSocketFactory::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TcpSocketFactory

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%TcpSocketFactory</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4

Attributes defined for this type:<br>
<ul>
<li><b>IpForward</b>: Globally enable or disable IP forwarding for all current and future Ipv4 devices.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Application::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Application

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv6Header::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv6Header

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4RawSocketFactory::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4RawSocketFactory

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4L4Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4L4Protocol

Attributes defined for this type:<br>
<ul>
<li><b>ProtocolNumber</b>: The Ipv4 protocol number.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref int32_t 18446744071562067968:2147483647</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::UdpHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::TcpHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TcpHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4L3Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4L3Protocol

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%Ipv4L3Protocol</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DefaultTtl</b>: The TTL value set by default on all outgoing packets generated on this node.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint8_t 0:255</li>
    <li>Initial value: 64</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InterfaceList</b>: The set of Ipv4 interfaces associated to this Ipv4 stack.
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Ipv4Interface ></li>
    <li>Flags: read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::Ipv4:<br>
<ul>
<li><b>IpForward</b>: Globally enable or disable IP forwarding for all current and future Ipv4 devices.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Tx</b>: Send ipv4 packet to outgoing interface.
</li>
<li><b>Rx</b>: Receive ipv4 packet from incoming interface.
</li>
<li><b>Drop</b>: Drop ipv4 packet
</li>
</ul>
*/
/*!
\fn static TypeId ns3::UdpL4Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpL4Protocol

No Attributes defined for this type.<br>
Attributes defined in parent class ns3::Ipv4L4Protocol:<br>
<ul>
<li><b>ProtocolNumber</b>: The Ipv4 protocol number.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref int32_t 18446744071562067968:2147483647</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RttMeanDeviation::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RttMeanDeviation

Attributes defined for this type:<br>
<ul>
<li><b>Gain</b>: XXX
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::RttEstimator:<br>
<ul>
<li><b>MaxMultiplier</b>: XXX
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 64</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InitialEstimation</b>: XXX
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinRTO</b>: Minimum retransmit timeout value
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 200000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RttEstimator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RttEstimator

Attributes defined for this type:<br>
<ul>
<li><b>MaxMultiplier</b>: XXX
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 64</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InitialEstimation</b>: XXX
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinRTO</b>: Minimum retransmit timeout value
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 200000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::TcpL4Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TcpL4Protocol

Attributes defined for this type:<br>
<ul>
<li><b>RttEstimatorFactory</b>: How RttEstimator objects are created.
  <ul>
    <li>Set with class: \ref ObjectFactoryValue</li>
    <li>Underlying type: \ref ObjectFactory</li>
    <li>Initial value: ns3::RttMeanDeviation[]</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SocketList</b>: The list of sockets associated to this protocol.
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::TcpSocketImpl ></li>
    <li>Flags: read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::Ipv4L4Protocol:<br>
<ul>
<li><b>ProtocolNumber</b>: The Ipv4 protocol number.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref int32_t 18446744071562067968:2147483647</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ArpHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ArpHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ArpCache::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ArpCache

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%ArpL3Protocol/CacheList/[i]</li>
<li>/NodeList/[i]/$%ns3::%Ipv4L3Protocol/InterfaceList/[i]/ArpCache</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>AliveTimeout</b>: When this timeout expires, the matching cache entry needs refreshing
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 120000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DeadTimeout</b>: When this timeout expires, a new attempt to resolve the matching entry is made
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 100000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>WaitReplyTimeout</b>: When this timeout expires, the cache entries will be scanned and entries in WaitReply state will resend ArpRequest unless MaxRetries has been exceeded, in which case the entry is marked dead
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxRetries</b>: Number of retransmissions of ArpRequest before marking dead
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 3</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>PendingQueueSize</b>: The size of the queue for packets pending an arp reply.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 3</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Drop</b>: Packet dropped due to ArpCache entry in WaitReply expiring.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::ArpL3Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ArpL3Protocol

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%ArpL3Protocol</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>CacheList</b>: The list of ARP caches
  <ul>
    <li>Set with class: \ref ns3::ObjectVectorValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::ArpCache ></li>
    <li>Flags: read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Drop</b>: Packet dropped because not enough room in pending queue for a specific cache entry.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::TcpSocketImpl::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TcpSocketImpl

No Attributes defined for this type.<br>
Attributes defined in parent class ns3::TcpSocket:<br>
<ul>
<li><b>SndBufSize</b>: TcpSocket maximum transmit buffer size (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 131072</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RcvBufSize</b>: TcpSocket maximum receive buffer size (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 4294967295</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SegmentSize</b>: TCP maximum segment size in bytes (may be adjusted based on MTU discovery)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 536</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SlowStartThreshold</b>: TCP slow start threshold (bytes)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 65535</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InitialCwnd</b>: TCP initial congestion window size (segments)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnTimeout</b>: TCP retransmission timeout when opening connection (seconds)
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnCount</b>: Number of connection attempts (SYN retransmissions) before returning failure
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 6</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DelAckTimeout</b>: Timeout value for TCP delayed acks, in seconds
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 200000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DelAckCount</b>: Number of packets to wait before sending a TCP ack
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>CongestionWindow</b>: The TCP connection's congestion window
</li>
</ul>
*/
/*!
\fn static TypeId ns3::Ipv4RawSocketImpl::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4RawSocketImpl

Attributes defined for this type:<br>
<ul>
<li><b>Protocol</b>: Protocol number to match.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IcmpFilter</b>: Any icmp header whose type field matches a bit in this filter is dropped.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Icmpv4L4Protocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Icmpv4L4Protocol

No Attributes defined for this type.<br>
Attributes defined in parent class ns3::Ipv4L4Protocol:<br>
<ul>
<li><b>ProtocolNumber</b>: The Ipv4 protocol number.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref int32_t 18446744071562067968:2147483647</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::PointToPointNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PointToPointNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%PointToPointNetDevice</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Address</b>: The MAC address of this device.
  <ul>
    <li>Set with class: \ref Mac48AddressValue</li>
    <li>Underlying type: \ref Mac48Address</li>
    <li>Initial value: ff:ff:ff:ff:ff:ff</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FrameSize</b>: The maximum size of a packet sent over this device.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 10002</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DataRate</b>: The default data rate for point to point links
  <ul>
    <li>Set with class: \ref DataRateValue</li>
    <li>Underlying type: \ref DataRate</li>
    <li>Initial value: 32768bps</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReceiveErrorModel</b>: The receiver error model used to simulate packet loss
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::ErrorModel ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>InterframeGap</b>: The time to wait between packet (frame) transmissions
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxQueue</b>: A queue to use as the transmit queue in the device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Queue ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>MacTx</b>: Trace source indicating a packet has arrived for transmission by this device
</li>
<li><b>MacTxDrop</b>: Trace source indicating a packet has been dropped by the device before transmission
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>PhyTxBegin</b>: Trace source indicating a packet has begun transmitting over the channel
</li>
<li><b>PhyTxEnd</b>: Trace source indicating a packet has been completely transmitted over the channel
</li>
<li><b>PhyTxDrop</b>: Trace source indicating a packet has been dropped by the device during transmission
</li>
<li><b>PhyRxEnd</b>: Trace source indicating a packet has been completely received by the device
</li>
<li><b>PhyRxDrop</b>: Trace source indicating a packet has been dropped by the device during reception
</li>
<li><b>Sniffer</b>: Trace source simulating a non-promiscuous packet sniffer attached to the device
</li>
<li><b>PromiscSniffer</b>: Trace source simulating a promiscuous packet sniffer attached to the device
</li>
</ul>
*/
/*!
\fn static TypeId ns3::PointToPointChannel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PointToPointChannel

Attributes defined for this type:<br>
<ul>
<li><b>Delay</b>: Transmission delay through the channel
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::PppHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PppHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::CsmaNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::CsmaNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%CsmaNetDevice</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Address</b>: The MAC address of this device.
  <ul>
    <li>Set with class: \ref Mac48AddressValue</li>
    <li>Underlying type: \ref Mac48Address</li>
    <li>Initial value: ff:ff:ff:ff:ff:ff</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FrameSize</b>: The maximum size of a packet sent over this device.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1518</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EncapsulationMode</b>: The link-layer encapsulation type to use.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref Dix|Llc</li>
    <li>Initial value: Dix</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>SendEnable</b>: Enable or disable the transmitter section of the device.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReceiveEnable</b>: Enable or disable the receiver section of the device.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReceiveErrorModel</b>: The receiver error model used to simulate packet loss
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::ErrorModel ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxQueue</b>: A queue to use as the transmit queue in the device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Queue ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>MacTx</b>: Trace source indicating a packet has arrived for transmission by this device
</li>
<li><b>MacTxDrop</b>: Trace source indicating a packet has been dropped by the device before transmission
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacTxBackoff</b>: Trace source indicating a packet has been delayed by the CSMA backoff process
</li>
<li><b>PhyTxBegin</b>: Trace source indicating a packet has begun transmitting over the channel
</li>
<li><b>PhyTxEnd</b>: Trace source indicating a packet has been completely transmitted over the channel
</li>
<li><b>PhyTxDrop</b>: Trace source indicating a packet has been dropped by the device during transmission
</li>
<li><b>PhyRxEnd</b>: Trace source indicating a packet has been completely received by the device
</li>
<li><b>PhyRxDrop</b>: Trace source indicating a packet has been dropped by the device during reception
</li>
<li><b>Sniffer</b>: Trace source simulating a non-promiscuous packet sniffer attached to the device
</li>
<li><b>PromiscSniffer</b>: Trace source simulating a promiscuous packet sniffer attached to the device
</li>
</ul>
*/
/*!
\fn static TypeId ns3::CsmaChannel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::CsmaChannel

Attributes defined for this type:<br>
<ul>
<li><b>DataRate</b>: The transmission data rate to be provided to devices connected to the channel
  <ul>
    <li>Set with class: \ref DataRateValue</li>
    <li>Underlying type: \ref DataRate</li>
    <li>Initial value: 4294967295bps</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Delay</b>: Transmission delay through the channel
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::EmuNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::EmuNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%EmuNetDevice</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Address</b>: The ns-3 MAC address of this (virtual) device.
  <ul>
    <li>Set with class: \ref Mac48AddressValue</li>
    <li>Underlying type: \ref Mac48Address</li>
    <li>Initial value: ff:ff:ff:ff:ff:ff</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DeviceName</b>: The name of the underlying real device (e.g. eth1).
  <ul>
    <li>Set with class: \ref StringValue</li>
    <li>Underlying type: \ref std::string</li>
    <li>Initial value: eth1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Start</b>: The simulation time at which to spin up the device thread.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Stop</b>: The simulation time at which to tear down the device thread.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxQueue</b>: A queue to use as the transmit queue in the device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::Queue ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>MacTx</b>: Trace source indicating a packet has arrived for transmission by this device
</li>
<li><b>MacTxDrop</b>: Trace source indicating a packet has been dropped by the device before transmission
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>Sniffer</b>: Trace source simulating a non-promiscuous packet sniffer attached to the device
</li>
<li><b>PromiscSniffer</b>: Trace source simulating a promiscuous packet sniffer attached to the device
</li>
</ul>
*/
/*!
\fn static TypeId ns3::BridgeNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::BridgeNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%BridgeNetDevice</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>EnableLearning</b>: Enable the learning mode of the Learning Bridge
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ExpirationTime</b>: Time it takes for learned MAC state entry to expire.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 30000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::BridgeChannel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::BridgeChannel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::TapBridge::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::TapBridge

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%TapBridge</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DeviceName</b>: The name of the tap device to create.
  <ul>
    <li>Set with class: \ref StringValue</li>
    <li>Underlying type: \ref std::string</li>
    <li>Initial value: </li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Gateway</b>: The IP address of the default gateway to assign to the host machine, when in ConfigureLocal mode.
  <ul>
    <li>Set with class: \ref Ipv4AddressValue</li>
    <li>Underlying type: \ref Ipv4Address</li>
    <li>Initial value: 255.255.255.255</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>IpAddress</b>: The IP address to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered IP address of the simulated device.
  <ul>
    <li>Set with class: \ref Ipv4AddressValue</li>
    <li>Underlying type: \ref Ipv4Address</li>
    <li>Initial value: 255.255.255.255</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MacAddress</b>: The MAC address to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered MAC address of the simulated device.
  <ul>
    <li>Set with class: \ref Mac48AddressValue</li>
    <li>Underlying type: \ref Mac48Address</li>
    <li>Initial value: ff:ff:ff:ff:ff:ff</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Netmask</b>: The network mask to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered MAC address of the simulated device.
  <ul>
    <li>Set with class: \ref Ipv4MaskValue</li>
    <li>Underlying type: \ref Ipv4Mask</li>
    <li>Initial value: 255.255.255.255</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Start</b>: The simulation time at which to spin up the tap device read thread.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Stop</b>: The simulation time at which to tear down the tap device read thread.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 0ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Mode</b>: The operating and configuration mode to use.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref ConfigureLocal|UseLocal|UseBridge</li>
    <li>Initial value: UseLocal</li>
    <li>Flags: construct write </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::VirtualNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::VirtualNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%VirtualNetDevice</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>MacTx</b>: Trace source indicating a packet has arrived for transmission by this device
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>Sniffer</b>: Trace source simulating a non-promiscuous packet sniffer attached to the device
</li>
<li><b>PromiscSniffer</b>: Trace source simulating a promiscuous packet sniffer attached to the device
</li>
</ul>
*/
/*!
\fn static TypeId ns3::OnOffApplication::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::OnOffApplication

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%OnOffApplication</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DataRate</b>: The data rate in on state.
  <ul>
    <li>Set with class: \ref DataRateValue</li>
    <li>Underlying type: \ref DataRate</li>
    <li>Initial value: 500000bps</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>PacketSize</b>: The size of packets sent in on state
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 1:4294967295</li>
    <li>Initial value: 512</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Remote</b>: The address of the destination
  <ul>
    <li>Set with class: \ref AddressValue</li>
    <li>Underlying type: \ref Address</li>
    <li>Initial value: 00-00-00</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>OnTime</b>: A RandomVariable used to pick the duration of the 'On' state.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>OffTime</b>: A RandomVariable used to pick the duration of the 'Off' state.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxBytes</b>: The total number of bytes to send. Once these bytes are sent, no packet is sent again, even in on state. The value zero means that there is no limit.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Protocol</b>: The type of protocol to use.
  <ul>
    <li>Set with class: \ref TypeIdValue</li>
    <li>Underlying type: \ref TypeId</li>
    <li>Initial value: ns3::UdpSocketFactory</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Tx</b>: A new packet is created and is sent
</li>
</ul>
*/
/*!
\fn static TypeId ns3::PacketSink::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PacketSink

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%PacketSink</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Local</b>: The Address on which to Bind the rx socket.
  <ul>
    <li>Set with class: \ref AddressValue</li>
    <li>Underlying type: \ref Address</li>
    <li>Initial value: 00-00-00</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Protocol</b>: The type id of the protocol to use for the rx socket.
  <ul>
    <li>Set with class: \ref TypeIdValue</li>
    <li>Underlying type: \ref TypeId</li>
    <li>Initial value: ns3::UdpSocketFactory</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Rx</b>: A packet has been received
</li>
</ul>
*/
/*!
\fn static TypeId ns3::UdpEchoClient::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpEchoClient

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%UdpEchoClient</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>MaxPackets</b>: The maximum number of packets the application will send
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 100</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Interval</b>: The time to wait between packets
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RemoteAddress</b>: The destination Ipv4Address of the outbound packets
  <ul>
    <li>Set with class: \ref Ipv4AddressValue</li>
    <li>Underlying type: \ref Ipv4Address</li>
    <li>Initial value: 102.102.102.102</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RemotePort</b>: The destination port of the outbound packets
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>PacketSize</b>: Size of echo data in outbound packets
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 100</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::UdpEchoServer::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::UdpEchoServer

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%UdpEchoServer</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Port</b>: Port on which we listen for incoming packets.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 9</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::olsr::PacketHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::olsr::PacketHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::olsr::MessageHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::olsr::MessageHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::olsr::RoutingProtocol::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::olsr::RoutingProtocol

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%olsr::%RoutingProtocol</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>HelloInterval</b>: HELLO messages emission interval.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 2000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TcInterval</b>: TC messages emission interval.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 5000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MidInterval</b>: MID messages emission interval.  Normally it is equal to TcInterval.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 5000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Willingness</b>: Willingness of a node to carry and forward traffic for other nodes.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref never|low|default|high|always</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Rx</b>: Receive OLSR packet.
</li>
<li><b>Tx</b>: Send OLSR packet.
</li>
<li><b>RoutingTableChanged</b>: The OLSR routing table has changed.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::GlobalRouter::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::GlobalRouter

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4GlobalRouting::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4GlobalRouting

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4StaticRouting::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4StaticRouting

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4ListRouting::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4ListRouting

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::HierarchicalMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::HierarchicalMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%HierarchicalMobilityModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Child</b>: The child mobility model.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::MobilityModel ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Parent</b>: The parent mobility model.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::MobilityModel ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::MobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::PositionAllocator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PositionAllocator

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel/PositionAllocator</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ListPositionAllocator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ListPositionAllocator

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel/PositionAllocator/$%ns3::%ListPositionAllocator</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::GridPositionAllocator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::GridPositionAllocator

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel/PositionAllocator/$%ns3::%GridPositionAllocator</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>GridWidth</b>: The number of objects layed out on a line.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinX</b>: The x coordinate where the grid starts.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinY</b>: The y coordinate where the grid starts.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DeltaX</b>: The x space between objects.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DeltaY</b>: The y space between objects.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>LayoutType</b>: The type of layout.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref RowFirst|ColumnFirst</li>
    <li>Initial value: RowFirst</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RandomRectanglePositionAllocator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomRectanglePositionAllocator

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel/PositionAllocator/$%ns3::%RandomRectanglePositionAllocator</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>X</b>: A random variable which represents the x coordinate of a position in a random rectangle.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Y</b>: A random variable which represents the y coordinate of a position in a random rectangle.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RandomDiscPositionAllocator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomDiscPositionAllocator

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel/PositionAllocator/$%ns3::%RandomDiscPositionAllocator</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Theta</b>: A random variable which represents the angle (gradients) of a position in a random disc.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:6.283</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Rho</b>: A random variable which represents the radius of a position in a random disc.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:200</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>X</b>: The x coordinate of the center of the random position disc.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Y</b>: The y coordinate of the center of the random position disc.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ConstantPositionMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConstantPositionMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%ConstantPositionMobilityModel</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::ConstantVelocityMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConstantVelocityMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%ConstantVelocityMobilityModel</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::RandomWaypointMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomWaypointMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWaypointMobilityModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Speed</b>: A random variable used to pick the speed of a random waypoint model.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0.3:0.7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pause</b>: A random variable used to pick the pause of a random waypoint model.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>PositionAllocator</b>: The position model used to pick a destination point.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::PositionAllocator ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::RandomWalk2dMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomWalk2dMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomWalk2dMobilityModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Bounds</b>: Bounds of the area to cruise.
  <ul>
    <li>Set with class: \ref RectangleValue</li>
    <li>Underlying type: \ref Rectangle</li>
    <li>Initial value: 0|0|100|100</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Time</b>: Change current direction and speed after moving for this delay.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Distance</b>: Change current direction and speed after moving for this distance.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Mode</b>: The mode indicates the condition used to change the current speed and direction
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref Distance|Time</li>
    <li>Initial value: Distance</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Direction</b>: A random variable used to pick the direction (gradients).
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:6.28318</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Speed</b>: A random variable used to pick the speed (m/s).
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:2:4</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::RandomDirection2dMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomDirection2dMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%RandomDirection2dMobilityModel</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Bounds</b>: The 2d bounding area
  <ul>
    <li>Set with class: \ref RectangleValue</li>
    <li>Underlying type: \ref Rectangle</li>
    <li>Initial value: -100|100|-100|100</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Speed</b>: A random variable to control the speed (m/s).
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:1:2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pause</b>: A random variable to control the pause (s).
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:2</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::ConstantAccelerationMobilityModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConstantAccelerationMobilityModel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%MobilityModel/$%ns3::%ConstantAccelerationMobilityModel</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>Position</b>: The current position of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: write read </li>
  </ul> 
<li><b>Velocity</b>: The current velocity of the mobility model.
  <ul>
    <li>Set with class: \ref VectorValue</li>
    <li>Underlying type: \ref Vector</li>
    <li>Flags: read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::MobilityModel:<br>
<ul>
<li><b>CourseChange</b>: The value of the position and/or velocity vector changed
</li>
</ul>
*/
/*!
\fn static TypeId ns3::PropagationDelayModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PropagationDelayModel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RandomPropagationDelayModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomPropagationDelayModel

Attributes defined for this type:<br>
<ul>
<li><b>Variable</b>: The random variable which generates random delays (s).
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Uniform:0:1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ConstantSpeedPropagationDelayModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConstantSpeedPropagationDelayModel

Attributes defined for this type:<br>
<ul>
<li><b>Speed</b>: The speed (m/s)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 3e+08</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::PropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::PropagationLossModel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RandomPropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RandomPropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Variable</b>: The random variable used to pick a loss everytime CalcRxPower is invoked.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::FriisPropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::FriisPropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Lambda</b>: The wavelength  (default is 5.15 GHz at 300 000 km/s).
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.0582524</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SystemLoss</b>: The system loss
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinDistance</b>: The distance under which the propagation model refuses to give results (m)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.5</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::LogDistancePropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::LogDistancePropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Exponent</b>: The exponent of the Path Loss propagation model
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 3</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReferenceDistance</b>: The distance at which the reference loss is calculated (m)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReferenceLoss</b>: The reference loss at reference distance (dB). (Default is Friis at 1m with 5.15 GHz)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 46.6777</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ThreeLogDistancePropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ThreeLogDistancePropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Distance0</b>: Beginning of the first (near) distance field
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Distance1</b>: Beginning of the second (middle) distance field.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 200</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Distance2</b>: Beginning of the third (far) distance field.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Exponent0</b>: The exponent for the first field.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1.9</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Exponent1</b>: The exponent for the second field.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 3.8</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Exponent2</b>: The exponent for the third field.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 3.8</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ReferenceLoss</b>: The reference loss at distance d0 (dB). (Default is Friis at 1m with 5.15 GHz)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 46.6777</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::NakagamiPropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::NakagamiPropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Distance1</b>: Beginning of the second distance field. Default is 80m.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 80</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Distance2</b>: Beginning of the third distance field. Default is 200m.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 200</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>m0</b>: m0 for distances smaller than Distance1. Default is 1.5.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1.5</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>m1</b>: m1 for distances smaller than Distance2. Default is 0.75.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.75</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>m2</b>: m2 for distances greater than Distance2. Default is 0.75.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.75</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::FixedRssLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::FixedRssLossModel

Attributes defined for this type:<br>
<ul>
<li><b>Rss</b>: The fixed receiver Rss.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: -150</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::JakesPropagationLossModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::JakesPropagationLossModel

Attributes defined for this type:<br>
<ul>
<li><b>NumberOfRaysPerPath</b>: The number of rays to use by default for compute the fading coeficent for a given path (default is 1)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint8_t 0:255</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NumberOfOscillatorsPerRay</b>: The number of oscillators to use by default for compute the coeficent for a given ray of a given path (default is 4)
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint8_t 0:255</li>
    <li>Initial value: 4</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DopplerFreq</b>: The doppler frequency in Hz (f_d = v / lambda = v * f / c), the default is 0)
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Distribution</b>: The distribution to choose the initial phases.
  <ul>
    <li>Set with class: \ref RandomVariableValue</li>
    <li>Underlying type: \ref RandomVariable</li>
    <li>Initial value: Constant:1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::WifiPhy::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiPhy

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Phy</li>
</ul>
No Attributes defined for this type.<br>
TraceSources defined for this type:<br>
<ul>
<li><b>PhyTxBegin</b>: Trace source indicating a packet has begun transmitting over the channel medium
</li>
<li><b>PhyTxEnd</b>: Trace source indicating a packet has been completely transmitted over the channel
</li>
<li><b>PhyTxDrop</b>: Trace source indicating a packet has been dropped by the device during transmission
</li>
<li><b>PhyRxBegin</b>: Trace source indicating a packet has begun being received from the channel medium by the device
</li>
<li><b>PhyRxEnd</b>: Trace source indicating a packet has been completely received from the channel medium by the device
</li>
<li><b>PhyRxDrop</b>: Trace source indicating a packet has been dropped by the device during reception
</li>
<li><b>PromiscSnifferRx</b>: Trace source simulating a wifi device in monitor mode sniffing all received frames
</li>
<li><b>PromiscSnifferTx</b>: Trace source simulating the capability of a wifi device in monitor mode to sniff all frames being transmitted
</li>
</ul>
*/
/*!
\fn static TypeId ns3::WifiPhyStateHelper::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiPhyStateHelper

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Phy/$%ns3::%YansWifiPhy/State</li>
</ul>
No Attributes defined for this type.<br>
TraceSources defined for this type:<br>
<ul>
<li><b>State</b>: The state of the PHY layer
</li>
<li><b>RxOk</b>: A packet has been received successfully.
</li>
<li><b>RxError</b>: A packet has been received unsuccessfully.
</li>
<li><b>Tx</b>: Packet transmission is starting.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::YansErrorRateModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::YansErrorRateModel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ErrorRateModel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ErrorRateModel

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::YansWifiPhy::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::YansWifiPhy

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Phy/$%ns3::%YansWifiPhy</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>EnergyDetectionThreshold</b>: The energy of a received signal should be higher than this threshold (dbm) to allow the PHY layer to detect the signal.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: -140</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>CcaMode1Threshold</b>: The energy of a received signal should be higher than this threshold (dbm) to allow the PHY layer to declare CCA BUSY state
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: -140</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxGain</b>: Transmission gain (dB).
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RxGain</b>: Reception gain (dB).
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxPowerLevels</b>: Number of transmission power levels available between TxPowerBase and TxPowerEnd included.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxPowerEnd</b>: Maximum available transmission level (dbm).
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 16.0206</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TxPowerStart</b>: Minimum available transmission level (dbm).
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 16.0206</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RxNoiseFigure</b>: Loss (dB) in the Signal-to-Noise-Ratio due to non-idealities in the receiver. According to Wikipedia (http://en.wikipedia.org/wiki/Noise_figure), this is "the difference in decibels (dB) between the noise output of the actual receiver to the noise output of an  ideal receiver with the same overall gain and bandwidth when the receivers  are connected to sources at the standard noise temperature T0 (usually 290 K)". For
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Standard</b>: The standard chosen configures a set of transmission modes and some PHY-specific constants.
  <ul>
    <li>Set with class: \ref ns3::EnumValue</li>
    <li>Underlying type: \ref 802.11a|802.11b|holland</li>
    <li>Initial value: 802.11a</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>State</b>: The state of the PHY layer
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::WifiPhyStateHelper ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiPhy:<br>
<ul>
<li><b>PhyTxBegin</b>: Trace source indicating a packet has begun transmitting over the channel medium
</li>
<li><b>PhyTxEnd</b>: Trace source indicating a packet has been completely transmitted over the channel
</li>
<li><b>PhyTxDrop</b>: Trace source indicating a packet has been dropped by the device during transmission
</li>
<li><b>PhyRxBegin</b>: Trace source indicating a packet has begun being received from the channel medium by the device
</li>
<li><b>PhyRxEnd</b>: Trace source indicating a packet has been completely received from the channel medium by the device
</li>
<li><b>PhyRxDrop</b>: Trace source indicating a packet has been dropped by the device during reception
</li>
<li><b>PromiscSnifferRx</b>: Trace source simulating a wifi device in monitor mode sniffing all received frames
</li>
<li><b>PromiscSnifferTx</b>: Trace source simulating the capability of a wifi device in monitor mode to sniff all frames being transmitted
</li>
</ul>
*/
/*!
\fn static TypeId ns3::WifiMacHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiMacHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::WifiMacTrailer::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiMacTrailer

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::WifiMacQueue::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiMacQueue

Attributes defined for this type:<br>
<ul>
<li><b>MaxPacketNumber</b>: If a packet arrives when there are already this number of packets, it is dropped.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 400</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxDelay</b>: If a packet stays longer than this delay in the queue, it is dropped.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::DcaTxop::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::DcaTxop

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%AdhocWifiMac/DcaTxop</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%NqapWifiMac/DcaTxop</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%NqstaWifiMac/DcaTxop</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>MinCw</b>: The minimum value of the contention window.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxCw</b>: The maximum value of the contention window.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1023</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Aifsn</b>: The AIFSN: the default value conforms to simple DCA.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MgtProbeRequestHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MgtProbeRequestHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MgtProbeResponseHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MgtProbeResponseHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MgtAssocRequestHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MgtAssocRequestHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MgtAssocResponseHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MgtAssocResponseHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::WifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::WifiRemoteStationManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiRemoteStationManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::AdhocWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::AdhocWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%AdhocWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DcaTxop</b>: The DcaTxop object
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::DcaTxop ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::NqapWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::NqapWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%NqapWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>BeaconInterval</b>: Delay between two beacons
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 100000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BeaconGeneration</b>: Whether or not beacons are generated.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>DcaTxop</b>: The DcaTxop object
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::DcaTxop ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::NqstaWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::NqstaWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%NqstaWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>ProbeRequestTimeout</b>: The interval between two consecutive probe request attempts.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 50000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AssocRequestTimeout</b>: The interval between two consecutive assoc request attempts.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 500000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMissedBeacons</b>: Number of beacons which much be consecutively missed before we attempt to restart association.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ActiveProbing</b>: If true, we send probe requests. If false, we don't.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>DcaTxop</b>: The DcaTxop object
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::DcaTxop ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Assoc</b>: Associated with an access point.
</li>
<li><b>DeAssoc</b>: Association with an access point lost.
</li>
</ul>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::WifiNetDevice::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiNetDevice

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Channel</b>: The channel attached to this device
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::WifiChannel ></li>
    <li>Flags: read </li>
  </ul> 
<li><b>Phy</b>: The PHY layer attached to this device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::WifiPhy ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Mac</b>: The MAC layer attached to this device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::WifiMac ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RemoteStationManager</b>: The station manager attached to this device.
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::WifiRemoteStationManager ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::NetDevice:<br>
<ul>
<li><b>Mtu</b>: The MAC-level Maximum Transmission Unit
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Flags: write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ArfWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ArfWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%ArfWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>TimerThreshold</b>: The 'timer' threshold in the ARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SuccessThreshold</b>: The minimum number of sucessfull transmissions to try a new rate.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::AarfWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::AarfWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%AarfWifiManager</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%ArfWifiManager/$%ns3::%AarfWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>SuccessK</b>: Multiplication factor for the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TimerK</b>: Multiplication factor for the timer threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSuccessThreshold</b>: Maximum value of the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 60</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinTimerThreshold</b>: The minimum value for the 'timer' threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinSuccessThreshold</b>: The minimum value for the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::ArfWifiManager:<br>
<ul>
<li><b>TimerThreshold</b>: The 'timer' threshold in the ARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SuccessThreshold</b>: The minimum number of sucessfull transmissions to try a new rate.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::IdealWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::IdealWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%IdealWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>BerThreshold</b>: The maximum Bit Error Rate acceptable at any transmission mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 1e-05</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::AmrrWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::AmrrWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%AmrrWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>UpdatePeriod</b>: The interval between decisions about rate control changes
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FailureRatio</b>: Ratio of minimum erronous transmissions needed to switch to a lower rate
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double 0:1</li>
    <li>Initial value: 0.333333</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SuccessRatio</b>: Ratio of maximum erronous transmissions needed to switch to a higher rate
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double 0:1</li>
    <li>Initial value: 0.1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSuccessThreshold</b>: Maximum number of consecutive success periods needed to switch to a higher rate
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinSuccessThreshold</b>: Minimum number of consecutive success periods needed to switch to a higher rate
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::OnoeWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::OnoeWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%OnoeWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>UpdatePeriod</b>: The interval between decisions about rate control changes
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 1000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RaiseThreshold</b>: Attempt to raise the rate if we hit that threshold
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AddCreditThreshold</b>: Add credit threshold
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RraaWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RraaWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%RraaWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Basic</b>: If true the RRAA-BASIC algorithm will be used, otherwise the RRAA wil be used
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Timeout</b>: Timeout for the RRAA BASIC loss estimaton block (s)
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 50000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor54mbps</b>: ewnd parameter for 54 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 40</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor48mbps</b>: ewnd parameter for 48 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 40</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor36mbps</b>: ewnd parameter for 36 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 40</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor24mbps</b>: ewnd parameter for 24 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 40</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor18mbps</b>: ewnd parameter for 18 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 20</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor12mbps</b>: ewnd parameter for 12 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 20</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor9mbps</b>: ewnd parameter for 9 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ewndFor6mbps</b>: ewnd parameter for 6 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 6</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor48mbps</b>: Pori parameter for 48 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.047</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor36mbps</b>: Pori parameter for 36 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.115</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor24mbps</b>: Pori parameter for 24 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.1681</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor18mbps</b>: Pori parameter for 18 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.1325</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor12mbps</b>: Pori parameter for 12 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.1861</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor9mbps</b>: Pori parameter for 9 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.1434</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>poriFor6mbps</b>: Pori parameter for 6 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.5</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor54mbps</b>: Pmtl parameter for 54 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.094</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor48mbps</b>: Pmtl parameter for 48 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.23</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor36mbps</b>: Pmtl parameter for 36 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.3363</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor24mbps</b>: Pmtl parameter for 24 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.265</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor18mbps</b>: Pmtl parameter for 18 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.3722</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor12mbps</b>: Pmtl parameter for 12 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.2868</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>pmtlFor9mbps</b>: Pmtl parameter for 9 Mbs data mode
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 0.3932</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::AarfcdWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::AarfcdWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%AarfcdWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>SuccessK</b>: Multiplication factor for the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TimerK</b>: Multiplication factor for the timer threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::DoubleValue</li>
    <li>Underlying type: \ref double -1.79769e+308:1.79769e+308</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSuccessThreshold</b>: Maximum value of the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 60</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinTimerThreshold</b>: The minimum value for the 'timer' threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinSuccessThreshold</b>: The minimum value for the success threshold in the AARF algorithm.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MinRtsWnd</b>: Minimum value for Rts window of Aarf-CD
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxRtsWnd</b>: Maximum value for Rts window of Aarf-CD
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 40</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsFailsAsDataFails</b>: If true the RTS failures will be treated by Aarf-CD as Data failures
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TurnOffRtsAfterRateDecrease</b>: If true the RTS mechanism will be turned off when the rate will be decreased
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>TurnOnRtsAfterRateIncrease</b>: If true the RTS mechanism will be turned on when the rate will be increased
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::CaraWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::CaraWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%CaraWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>ProbeThreshold</b>: The number of consecutive transmissions failure to activate the RTS probe.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FailureThreshold</b>: The number of consecutive transmissions failure to decrease the rate.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 2</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>SuccessThreshold</b>: The minimum number of sucessfull transmissions to try a new rate.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Timeout</b>: The 'timer' in the CARA algorithm
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 15</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::ConstantRateWifiManager::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::ConstantRateWifiManager

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/RemoteStationManager/$%ns3::%ConstantRateWifiManager</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>DataMode</b>: The transmission mode to use for every data packet transmission
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: wifia-6mbs</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ControlMode</b>: The transmission mode to use for every control packet transmission.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: wifia-6mbs</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiRemoteStationManager:<br>
<ul>
<li><b>IsLowLatency</b>: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSsrc</b>: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxSlrc</b>: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>RtsCtsThreshold</b>: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>FragmentationThreshold</b>: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>NonUnicastMode</b>: Wifi mode used for non-unicast transmissions.
  <ul>
    <li>Set with class: \ref WifiModeValue</li>
    <li>Underlying type: \ref WifiMode</li>
    <li>Initial value: Invalid-WifiMode</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::QadhocWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::QadhocWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QadhocWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>VO_EdcaTxopN</b>: Queue that manages packets belonging to AC_VO access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>VI_EdcaTxopN</b>: Queue that manages packets belonging to AC_VI access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BE_EdcaTxopN</b>: Queue that manages packets belonging to AC_BE access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BK_EdcaTxopN</b>: Queue that manages packets belonging to AC_BK access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::QapWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::QapWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QapWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>BeaconInterval</b>: Delay between two beacons
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 100000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BeaconGeneration</b>: Whether or not beacons are generated.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: true</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>VO_EdcaTxopN</b>: Queue that manages packets belonging to AC_VO access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>VI_EdcaTxopN</b>: Queue that manages packets belonging to AC_VI access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BE_EdcaTxopN</b>: Queue that manages packets belonging to AC_BE access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BK_EdcaTxopN</b>: Queue that manages packets belonging to AC_BK access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::QstaWifiMac::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::QstaWifiMac

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QstaWifiMac</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>ProbeRequestTimeout</b>: The interval between two consecutive probe request attempts.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 50000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AssocRequestTimeout</b>: The interval between two consecutive assoc request attempts.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 500000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMissedBeacons</b>: Number of beacons which much be consecutively missed before we attempt to restart association.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 10</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ActiveProbing</b>: If true, we send probe requests. If false, we don't.
  <ul>
    <li>Set with class: \ref BooleanValue</li>
    <li>Underlying type: \ref bool</li>
    <li>Initial value: false</li>
    <li>Flags: construct write </li>
  </ul> 
<li><b>VO_EdcaTxopN</b>: Queue that manages packets belonging to AC_VO access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>VI_EdcaTxopN</b>: Queue that manages packets belonging to AC_VI access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BE_EdcaTxopN</b>: Queue that manages packets belonging to AC_BE access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>BK_EdcaTxopN</b>: Queue that manages packets belonging to AC_BK access class
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::EdcaTxopN ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
Attributes defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>CtsTimeout</b>: When this timeout expires, the RTS/CTS handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>AckTimeout</b>: When this timeout expires, the DATA/ACK handshake has failed.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 75000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Sifs</b>: The value of the SIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 16000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>EifsNoDifs</b>: The value of EIFS-DIFS
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 60000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Slot</b>: The duration of a Slot.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 9000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Pifs</b>: The value of the PIFS constant.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 25000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxPropagationDelay</b>: The maximum propagation delay. Unused for now.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 3333ns</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxMsduSize</b>: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 1:2304</li>
    <li>Initial value: 2304</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Ssid</b>: The ssid we want to belong to.
  <ul>
    <li>Set with class: \ref SsidValue</li>
    <li>Underlying type: \ref Ssid</li>
    <li>Initial value: default</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
TraceSources defined in parent class ns3::WifiMac:<br>
<ul>
<li><b>MacTx</b>: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.
</li>
<li><b>MacTxDrop</b>: A packet has been dropped in the MAC layer before being queued for transmission.
</li>
<li><b>MacPromiscRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,
</li>
<li><b>MacRx</b>: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,
</li>
<li><b>MacRxDrop</b>: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::EdcaTxopN::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::EdcaTxopN

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QadhocWifiMac/BE_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QadhocWifiMac/BK_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QadhocWifiMac/VI_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QadhocWifiMac/VO_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QapWifiMac/BE_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QapWifiMac/BK_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QapWifiMac/VI_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QapWifiMac/VO_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QstaWifiMac/BE_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QstaWifiMac/BK_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QstaWifiMac/VI_EdcaTxopN</li>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Mac/$%ns3::%QstaWifiMac/VO_EdcaTxopN</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>MinCw</b>: The minimun value of the contention window.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 31</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxCw</b>: The maximum value of the contention window.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 1023</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>Aifsn</b>: The AIFSN: the default value conforms to simple DCA.
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 3</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MsduAggregator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MsduAggregator

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::AmsduSubframeHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::AmsduSubframeHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::MsduStandardAggregator::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::MsduStandardAggregator

Attributes defined for this type:<br>
<ul>
<li><b>MaxAmsduSize</b>: Max length in byte of an A-MSDU
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint32_t 0:4294967295</li>
    <li>Initial value: 7935</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::V4Ping::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::V4Ping

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%V4Ping</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>Remote</b>: The address of the machine we want to ping.
  <ul>
    <li>Set with class: \ref Ipv4AddressValue</li>
    <li>Underlying type: \ref Ipv4Address</li>
    <li>Initial value: 102.102.102.102</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
TraceSources defined for this type:<br>
<ul>
<li><b>Rtt</b>: The rtt calculated by the ping.
</li>
</ul>
*/
/*!
\fn static TypeId ns3::rapidnet::RapidNetApplicationBase::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::RapidNetApplicationBase

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::RapidNetTCPHeader::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::RapidNetTCPHeader

No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::pingpong::Pingpong::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::pingpong::Pingpong

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%pingpong::%Pingpong</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%pingpong::%Pingpong</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::reachable::Reachable::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::reachable::Reachable

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%reachable::%Reachable</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%reachable::%Reachable</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::pathvector::Pathvector::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::pathvector::Pathvector

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%pathvector::%Pathvector</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%pathvector::%Pathvector</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::reachable2::Reachable2::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::reachable2::Reachable2

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%reachable2::%Reachable2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%reachable2::%Reachable2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%reachable2::%Reachable2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%reachable2::%Reachable2</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::discovery::Discovery::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::discovery::Discovery

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::pathvector2::Pathvector2::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::pathvector2::Pathvector2

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%pathvector2::%Pathvector2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%pathvector2::%Pathvector2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%pathvector2::%Pathvector2</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%pathvector2::%Pathvector2</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::discoveryepidemic::DiscoveryEpidemic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::discoveryepidemic::DiscoveryEpidemic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discoveryepidemic::%DiscoveryEpidemic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discoveryepidemic::%DiscoveryEpidemic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::simlsperiodic::SimLsPeriodic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::simlsperiodic::SimLsPeriodic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simlsperiodic::%SimLsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%simlsperiodic::%SimLsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simlsperiodic::%SimLsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%simlsperiodic::%SimLsPeriodic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::simlstriggered::SimLsTriggered::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::simlstriggered::SimLsTriggered

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simlstriggered::%SimLsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%simlstriggered::%SimLsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simlstriggered::%SimLsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%simlstriggered::%SimLsTriggered</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::simhslsperiodic::SimHslsPeriodic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::simhslsperiodic::SimHslsPeriodic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simhslsperiodic::%SimHslsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%simhslsperiodic::%SimHslsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simhslsperiodic::%SimHslsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%simhslsperiodic::%SimHslsPeriodic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::simhslstriggered::SimHslsTriggered::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::simhslstriggered::SimHslsTriggered

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simhslstriggered::%SimHslsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%simhslstriggered::%SimHslsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%simhslstriggered::%SimHslsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%simhslstriggered::%SimHslsTriggered</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::emulsperiodic::EmuLsPeriodic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::emulsperiodic::EmuLsPeriodic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%emulsperiodic::%EmuLsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%emulsperiodic::%EmuLsPeriodic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::emulstriggered::EmuLsTriggered::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::emulstriggered::EmuLsTriggered

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%emulstriggered::%EmuLsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%emulstriggered::%EmuLsTriggered</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::emuhslsperiodic::EmuHslsPeriodic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::emuhslsperiodic::EmuHslsPeriodic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%emuhslsperiodic::%EmuHslsPeriodic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%emuhslsperiodic::%EmuHslsPeriodic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::emuhslstriggered::EmuHslsTriggered::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::emuhslstriggered::EmuHslsTriggered

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%emuhslstriggered::%EmuHslsTriggered</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%emuhslstriggered::%EmuHslsTriggered</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::dsr::Dsr::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::dsr::Dsr

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%dsr::%Dsr</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%dsr::%Dsr</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discovery::%Discovery/$%ns3::%rapidnet::%dsr::%Dsr</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%dsr::%Dsr</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::epidemic::Epidemic::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::epidemic::Epidemic

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%discoveryepidemic::%DiscoveryEpidemic/$%ns3::%rapidnet::%epidemic::%Epidemic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%epidemic::%Epidemic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%discoveryepidemic::%DiscoveryEpidemic/$%ns3::%rapidnet::%epidemic::%Epidemic</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%epidemic::%Epidemic</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::chord::Chord::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::chord::Chord

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%chord::%Chord</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%chord::%Chord</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::mincostprov::MincostProv::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::mincostprov::MincostProv

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%mincostprov::%MincostProv</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%mincostprov::%MincostProv</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::mincostquery::MincostQuery::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::mincostquery::MincostQuery

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%mincostquery::%MincostQuery</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%mincostquery::%MincostQuery</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::messf::Messf::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::messf::Messf

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%messf::%Messf</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%messf::%Messf</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::messfquery::MessfQuery::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::messfquery::MessfQuery

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%messfquery::%MessfQuery</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%messfquery::%MessfQuery</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::acquaintance::Acquaintance::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::acquaintance::Acquaintance

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%acquaintance::%Acquaintance</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%acquaintance::%Acquaintance</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::rapidnet::acquaintancequery::AcquaintanceQuery::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::rapidnet::acquaintancequery::AcquaintanceQuery

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%RapidNetApplicationBase/$%ns3::%rapidnet::%acquaintancequery::%AcquaintanceQuery</li>
<li>/NodeList/[i]/ApplicationList/[i]/$%ns3::%rapidnet::%acquaintancequery::%AcquaintanceQuery</li>
</ul>
No Attributes defined for this type.<br>
Attributes defined in parent class ns3::rapidnet::RapidNetApplicationBase:<br>
<ul>
<li><b>RapidNetPort</b>: Port for RapidNet application
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 11111</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>MaxUDPTxSize</b>: Max size of UDP packet, beyond which switch is made to TCP protocol
  <ul>
    <li>Set with class: \ref ns3::UintegerValue</li>
    <li>Underlying type: \ref uint16_t 0:65535</li>
    <li>Initial value: 1500</li>
    <li>Flags: construct write read </li>
  </ul> 
<li><b>ConnectionInactivityTimeout</b>: Timeout value for tearing down inactive TCP connections.
  <ul>
    <li>Set with class: \ref TimeValue</li>
    <li>Underlying type: \ref Time</li>
    <li>Initial value: 10000000000ns</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::WifiChannel::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::WifiChannel

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/DeviceList/[i]/$%ns3::%WifiNetDevice/Channel</li>
</ul>
No Attributes defined for this type.<br>
No TraceSources defined for this type.<br>
*/
/*!
\fn static TypeId ns3::Ipv4Interface::GetTypeId (void)
\brief This method returns the TypeId associated to \ref ns3::Ipv4Interface

This object is accessible through the following paths with Config::Set and Config::Connect:
<ul>
<li>/NodeList/[i]/$%ns3::%Ipv4L3Protocol/InterfaceList/[i]</li>
</ul>
Attributes defined for this type:<br>
<ul>
<li><b>ArpCache</b>: The arp cache for this ipv4 interface
  <ul>
    <li>Set with class: \ref ns3::PointerValue</li>
    <li>Underlying type: \ref ns3::Ptr< ns3::ArpCache ></li>
    <li>Initial value: 0</li>
    <li>Flags: construct write read </li>
  </ul> 
</ul>
No TraceSources defined for this type.<br>
*/
/*!
\ingroup core
\defgroup TraceSourceList The list of all trace sources.
<b>ns3::Queue</b><br>
<ul>
<li>Enqueue: Enqueue a packet in the queue.</li>
<li>Dequeue: Dequeue a packet from the queue.</li>
<li>Drop: Drop a packet stored in the queue.</li>
</ul>
<b>ns3::Ipv4L3Protocol</b><br>
<ul>
<li>Tx: Send ipv4 packet to outgoing interface.</li>
<li>Rx: Receive ipv4 packet from incoming interface.</li>
<li>Drop: Drop ipv4 packet</li>
</ul>
<b>ns3::ArpCache</b><br>
<ul>
<li>Drop: Packet dropped due to ArpCache entry in WaitReply expiring.</li>
</ul>
<b>ns3::ArpL3Protocol</b><br>
<ul>
<li>Drop: Packet dropped because not enough room in pending queue for a specific cache entry.</li>
</ul>
<b>ns3::TcpSocketImpl</b><br>
<ul>
<li>CongestionWindow: The TCP connection's congestion window</li>
</ul>
<b>ns3::PointToPointNetDevice</b><br>
<ul>
<li>MacTx: Trace source indicating a packet has arrived for transmission by this device</li>
<li>MacTxDrop: Trace source indicating a packet has been dropped by the device before transmission</li>
<li>MacPromiscRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,</li>
<li>MacRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,</li>
<li>PhyTxBegin: Trace source indicating a packet has begun transmitting over the channel</li>
<li>PhyTxEnd: Trace source indicating a packet has been completely transmitted over the channel</li>
<li>PhyTxDrop: Trace source indicating a packet has been dropped by the device during transmission</li>
<li>PhyRxEnd: Trace source indicating a packet has been completely received by the device</li>
<li>PhyRxDrop: Trace source indicating a packet has been dropped by the device during reception</li>
<li>Sniffer: Trace source simulating a non-promiscuous packet sniffer attached to the device</li>
<li>PromiscSniffer: Trace source simulating a promiscuous packet sniffer attached to the device</li>
</ul>
<b>ns3::CsmaNetDevice</b><br>
<ul>
<li>MacTx: Trace source indicating a packet has arrived for transmission by this device</li>
<li>MacTxDrop: Trace source indicating a packet has been dropped by the device before transmission</li>
<li>MacPromiscRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,</li>
<li>MacRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,</li>
<li>MacTxBackoff: Trace source indicating a packet has been delayed by the CSMA backoff process</li>
<li>PhyTxBegin: Trace source indicating a packet has begun transmitting over the channel</li>
<li>PhyTxEnd: Trace source indicating a packet has been completely transmitted over the channel</li>
<li>PhyTxDrop: Trace source indicating a packet has been dropped by the device during transmission</li>
<li>PhyRxEnd: Trace source indicating a packet has been completely received by the device</li>
<li>PhyRxDrop: Trace source indicating a packet has been dropped by the device during reception</li>
<li>Sniffer: Trace source simulating a non-promiscuous packet sniffer attached to the device</li>
<li>PromiscSniffer: Trace source simulating a promiscuous packet sniffer attached to the device</li>
</ul>
<b>ns3::EmuNetDevice</b><br>
<ul>
<li>MacTx: Trace source indicating a packet has arrived for transmission by this device</li>
<li>MacTxDrop: Trace source indicating a packet has been dropped by the device before transmission</li>
<li>MacPromiscRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,</li>
<li>MacRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,</li>
<li>Sniffer: Trace source simulating a non-promiscuous packet sniffer attached to the device</li>
<li>PromiscSniffer: Trace source simulating a promiscuous packet sniffer attached to the device</li>
</ul>
<b>ns3::VirtualNetDevice</b><br>
<ul>
<li>MacTx: Trace source indicating a packet has arrived for transmission by this device</li>
<li>MacPromiscRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,</li>
<li>MacRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,</li>
<li>Sniffer: Trace source simulating a non-promiscuous packet sniffer attached to the device</li>
<li>PromiscSniffer: Trace source simulating a promiscuous packet sniffer attached to the device</li>
</ul>
<b>ns3::OnOffApplication</b><br>
<ul>
<li>Tx: A new packet is created and is sent</li>
</ul>
<b>ns3::PacketSink</b><br>
<ul>
<li>Rx: A packet has been received</li>
</ul>
<b>ns3::olsr::RoutingProtocol</b><br>
<ul>
<li>Rx: Receive OLSR packet.</li>
<li>Tx: Send OLSR packet.</li>
<li>RoutingTableChanged: The OLSR routing table has changed.</li>
</ul>
<b>ns3::MobilityModel</b><br>
<ul>
<li>CourseChange: The value of the position and/or velocity vector changed</li>
</ul>
<b>ns3::WifiPhy</b><br>
<ul>
<li>PhyTxBegin: Trace source indicating a packet has begun transmitting over the channel medium</li>
<li>PhyTxEnd: Trace source indicating a packet has been completely transmitted over the channel</li>
<li>PhyTxDrop: Trace source indicating a packet has been dropped by the device during transmission</li>
<li>PhyRxBegin: Trace source indicating a packet has begun being received from the channel medium by the device</li>
<li>PhyRxEnd: Trace source indicating a packet has been completely received from the channel medium by the device</li>
<li>PhyRxDrop: Trace source indicating a packet has been dropped by the device during reception</li>
<li>PromiscSnifferRx: Trace source simulating a wifi device in monitor mode sniffing all received frames</li>
<li>PromiscSnifferTx: Trace source simulating the capability of a wifi device in monitor mode to sniff all frames being transmitted</li>
</ul>
<b>ns3::WifiPhyStateHelper</b><br>
<ul>
<li>State: The state of the PHY layer</li>
<li>RxOk: A packet has been received successfully.</li>
<li>RxError: A packet has been received unsuccessfully.</li>
<li>Tx: Packet transmission is starting.</li>
</ul>
<b>ns3::WifiMac</b><br>
<ul>
<li>MacTx: A packet has been received from higher layers and is being processed in preparation for queueing for transmission.</li>
<li>MacTxDrop: A packet has been dropped in the MAC layer before being queued for transmission.</li>
<li>MacPromiscRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a promiscuous trace,</li>
<li>MacRx: A packet has been received by this device, has been passed up from the physical layer and is being forwarded up the local protocol stack.  This is a non-promiscuous trace,</li>
<li>MacRxDrop: A packet has been dropped in the MAC layer after it has been passed up from the physical layer.</li>
</ul>
<b>ns3::NqstaWifiMac</b><br>
<ul>
<li>Assoc: Associated with an access point.</li>
<li>DeAssoc: Association with an access point lost.</li>
</ul>
<b>ns3::V4Ping</b><br>
<ul>
<li>Rtt: The rtt calculated by the ping.</li>
</ul>
*/
/*!
\ingroup core
\defgroup AttributeList The list of all attributes.
<b>ns3::RealtimeSimulatorImpl</b><br>
<ul>
<li>SynchronizationMode: What to do if the simulation cannot keep up with real time.</li>
<li>HardLimit: Maximum acceptable real-time jitter (used in conjunction with SynchronizationMode=HardLimit)</li>
</ul>
<b>ns3::ErrorModel</b><br>
<ul>
<li>IsEnabled: Whether this ErrorModel is enabled or not.</li>
</ul>
<b>ns3::RateErrorModel</b><br>
<ul>
<li>ErrorUnit: The error unit</li>
<li>ErrorRate: The error rate.</li>
<li>RanVar: The decision variable attached to this error model.</li>
</ul>
<b>ns3::ConfigStore</b><br>
<ul>
<li>Mode: Configuration mode</li>
<li>Filename: The file where the configuration should be saved to or loaded from.</li>
<li>FileFormat: Type of file format</li>
</ul>
<b>ns3::Node</b><br>
<ul>
<li>DeviceList: The list of devices associated to this Node.</li>
<li>ApplicationList: The list of applications associated to this Node.</li>
<li>Id: The id (unique integer) of this Node.</li>
</ul>
<b>ns3::NetDevice</b><br>
<ul>
<li>Mtu: The MAC-level Maximum Transmission Unit</li>
</ul>
<b>ns3::DropTailQueue</b><br>
<ul>
<li>Mode: Whether to use Bytes (see MaxBytes) or Packets (see MaxPackets) as the maximum queue size metric.</li>
<li>MaxPackets: The maximum number of packets accepted by this DropTailQueue.</li>
<li>MaxBytes: The maximum number of bytes accepted by this DropTailQueue.</li>
</ul>
<b>ns3::NodeListPriv</b><br>
<ul>
<li>NodeList: The list of all nodes created during the simulation.</li>
</ul>
<b>ns3::UdpSocket</b><br>
<ul>
<li>RcvBufSize: UdpSocket maximum receive buffer size (bytes)</li>
<li>IpTtl: socket-specific TTL for unicast IP packets (if non-zero)</li>
<li>IpMulticastTtl: socket-specific TTL for multicast IP packets (if non-zero)</li>
<li>IpMulticastIf: interface index for outgoing multicast on this socket; -1 indicates to use default interface</li>
<li>IpMulticastLoop: whether outgoing multicast sent also to loopback interface</li>
<li>MtuDiscover: If enabled, every outgoing ip packet will have the DF flag set.</li>
</ul>
<b>ns3::TcpSocket</b><br>
<ul>
<li>SndBufSize: TcpSocket maximum transmit buffer size (bytes)</li>
<li>RcvBufSize: TcpSocket maximum receive buffer size (bytes)</li>
<li>SegmentSize: TCP maximum segment size in bytes (may be adjusted based on MTU discovery)</li>
<li>SlowStartThreshold: TCP slow start threshold (bytes)</li>
<li>InitialCwnd: TCP initial congestion window size (segments)</li>
<li>ConnTimeout: TCP retransmission timeout when opening connection (seconds)</li>
<li>ConnCount: Number of connection attempts (SYN retransmissions) before returning failure</li>
<li>DelAckTimeout: Timeout value for TCP delayed acks, in seconds</li>
<li>DelAckCount: Number of packets to wait before sending a TCP ack</li>
</ul>
<b>ns3::Ipv4</b><br>
<ul>
<li>IpForward: Globally enable or disable IP forwarding for all current and future Ipv4 devices.</li>
</ul>
<b>ns3::Ipv4L4Protocol</b><br>
<ul>
<li>ProtocolNumber: The Ipv4 protocol number.</li>
</ul>
<b>ns3::Ipv4L3Protocol</b><br>
<ul>
<li>DefaultTtl: The TTL value set by default on all outgoing packets generated on this node.</li>
<li>InterfaceList: The set of Ipv4 interfaces associated to this Ipv4 stack.</li>
</ul>
<b>ns3::RttMeanDeviation</b><br>
<ul>
<li>Gain: XXX</li>
</ul>
<b>ns3::RttEstimator</b><br>
<ul>
<li>MaxMultiplier: XXX</li>
<li>InitialEstimation: XXX</li>
<li>MinRTO: Minimum retransmit timeout value</li>
</ul>
<b>ns3::TcpL4Protocol</b><br>
<ul>
<li>RttEstimatorFactory: How RttEstimator objects are created.</li>
<li>SocketList: The list of sockets associated to this protocol.</li>
</ul>
<b>ns3::ArpCache</b><br>
<ul>
<li>AliveTimeout: When this timeout expires, the matching cache entry needs refreshing</li>
<li>DeadTimeout: When this timeout expires, a new attempt to resolve the matching entry is made</li>
<li>WaitReplyTimeout: When this timeout expires, the cache entries will be scanned and entries in WaitReply state will resend ArpRequest unless MaxRetries has been exceeded, in which case the entry is marked dead</li>
<li>MaxRetries: Number of retransmissions of ArpRequest before marking dead</li>
<li>PendingQueueSize: The size of the queue for packets pending an arp reply.</li>
</ul>
<b>ns3::ArpL3Protocol</b><br>
<ul>
<li>CacheList: The list of ARP caches</li>
</ul>
<b>ns3::Ipv4RawSocketImpl</b><br>
<ul>
<li>Protocol: Protocol number to match.</li>
<li>IcmpFilter: Any icmp header whose type field matches a bit in this filter is dropped.</li>
</ul>
<b>ns3::PointToPointNetDevice</b><br>
<ul>
<li>Address: The MAC address of this device.</li>
<li>FrameSize: The maximum size of a packet sent over this device.</li>
<li>DataRate: The default data rate for point to point links</li>
<li>ReceiveErrorModel: The receiver error model used to simulate packet loss</li>
<li>InterframeGap: The time to wait between packet (frame) transmissions</li>
<li>TxQueue: A queue to use as the transmit queue in the device.</li>
</ul>
<b>ns3::PointToPointChannel</b><br>
<ul>
<li>Delay: Transmission delay through the channel</li>
</ul>
<b>ns3::CsmaNetDevice</b><br>
<ul>
<li>Address: The MAC address of this device.</li>
<li>FrameSize: The maximum size of a packet sent over this device.</li>
<li>EncapsulationMode: The link-layer encapsulation type to use.</li>
<li>SendEnable: Enable or disable the transmitter section of the device.</li>
<li>ReceiveEnable: Enable or disable the receiver section of the device.</li>
<li>ReceiveErrorModel: The receiver error model used to simulate packet loss</li>
<li>TxQueue: A queue to use as the transmit queue in the device.</li>
</ul>
<b>ns3::CsmaChannel</b><br>
<ul>
<li>DataRate: The transmission data rate to be provided to devices connected to the channel</li>
<li>Delay: Transmission delay through the channel</li>
</ul>
<b>ns3::EmuNetDevice</b><br>
<ul>
<li>Address: The ns-3 MAC address of this (virtual) device.</li>
<li>DeviceName: The name of the underlying real device (e.g. eth1).</li>
<li>Start: The simulation time at which to spin up the device thread.</li>
<li>Stop: The simulation time at which to tear down the device thread.</li>
<li>TxQueue: A queue to use as the transmit queue in the device.</li>
</ul>
<b>ns3::BridgeNetDevice</b><br>
<ul>
<li>EnableLearning: Enable the learning mode of the Learning Bridge</li>
<li>ExpirationTime: Time it takes for learned MAC state entry to expire.</li>
</ul>
<b>ns3::TapBridge</b><br>
<ul>
<li>DeviceName: The name of the tap device to create.</li>
<li>Gateway: The IP address of the default gateway to assign to the host machine, when in ConfigureLocal mode.</li>
<li>IpAddress: The IP address to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered IP address of the simulated device.</li>
<li>MacAddress: The MAC address to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered MAC address of the simulated device.</li>
<li>Netmask: The network mask to assign to the tap device, when in ConfigureLocal mode.  This address will override the discovered MAC address of the simulated device.</li>
<li>Start: The simulation time at which to spin up the tap device read thread.</li>
<li>Stop: The simulation time at which to tear down the tap device read thread.</li>
<li>Mode: The operating and configuration mode to use.</li>
</ul>
<b>ns3::OnOffApplication</b><br>
<ul>
<li>DataRate: The data rate in on state.</li>
<li>PacketSize: The size of packets sent in on state</li>
<li>Remote: The address of the destination</li>
<li>OnTime: A RandomVariable used to pick the duration of the 'On' state.</li>
<li>OffTime: A RandomVariable used to pick the duration of the 'Off' state.</li>
<li>MaxBytes: The total number of bytes to send. Once these bytes are sent, no packet is sent again, even in on state. The value zero means that there is no limit.</li>
<li>Protocol: The type of protocol to use.</li>
</ul>
<b>ns3::PacketSink</b><br>
<ul>
<li>Local: The Address on which to Bind the rx socket.</li>
<li>Protocol: The type id of the protocol to use for the rx socket.</li>
</ul>
<b>ns3::UdpEchoClient</b><br>
<ul>
<li>MaxPackets: The maximum number of packets the application will send</li>
<li>Interval: The time to wait between packets</li>
<li>RemoteAddress: The destination Ipv4Address of the outbound packets</li>
<li>RemotePort: The destination port of the outbound packets</li>
<li>PacketSize: Size of echo data in outbound packets</li>
</ul>
<b>ns3::UdpEchoServer</b><br>
<ul>
<li>Port: Port on which we listen for incoming packets.</li>
</ul>
<b>ns3::olsr::RoutingProtocol</b><br>
<ul>
<li>HelloInterval: HELLO messages emission interval.</li>
<li>TcInterval: TC messages emission interval.</li>
<li>MidInterval: MID messages emission interval.  Normally it is equal to TcInterval.</li>
<li>Willingness: Willingness of a node to carry and forward traffic for other nodes.</li>
</ul>
<b>ns3::HierarchicalMobilityModel</b><br>
<ul>
<li>Child: The child mobility model.</li>
<li>Parent: The parent mobility model.</li>
</ul>
<b>ns3::MobilityModel</b><br>
<ul>
<li>Position: The current position of the mobility model.</li>
<li>Velocity: The current velocity of the mobility model.</li>
</ul>
<b>ns3::GridPositionAllocator</b><br>
<ul>
<li>GridWidth: The number of objects layed out on a line.</li>
<li>MinX: The x coordinate where the grid starts.</li>
<li>MinY: The y coordinate where the grid starts.</li>
<li>DeltaX: The x space between objects.</li>
<li>DeltaY: The y space between objects.</li>
<li>LayoutType: The type of layout.</li>
</ul>
<b>ns3::RandomRectanglePositionAllocator</b><br>
<ul>
<li>X: A random variable which represents the x coordinate of a position in a random rectangle.</li>
<li>Y: A random variable which represents the y coordinate of a position in a random rectangle.</li>
</ul>
<b>ns3::RandomDiscPositionAllocator</b><br>
<ul>
<li>Theta: A random variable which represents the angle (gradients) of a position in a random disc.</li>
<li>Rho: A random variable which represents the radius of a position in a random disc.</li>
<li>X: The x coordinate of the center of the random position disc.</li>
<li>Y: The y coordinate of the center of the random position disc.</li>
</ul>
<b>ns3::RandomWaypointMobilityModel</b><br>
<ul>
<li>Speed: A random variable used to pick the speed of a random waypoint model.</li>
<li>Pause: A random variable used to pick the pause of a random waypoint model.</li>
<li>PositionAllocator: The position model used to pick a destination point.</li>
</ul>
<b>ns3::RandomWalk2dMobilityModel</b><br>
<ul>
<li>Bounds: Bounds of the area to cruise.</li>
<li>Time: Change current direction and speed after moving for this delay.</li>
<li>Distance: Change current direction and speed after moving for this distance.</li>
<li>Mode: The mode indicates the condition used to change the current speed and direction</li>
<li>Direction: A random variable used to pick the direction (gradients).</li>
<li>Speed: A random variable used to pick the speed (m/s).</li>
</ul>
<b>ns3::RandomDirection2dMobilityModel</b><br>
<ul>
<li>Bounds: The 2d bounding area</li>
<li>Speed: A random variable to control the speed (m/s).</li>
<li>Pause: A random variable to control the pause (s).</li>
</ul>
<b>ns3::RandomPropagationDelayModel</b><br>
<ul>
<li>Variable: The random variable which generates random delays (s).</li>
</ul>
<b>ns3::ConstantSpeedPropagationDelayModel</b><br>
<ul>
<li>Speed: The speed (m/s)</li>
</ul>
<b>ns3::RandomPropagationLossModel</b><br>
<ul>
<li>Variable: The random variable used to pick a loss everytime CalcRxPower is invoked.</li>
</ul>
<b>ns3::FriisPropagationLossModel</b><br>
<ul>
<li>Lambda: The wavelength  (default is 5.15 GHz at 300 000 km/s).</li>
<li>SystemLoss: The system loss</li>
<li>MinDistance: The distance under which the propagation model refuses to give results (m)</li>
</ul>
<b>ns3::LogDistancePropagationLossModel</b><br>
<ul>
<li>Exponent: The exponent of the Path Loss propagation model</li>
<li>ReferenceDistance: The distance at which the reference loss is calculated (m)</li>
<li>ReferenceLoss: The reference loss at reference distance (dB). (Default is Friis at 1m with 5.15 GHz)</li>
</ul>
<b>ns3::ThreeLogDistancePropagationLossModel</b><br>
<ul>
<li>Distance0: Beginning of the first (near) distance field</li>
<li>Distance1: Beginning of the second (middle) distance field.</li>
<li>Distance2: Beginning of the third (far) distance field.</li>
<li>Exponent0: The exponent for the first field.</li>
<li>Exponent1: The exponent for the second field.</li>
<li>Exponent2: The exponent for the third field.</li>
<li>ReferenceLoss: The reference loss at distance d0 (dB). (Default is Friis at 1m with 5.15 GHz)</li>
</ul>
<b>ns3::NakagamiPropagationLossModel</b><br>
<ul>
<li>Distance1: Beginning of the second distance field. Default is 80m.</li>
<li>Distance2: Beginning of the third distance field. Default is 200m.</li>
<li>m0: m0 for distances smaller than Distance1. Default is 1.5.</li>
<li>m1: m1 for distances smaller than Distance2. Default is 0.75.</li>
<li>m2: m2 for distances greater than Distance2. Default is 0.75.</li>
</ul>
<b>ns3::FixedRssLossModel</b><br>
<ul>
<li>Rss: The fixed receiver Rss.</li>
</ul>
<b>ns3::JakesPropagationLossModel</b><br>
<ul>
<li>NumberOfRaysPerPath: The number of rays to use by default for compute the fading coeficent for a given path (default is 1)</li>
<li>NumberOfOscillatorsPerRay: The number of oscillators to use by default for compute the coeficent for a given ray of a given path (default is 4)</li>
<li>DopplerFreq: The doppler frequency in Hz (f_d = v / lambda = v * f / c), the default is 0)</li>
<li>Distribution: The distribution to choose the initial phases.</li>
</ul>
<b>ns3::YansWifiPhy</b><br>
<ul>
<li>EnergyDetectionThreshold: The energy of a received signal should be higher than this threshold (dbm) to allow the PHY layer to detect the signal.</li>
<li>CcaMode1Threshold: The energy of a received signal should be higher than this threshold (dbm) to allow the PHY layer to declare CCA BUSY state</li>
<li>TxGain: Transmission gain (dB).</li>
<li>RxGain: Reception gain (dB).</li>
<li>TxPowerLevels: Number of transmission power levels available between TxPowerBase and TxPowerEnd included.</li>
<li>TxPowerEnd: Maximum available transmission level (dbm).</li>
<li>TxPowerStart: Minimum available transmission level (dbm).</li>
<li>RxNoiseFigure: Loss (dB) in the Signal-to-Noise-Ratio due to non-idealities in the receiver. According to Wikipedia (http://en.wikipedia.org/wiki/Noise_figure), this is "the difference in decibels (dB) between the noise output of the actual receiver to the noise output of an  ideal receiver with the same overall gain and bandwidth when the receivers  are connected to sources at the standard noise temperature T0 (usually 290 K)". For</li>
<li>Standard: The standard chosen configures a set of transmission modes and some PHY-specific constants.</li>
<li>State: The state of the PHY layer</li>
</ul>
<b>ns3::WifiMacQueue</b><br>
<ul>
<li>MaxPacketNumber: If a packet arrives when there are already this number of packets, it is dropped.</li>
<li>MaxDelay: If a packet stays longer than this delay in the queue, it is dropped.</li>
</ul>
<b>ns3::DcaTxop</b><br>
<ul>
<li>MinCw: The minimum value of the contention window.</li>
<li>MaxCw: The maximum value of the contention window.</li>
<li>Aifsn: The AIFSN: the default value conforms to simple DCA.</li>
</ul>
<b>ns3::WifiMac</b><br>
<ul>
<li>CtsTimeout: When this timeout expires, the RTS/CTS handshake has failed.</li>
<li>AckTimeout: When this timeout expires, the DATA/ACK handshake has failed.</li>
<li>Sifs: The value of the SIFS constant.</li>
<li>EifsNoDifs: The value of EIFS-DIFS</li>
<li>Slot: The duration of a Slot.</li>
<li>Pifs: The value of the PIFS constant.</li>
<li>MaxPropagationDelay: The maximum propagation delay. Unused for now.</li>
<li>MaxMsduSize: The maximum size of an MSDU accepted by the MAC layer.This value conforms to the specification.</li>
<li>Ssid: The ssid we want to belong to.</li>
</ul>
<b>ns3::WifiRemoteStationManager</b><br>
<ul>
<li>IsLowLatency: If true, we attempt to modelize a so-called low-latency device: a device where decisions about tx parameters can be made on a per-packet basis and feedback about the transmission of each packet is obtained before sending the next. Otherwise, we modelize a  high-latency device, that is a device where we cannot update our decision about tx parameters after every packet transmission.</li>
<li>MaxSsrc: The maximum number of retransmission attempts for an RTS. This value will not have any effect on some rate control algorithms.</li>
<li>MaxSlrc: The maximum number of retransmission attempts for a DATA packet. This value will not have any effect on some rate control algorithms.</li>
<li>RtsCtsThreshold: If a data packet is bigger than this value, we use an RTS/CTS handshake before sending the data. This value will not have any effect on some rate control algorithms.</li>
<li>FragmentationThreshold: If a data packet is bigger than this value, we fragment it such that the size of the fragments are equal or smaller than this value. This value will not have any effect on some rate control algorithms.</li>
<li>NonUnicastMode: Wifi mode used for non-unicast transmissions.</li>
</ul>
<b>ns3::AdhocWifiMac</b><br>
<ul>
<li>DcaTxop: The DcaTxop object</li>
</ul>
<b>ns3::NqapWifiMac</b><br>
<ul>
<li>BeaconInterval: Delay between two beacons</li>
<li>BeaconGeneration: Whether or not beacons are generated.</li>
<li>DcaTxop: The DcaTxop object</li>
</ul>
<b>ns3::NqstaWifiMac</b><br>
<ul>
<li>ProbeRequestTimeout: The interval between two consecutive probe request attempts.</li>
<li>AssocRequestTimeout: The interval between two consecutive assoc request attempts.</li>
<li>MaxMissedBeacons: Number of beacons which much be consecutively missed before we attempt to restart association.</li>
<li>ActiveProbing: If true, we send probe requests. If false, we don't.</li>
<li>DcaTxop: The DcaTxop object</li>
</ul>
<b>ns3::WifiNetDevice</b><br>
<ul>
<li>Channel: The channel attached to this device</li>
<li>Phy: The PHY layer attached to this device.</li>
<li>Mac: The MAC layer attached to this device.</li>
<li>RemoteStationManager: The station manager attached to this device.</li>
</ul>
<b>ns3::ArfWifiManager</b><br>
<ul>
<li>TimerThreshold: The 'timer' threshold in the ARF algorithm.</li>
<li>SuccessThreshold: The minimum number of sucessfull transmissions to try a new rate.</li>
</ul>
<b>ns3::AarfWifiManager</b><br>
<ul>
<li>SuccessK: Multiplication factor for the success threshold in the AARF algorithm.</li>
<li>TimerK: Multiplication factor for the timer threshold in the AARF algorithm.</li>
<li>MaxSuccessThreshold: Maximum value of the success threshold in the AARF algorithm.</li>
<li>MinTimerThreshold: The minimum value for the 'timer' threshold in the AARF algorithm.</li>
<li>MinSuccessThreshold: The minimum value for the success threshold in the AARF algorithm.</li>
</ul>
<b>ns3::IdealWifiManager</b><br>
<ul>
<li>BerThreshold: The maximum Bit Error Rate acceptable at any transmission mode</li>
</ul>
<b>ns3::AmrrWifiManager</b><br>
<ul>
<li>UpdatePeriod: The interval between decisions about rate control changes</li>
<li>FailureRatio: Ratio of minimum erronous transmissions needed to switch to a lower rate</li>
<li>SuccessRatio: Ratio of maximum erronous transmissions needed to switch to a higher rate</li>
<li>MaxSuccessThreshold: Maximum number of consecutive success periods needed to switch to a higher rate</li>
<li>MinSuccessThreshold: Minimum number of consecutive success periods needed to switch to a higher rate</li>
</ul>
<b>ns3::OnoeWifiManager</b><br>
<ul>
<li>UpdatePeriod: The interval between decisions about rate control changes</li>
<li>RaiseThreshold: Attempt to raise the rate if we hit that threshold</li>
<li>AddCreditThreshold: Add credit threshold</li>
</ul>
<b>ns3::RraaWifiManager</b><br>
<ul>
<li>Basic: If true the RRAA-BASIC algorithm will be used, otherwise the RRAA wil be used</li>
<li>Timeout: Timeout for the RRAA BASIC loss estimaton block (s)</li>
<li>ewndFor54mbps: ewnd parameter for 54 Mbs data mode</li>
<li>ewndFor48mbps: ewnd parameter for 48 Mbs data mode</li>
<li>ewndFor36mbps: ewnd parameter for 36 Mbs data mode</li>
<li>ewndFor24mbps: ewnd parameter for 24 Mbs data mode</li>
<li>ewndFor18mbps: ewnd parameter for 18 Mbs data mode</li>
<li>ewndFor12mbps: ewnd parameter for 12 Mbs data mode</li>
<li>ewndFor9mbps: ewnd parameter for 9 Mbs data mode</li>
<li>ewndFor6mbps: ewnd parameter for 6 Mbs data mode</li>
<li>poriFor48mbps: Pori parameter for 48 Mbs data mode</li>
<li>poriFor36mbps: Pori parameter for 36 Mbs data mode</li>
<li>poriFor24mbps: Pori parameter for 24 Mbs data mode</li>
<li>poriFor18mbps: Pori parameter for 18 Mbs data mode</li>
<li>poriFor12mbps: Pori parameter for 12 Mbs data mode</li>
<li>poriFor9mbps: Pori parameter for 9 Mbs data mode</li>
<li>poriFor6mbps: Pori parameter for 6 Mbs data mode</li>
<li>pmtlFor54mbps: Pmtl parameter for 54 Mbs data mode</li>
<li>pmtlFor48mbps: Pmtl parameter for 48 Mbs data mode</li>
<li>pmtlFor36mbps: Pmtl parameter for 36 Mbs data mode</li>
<li>pmtlFor24mbps: Pmtl parameter for 24 Mbs data mode</li>
<li>pmtlFor18mbps: Pmtl parameter for 18 Mbs data mode</li>
<li>pmtlFor12mbps: Pmtl parameter for 12 Mbs data mode</li>
<li>pmtlFor9mbps: Pmtl parameter for 9 Mbs data mode</li>
</ul>
<b>ns3::AarfcdWifiManager</b><br>
<ul>
<li>SuccessK: Multiplication factor for the success threshold in the AARF algorithm.</li>
<li>TimerK: Multiplication factor for the timer threshold in the AARF algorithm.</li>
<li>MaxSuccessThreshold: Maximum value of the success threshold in the AARF algorithm.</li>
<li>MinTimerThreshold: The minimum value for the 'timer' threshold in the AARF algorithm.</li>
<li>MinSuccessThreshold: The minimum value for the success threshold in the AARF algorithm.</li>
<li>MinRtsWnd: Minimum value for Rts window of Aarf-CD</li>
<li>MaxRtsWnd: Maximum value for Rts window of Aarf-CD</li>
<li>RtsFailsAsDataFails: If true the RTS failures will be treated by Aarf-CD as Data failures</li>
<li>TurnOffRtsAfterRateDecrease: If true the RTS mechanism will be turned off when the rate will be decreased</li>
<li>TurnOnRtsAfterRateIncrease: If true the RTS mechanism will be turned on when the rate will be increased</li>
</ul>
<b>ns3::CaraWifiManager</b><br>
<ul>
<li>ProbeThreshold: The number of consecutive transmissions failure to activate the RTS probe.</li>
<li>FailureThreshold: The number of consecutive transmissions failure to decrease the rate.</li>
<li>SuccessThreshold: The minimum number of sucessfull transmissions to try a new rate.</li>
<li>Timeout: The 'timer' in the CARA algorithm</li>
</ul>
<b>ns3::ConstantRateWifiManager</b><br>
<ul>
<li>DataMode: The transmission mode to use for every data packet transmission</li>
<li>ControlMode: The transmission mode to use for every control packet transmission.</li>
</ul>
<b>ns3::QadhocWifiMac</b><br>
<ul>
<li>VO_EdcaTxopN: Queue that manages packets belonging to AC_VO access class</li>
<li>VI_EdcaTxopN: Queue that manages packets belonging to AC_VI access class</li>
<li>BE_EdcaTxopN: Queue that manages packets belonging to AC_BE access class</li>
<li>BK_EdcaTxopN: Queue that manages packets belonging to AC_BK access class</li>
</ul>
<b>ns3::QapWifiMac</b><br>
<ul>
<li>BeaconInterval: Delay between two beacons</li>
<li>BeaconGeneration: Whether or not beacons are generated.</li>
<li>VO_EdcaTxopN: Queue that manages packets belonging to AC_VO access class</li>
<li>VI_EdcaTxopN: Queue that manages packets belonging to AC_VI access class</li>
<li>BE_EdcaTxopN: Queue that manages packets belonging to AC_BE access class</li>
<li>BK_EdcaTxopN: Queue that manages packets belonging to AC_BK access class</li>
</ul>
<b>ns3::QstaWifiMac</b><br>
<ul>
<li>ProbeRequestTimeout: The interval between two consecutive probe request attempts.</li>
<li>AssocRequestTimeout: The interval between two consecutive assoc request attempts.</li>
<li>MaxMissedBeacons: Number of beacons which much be consecutively missed before we attempt to restart association.</li>
<li>ActiveProbing: If true, we send probe requests. If false, we don't.</li>
<li>VO_EdcaTxopN: Queue that manages packets belonging to AC_VO access class</li>
<li>VI_EdcaTxopN: Queue that manages packets belonging to AC_VI access class</li>
<li>BE_EdcaTxopN: Queue that manages packets belonging to AC_BE access class</li>
<li>BK_EdcaTxopN: Queue that manages packets belonging to AC_BK access class</li>
</ul>
<b>ns3::EdcaTxopN</b><br>
<ul>
<li>MinCw: The minimun value of the contention window.</li>
<li>MaxCw: The maximum value of the contention window.</li>
<li>Aifsn: The AIFSN: the default value conforms to simple DCA.</li>
</ul>
<b>ns3::MsduStandardAggregator</b><br>
<ul>
<li>MaxAmsduSize: Max length in byte of an A-MSDU</li>
</ul>
<b>ns3::V4Ping</b><br>
<ul>
<li>Remote: The address of the machine we want to ping.</li>
</ul>
<b>ns3::rapidnet::RapidNetApplicationBase</b><br>
<ul>
<li>RapidNetPort: Port for RapidNet application</li>
<li>MaxUDPTxSize: Max size of UDP packet, beyond which switch is made to TCP protocol</li>
<li>ConnectionInactivityTimeout: Timeout value for tearing down inactive TCP connections.</li>
</ul>
<b>ns3::Ipv4Interface</b><br>
<ul>
<li>ArpCache: The arp cache for this ipv4 interface</li>
</ul>
*/
/*!
\ingroup core
\defgroup GlobalValueList The list of all global values.
<ul>
  <li><b>\anchor GlobalValueRngSeed RngSeed</b>: The global seed of all rng streams(1)</li>
  <li><b>\anchor GlobalValueRngRun RngRun</b>: The run number used to modify the global seed(1)</li>
  <li><b>\anchor GlobalValueTimeStepPrecision TimeStepPrecision</b>: The time unit of the internal 64 bit integer time.(NS)</li>
  <li><b>\anchor GlobalValueSimulatorImplementationType SimulatorImplementationType</b>: The object class to use as the simulator implementation(ns3::DefaultSimulatorImpl)</li>
  <li><b>\anchor GlobalValueSchedulerType SchedulerType</b>: The object class to use as the scheduler implementation(ns3::MapScheduler)</li>
  <li><b>\anchor GlobalValueChecksumEnabled ChecksumEnabled</b>: A global switch to enable all checksums for all protocols(false)</li>
</ul>
*/
