#ifndef HYPERTEXTCLASS_HELPER_H
#define HYPERTEXTCLASS_HELPER_H

#include "ns3/rapidnet-application-helper.h"
#include "hyper-text-class.h"

namespace ns3 {
namespace rapidnet {
namespace hypertextclass {

class HyperTextClass;

class HyperTextClassHelper: public RapidNetApplicationHelper
{
public:
  HyperTextClassHelper ()
  {
    m_factory.SetTypeId (HyperTextClass::GetTypeId ());
  }
  virtual ~HyperTextClassHelper ()
  {
  }

protected:
  Ptr<RapidNetApplicationBase> CreateNewApplication ()
  {
    return m_factory.Create<HyperTextClass> ();
  }
};

} // namespace hypertextclass
} // namespace rapidnet
} // namespace ns3

#endif // HYPERTEXTCLASS_HELPER_H

