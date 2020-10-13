/* A RapidNet application. Generated by RapidNet compiler. */

#include "hyper-text-class-query.h"
#include <cstdlib>
#include "ns3/nstime.h"
#include "ns3/simulator.h"
#include "ns3/type-ids.h"
#include "ns3/rapidnet-types.h"
#include "ns3/rapidnet-utils.h"
#include "ns3/assignor.h"
#include "ns3/selector.h"
#include "ns3/rapidnet-functions.h"

using namespace std;
using namespace ns3;
using namespace ns3::rapidnet;
using namespace ns3::rapidnet::hypertextclassquery;

const string HyperTextClassQuery::PRETURN = "pReturn";
const string HyperTextClassQuery::PROVQUERY = "provQuery";
const string HyperTextClassQuery::RECORDS = "records";
const string HyperTextClassQuery::TUPLE = "tuple";

NS_LOG_COMPONENT_DEFINE ("HyperTextClassQuery");
NS_OBJECT_ENSURE_REGISTERED (HyperTextClassQuery);

TypeId
HyperTextClassQuery::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::rapidnet::hypertextclassquery::HyperTextClassQuery")
    .SetParent<RapidNetApplicationBase> ()
    .AddConstructor<HyperTextClassQuery> ()
    ;
  return tid;
}

HyperTextClassQuery::HyperTextClassQuery()
{
  NS_LOG_FUNCTION_NOARGS ();
}

HyperTextClassQuery::~HyperTextClassQuery()
{
  NS_LOG_FUNCTION_NOARGS ();
}

void
HyperTextClassQuery::DoDispose (void)
{
  NS_LOG_FUNCTION_NOARGS ();

  RapidNetApplicationBase::DoDispose ();
}

void
HyperTextClassQuery::StartApplication (void)
{
  NS_LOG_FUNCTION_NOARGS ();

  RapidNetApplicationBase::StartApplication ();
  RAPIDNET_LOG_INFO("HyperTextClassQuery Application Started");
}

void
HyperTextClassQuery::StopApplication ()
{
  NS_LOG_FUNCTION_NOARGS ();

  RapidNetApplicationBase::StopApplication ();
  RAPIDNET_LOG_INFO("HyperTextClassQuery Application Stopped");
}

void
HyperTextClassQuery::InitDatabase ()
{
  //RapidNetApplicationBase::InitDatabase ();

  AddRelationWithKeys (RECORDS, attrdeflist (
    attrdef ("records_attr1", IPV4),
    attrdef ("records_attr2", ID),
    attrdef ("records_attr3", ID),
    attrdef ("records_attr4", STR)));

  AddRelationWithKeys (TUPLE, attrdeflist (
    attrdef ("tuple_attr1", IPV4),
    attrdef ("tuple_attr2", STR),
    attrdef ("tuple_attr3", IPV4),
    attrdef ("tuple_attr4", STR),
    attrdef ("tuple_attr5", INT32)));

}

void
HyperTextClassQuery::DemuxRecv (Ptr<Tuple> tuple)
{
  RapidNetApplicationBase::DemuxRecv (tuple);

  if (IsInsertEvent (tuple, TUPLE))
    {
      Q1Eca0Ins (tuple);
    }
  if (IsRecvEvent (tuple, PRETURN))
    {
      Q2_eca (tuple);
    }
}

void
HyperTextClassQuery::Q1Eca0Ins (Ptr<Tuple> tuple)
{
  clock_t t1 = clock();
  cout << t1 << endl;
  RAPIDNET_LOG_INFO ("Q1Eca0Ins triggered");

  Ptr<Tuple> result = tuple;

  result->Assign (Assignor::New ("UID",
    FSha1::New (
      Operation::New (RN_PLUS,
        Operation::New (RN_PLUS,
          Operation::New (RN_PLUS,
            VarExpr::New ("tuple_attr2"),
            VarExpr::New ("tuple_attr3")),
          VarExpr::New ("tuple_attr4")),
        VarExpr::New ("tuple_attr5")))));

  result->Assign (Assignor::New ("Time",
    FNow::New (
)));

  result->Assign (Assignor::New ("QID",
    FSha1::New (
      Operation::New (RN_PLUS,
        Operation::New (RN_PLUS,
          ValueExpr::New (StrValue::New ("")),
          VarExpr::New ("UID")),
        VarExpr::New ("Time")))));

  result->Assign (Assignor::New ("P",
    FAppend::New (
      ValueExpr::New (StrValue::New ("")))));

  result = result->Project (
    PROVQUERY,
    strlist ("tuple_attr3",
      "QID",
      "UID",
      "P",
      "tuple_attr1",
      "tuple_attr3"),
    strlist ("provQuery_attr1",
      "provQuery_attr2",
      "provQuery_attr3",
      "provQuery_attr4",
      "provQuery_attr5",
      RN_DEST));

  Send (result);
}

void
HyperTextClassQuery::Q2_eca (Ptr<Tuple> pReturn)
{
  RAPIDNET_LOG_INFO ("Q2_eca triggered");

  Ptr<Tuple> result = pReturn;

  result = result->Project (
    RECORDS,
    strlist ("pReturn_attr1",
      "pReturn_attr2",
      "pReturn_attr3",
      "pReturn_attr4"),
    strlist ("records_attr1",
      "records_attr2",
      "records_attr3",
      "records_attr4"));

  Insert (result);
}
