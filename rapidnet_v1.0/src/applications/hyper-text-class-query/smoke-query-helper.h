#ifndef SMOKEQUERY_HELPER_H
#define SMOKEQUERY_HELPER_H

#include "ns3/rapidnet-application-helper.h"
#include "smoke-query.h"

namespace ns3 {
namespace rapidnet {
namespace smokequery {

class SmokeQuery;

class SmokeQueryHelper: public RapidNetApplicationHelper
{
public:
  SmokeQueryHelper ()
  {
    m_factory.SetTypeId (SmokeQuery::GetTypeId ());
  }
  virtual ~SmokeQueryHelper ()
  {
  }

protected:
  Ptr<RapidNetApplicationBase> CreateNewApplication ()
  {
    return m_factory.Create<SmokeQuery> ();
  }
};

} // namespace smokequery
} // namespace rapidnet
} // namespace ns3

#endif // SMOKEQUERY_HELPER_H

