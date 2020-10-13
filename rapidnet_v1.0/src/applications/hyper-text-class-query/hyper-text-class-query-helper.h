#ifndef HYPERTEXTCLASSQUERY_HELPER_H
#define HYPERTEXTCLASSQUERY_HELPER_H

#include "ns3/rapidnet-application-helper.h"
#include "hyper-text-class-query.h"

namespace ns3 {
namespace rapidnet {
namespace hypertextclassquery {

class HyperTextClassQuery;

class HyperTextClassQueryHelper: public RapidNetApplicationHelper
{
public:
  HyperTextClassQueryHelper ()
  {
    m_factory.SetTypeId (HyperTextClassQuery::GetTypeId ());
  }
  virtual ~HyperTextClassQueryHelper ()
  {
  }

protected:
  Ptr<RapidNetApplicationBase> CreateNewApplication ()
  {
    return m_factory.Create<HyperTextClassQuery> ();
  }
};

} // namespace hypertextclassquery
} // namespace rapidnet
} // namespace ns3

#endif // HYPERTEXTCLASSQUERY_HELPER_H

