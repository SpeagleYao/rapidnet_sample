#ifndef SMOKE_HELPER_H
#define SMOKE_HELPER_H

#include "ns3/rapidnet-application-helper.h"
#include "smoke.h"

namespace ns3 {
namespace rapidnet {
namespace smoke {

class Smoke;

class SmokeHelper: public RapidNetApplicationHelper
{
public:
  SmokeHelper ()
  {
    m_factory.SetTypeId (Smoke::GetTypeId ());
  }
  virtual ~SmokeHelper ()
  {
  }

protected:
  Ptr<RapidNetApplicationBase> CreateNewApplication ()
  {
    return m_factory.Create<Smoke> ();
  }
};

} // namespace smoke
} // namespace rapidnet
} // namespace ns3

#endif // SMOKE_HELPER_H

