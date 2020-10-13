/* A RapidNet application. Generated by RapidNet compiler. */

#ifndef VQAP_H
#define VQAP_H

#include <string>
#include <iostream>
#include "ns3/ptr.h"
#include "ns3/event-id.h"
#include "ns3/ipv4-address.h"
#include "ns3/rapidnet-header.h"
#include "ns3/relation-base.h"
#include "ns3/database.h"
#include "ns3/rapidnet-application-base.h"
#include "ns3/aggregator.h"
#include "ns3/aggwrap.h"

using namespace std;
using namespace ns3;

namespace ns3 {

class Socket;
class Packet;

namespace rapidnet {
namespace vqap {

class Vqap : public RapidNetApplicationBase
{
public:
  static const string ANS;
  static const string CANDIDATE;
  static const string EPRETURN;
  static const string EPROVQUERY;
  static const string ERRETURN;
  static const string ERULEQUERY;
  static const string EANS;
  static const string EANSDELETE;
  static const string EANSTEMP;
  static const string EANSTEMPDELETE;
  static const string ECANDIDATE;
  static const string ECANDIDATEDELETE;
  static const string ECANDIDATETEMP;
  static const string ECANDIDATETEMPDELETE;
  static const string EHASIMGANS;
  static const string EHASIMGANSDELETE;
  static const string EHASIMGANSTEMP;
  static const string EHASIMGANSTEMPDELETE;
  static const string ESHARESULT;
  static const string ESHARESULTDELETE;
  static const string ESHARESULTTEMP;
  static const string ESHARESULTTEMPDELETE;
  static const string ESIMREP1;
  static const string ESIMREP1DELETE;
  static const string ESIMREP1TEMP;
  static const string ESIMREP1TEMPDELETE;
  static const string ESIMREP2;
  static const string ESIMREP2DELETE;
  static const string ESIMREP2TEMP;
  static const string ESIMREP2TEMPDELETE;
  static const string HASIMG;
  static const string HASIMGANS;
  static const string HASQ;
  static const string PITERATE;
  static const string PQLIST;
  static const string PRESULTTMP;
  static const string PRETURN;
  static const string PROV;
  static const string PROVQUERY;
  static const string RITERATE;
  static const string RQLIST;
  static const string RRESULTTMP;
  static const string RRETURN;
  static const string RULEEXEC;
  static const string RULEQUERY;
  static const string SHARESULT;
  static const string SIM;
  static const string SIMREP1;
  static const string SIMREP2;
  static const string WORD;

  static TypeId GetTypeId (void);

  Vqap ();

  virtual ~Vqap ();

protected:

  virtual void DoDispose (void);

  virtual void StartApplication (void);

  virtual void StopApplication (void);

  virtual void InitDatabase (void);

  virtual void DemuxRecv (Ptr<Tuple> tuple);

  virtual void Prov_ra_1Eca0Ins (Ptr<Tuple> sim);

  virtual void Prov_ra_1Eca0Del (Ptr<Tuple> sim);

  virtual void Prov_ra_2_ecaAdd (Ptr<Tuple> esimRep1Temp);

  virtual void Prov_ra_2_ecaDel (Ptr<Tuple> esimRep1TempDelete);

  virtual void Prov_ra_3_ecaAdd (Ptr<Tuple> esimRep1Temp);

  virtual void Prov_ra_3_ecaDel (Ptr<Tuple> esimRep1TempDelete);

  virtual void Prov_ra_4_ecaAdd (Ptr<Tuple> esimRep1);

  virtual void Prov_ra_4_ecaDel (Ptr<Tuple> esimRep1Delete);

  virtual void Prov_ra_5_ecaAdd (Ptr<Tuple> esimRep1);

  virtual void Prov_ra_5_ecaDel (Ptr<Tuple> esimRep1Delete);

  virtual void Prov_rb_1Eca0Ins (Ptr<Tuple> sim);

  virtual void Prov_rb_1Eca0Del (Ptr<Tuple> sim);

  virtual void Prov_rb_2_ecaAdd (Ptr<Tuple> esimRep2Temp);

  virtual void Prov_rb_2_ecaDel (Ptr<Tuple> esimRep2TempDelete);

  virtual void Prov_rb_3_ecaAdd (Ptr<Tuple> esimRep2Temp);

  virtual void Prov_rb_3_ecaDel (Ptr<Tuple> esimRep2TempDelete);

  virtual void Prov_rb_4_ecaAdd (Ptr<Tuple> esimRep2);

  virtual void Prov_rb_4_ecaDel (Ptr<Tuple> esimRep2Delete);

  virtual void Prov_rb_5_ecaAdd (Ptr<Tuple> esimRep2);

  virtual void Prov_rb_5_ecaDel (Ptr<Tuple> esimRep2Delete);

  virtual void Prov_r1_1Eca0Ins (Ptr<Tuple> word);

  virtual void Prov_r1_1Eca0Del (Ptr<Tuple> word);

  virtual void Prov_r1_1Eca3Ins (Ptr<Tuple> hasImg);

  virtual void Prov_r1_1Eca3Del (Ptr<Tuple> hasImg);

  virtual void Prov_r1_1Eca7Ins (Ptr<Tuple> sim);

  virtual void Prov_r1_1Eca7Del (Ptr<Tuple> sim);

  virtual void Prov_r1_1Eca11Ins (Ptr<Tuple> simRep1);

  virtual void Prov_r1_1Eca11Del (Ptr<Tuple> simRep1);

  virtual void Prov_r1_2_ecaAdd (Ptr<Tuple> ehasImgAnsTemp);

  virtual void Prov_r1_2_ecaDel (Ptr<Tuple> ehasImgAnsTempDelete);

  virtual void Prov_r1_3_ecaAdd (Ptr<Tuple> ehasImgAnsTemp);

  virtual void Prov_r1_3_ecaDel (Ptr<Tuple> ehasImgAnsTempDelete);

  virtual void Prov_r1_4_ecaAdd (Ptr<Tuple> ehasImgAns);

  virtual void Prov_r1_4_ecaDel (Ptr<Tuple> ehasImgAnsDelete);

  virtual void Prov_r1_5_ecaAdd (Ptr<Tuple> ehasImgAns);

  virtual void Prov_r1_5_ecaDel (Ptr<Tuple> ehasImgAnsDelete);

  virtual void Prov_r2_1Eca0Ins (Ptr<Tuple> word);

  virtual void Prov_r2_1Eca0Del (Ptr<Tuple> word);

  virtual void Prov_r2_2_ecaAdd (Ptr<Tuple> ecandidateTemp);

  virtual void Prov_r2_2_ecaDel (Ptr<Tuple> ecandidateTempDelete);

  virtual void Prov_r2_3_ecaAdd (Ptr<Tuple> ecandidateTemp);

  virtual void Prov_r2_3_ecaDel (Ptr<Tuple> ecandidateTempDelete);

  virtual void Prov_r2_4_ecaAdd (Ptr<Tuple> ecandidate);

  virtual void Prov_r2_4_ecaDel (Ptr<Tuple> ecandidateDelete);

  virtual void Prov_r2_5_ecaAdd (Ptr<Tuple> ecandidate);

  virtual void Prov_r2_5_ecaDel (Ptr<Tuple> ecandidateDelete);

  virtual void Prov_r3_1Eca0Ins (Ptr<Tuple> word);

  virtual void Prov_r3_1Eca0Del (Ptr<Tuple> word);

  virtual void Prov_r3_1Eca3Ins (Ptr<Tuple> hasQ);

  virtual void Prov_r3_1Eca3Del (Ptr<Tuple> hasQ);

  virtual void Prov_r3_1Eca7Ins (Ptr<Tuple> hasImgAns);

  virtual void Prov_r3_1Eca7Del (Ptr<Tuple> hasImgAns);

  virtual void Prov_r3_1Eca11Ins (Ptr<Tuple> sim);

  virtual void Prov_r3_1Eca11Del (Ptr<Tuple> sim);

  virtual void Prov_r3_1Eca15Ins (Ptr<Tuple> simRep1);

  virtual void Prov_r3_1Eca15Del (Ptr<Tuple> simRep1);

  virtual void Prov_r3_1Eca19Ins (Ptr<Tuple> simRep2);

  virtual void Prov_r3_1Eca19Del (Ptr<Tuple> simRep2);

  virtual void Prov_r4_1Eca0Ins (Ptr<Tuple> candidate);

  virtual void Prov_r4_1Eca0Del (Ptr<Tuple> candidate);

  virtual void Prov_r4_1Eca3Ins (Ptr<Tuple> hasQ);

  virtual void Prov_r4_1Eca3Del (Ptr<Tuple> hasQ);

  virtual void Prov_r4_1Eca8Ins (Ptr<Tuple> hasImg);

  virtual void Prov_r4_1Eca8Del (Ptr<Tuple> hasImg);

  virtual void Prov_r4_2_ecaAdd (Ptr<Tuple> eansTemp);

  virtual void Prov_r4_2_ecaDel (Ptr<Tuple> eansTempDelete);

  virtual void Prov_r4_3_ecaAdd (Ptr<Tuple> eansTemp);

  virtual void Prov_r4_3_ecaDel (Ptr<Tuple> eansTempDelete);

  virtual void Prov_r4_4_ecaAdd (Ptr<Tuple> eans);

  virtual void Prov_r4_4_ecaDel (Ptr<Tuple> eansDelete);

  virtual void Prov_r4_5_ecaAdd (Ptr<Tuple> eans);

  virtual void Prov_r4_5_ecaDel (Ptr<Tuple> eansDelete);

  virtual void Prov_r5_1Eca0Ins (Ptr<Tuple> candidate);

  virtual void Prov_r5_1Eca0Del (Ptr<Tuple> candidate);

  virtual void Prov_r5_1Eca3Ins (Ptr<Tuple> hasQ);

  virtual void Prov_r5_1Eca3Del (Ptr<Tuple> hasQ);

  virtual void Prov_r5_1Eca8Ins (Ptr<Tuple> hasImg);

  virtual void Prov_r5_1Eca8Del (Ptr<Tuple> hasImg);

  virtual void Prov_r5_1Eca12Ins (Ptr<Tuple> sim);

  virtual void Prov_r5_1Eca12Del (Ptr<Tuple> sim);

  virtual void Prov_r6_1Eca0Ins (Ptr<Tuple> candidate);

  virtual void Prov_r6_1Eca0Del (Ptr<Tuple> candidate);

  virtual void Prov_r6_1Eca3Ins (Ptr<Tuple> hasQ);

  virtual void Prov_r6_1Eca3Del (Ptr<Tuple> hasQ);

  virtual void Prov_r6_1Eca8Ins (Ptr<Tuple> hasImg);

  virtual void Prov_r6_1Eca8Del (Ptr<Tuple> hasImg);

  virtual void Prov_r6_1Eca12Ins (Ptr<Tuple> sim);

  virtual void Prov_r6_1Eca12Del (Ptr<Tuple> sim);

  virtual void Prov_r6_1Eca16Ins (Ptr<Tuple> simRep1);

  virtual void Prov_r6_1Eca16Del (Ptr<Tuple> simRep1);

  virtual void Prov_r6_1Eca20Ins (Ptr<Tuple> simRep2);

  virtual void Prov_r6_1Eca20Del (Ptr<Tuple> simRep2);

  virtual void Prov_r7_1Eca0Ins (Ptr<Tuple> word);

  virtual void Prov_r7_1Eca0Del (Ptr<Tuple> word);

  virtual void Prov_r7_2_ecaAdd (Ptr<Tuple> eshaResultTemp);

  virtual void Prov_r7_2_ecaDel (Ptr<Tuple> eshaResultTempDelete);

  virtual void Prov_r7_3_ecaAdd (Ptr<Tuple> eshaResultTemp);

  virtual void Prov_r7_3_ecaDel (Ptr<Tuple> eshaResultTempDelete);

  virtual void Prov_r7_4_ecaAdd (Ptr<Tuple> eshaResult);

  virtual void Prov_r7_4_ecaDel (Ptr<Tuple> eshaResultDelete);

  virtual void Prov_r7_5_ecaAdd (Ptr<Tuple> eshaResult);

  virtual void Prov_r7_5_ecaDel (Ptr<Tuple> eshaResultDelete);

  virtual void Prov_r8_1Eca0Ins (Ptr<Tuple> hasImg);

  virtual void Prov_r8_1Eca0Del (Ptr<Tuple> hasImg);

  virtual void Prov_r9_1Eca0Ins (Ptr<Tuple> hasQ);

  virtual void Prov_r9_1Eca0Del (Ptr<Tuple> hasQ);

  virtual void Prov_r10_1Eca0Ins (Ptr<Tuple> sim);

  virtual void Prov_r10_1Eca0Del (Ptr<Tuple> sim);

  virtual void Prov_r11_1Eca0Ins (Ptr<Tuple> simRep1);

  virtual void Prov_r11_1Eca0Del (Ptr<Tuple> simRep1);

  virtual void Prov_r12_1Eca0Ins (Ptr<Tuple> simRep2);

  virtual void Prov_r12_1Eca0Del (Ptr<Tuple> simRep2);

  virtual void Prov_r13_1Eca0Ins (Ptr<Tuple> ans);

  virtual void Prov_r13_1Eca0Del (Ptr<Tuple> ans);

  virtual void Prov_r14_1Eca0Ins (Ptr<Tuple> candidate);

  virtual void Prov_r14_1Eca0Del (Ptr<Tuple> candidate);

  virtual void Prov_r15_1Eca0Ins (Ptr<Tuple> hasImgAns);

  virtual void Prov_r15_1Eca0Del (Ptr<Tuple> hasImgAns);

  virtual void Prov_edb_1Eca1Ins (Ptr<Tuple> hasImg);

  virtual void Prov_edb_1Eca1Del (Ptr<Tuple> hasImg);

  virtual void Prov_edb_2Eca1Ins (Ptr<Tuple> hasQ);

  virtual void Prov_edb_2Eca1Del (Ptr<Tuple> hasQ);

  virtual void Prov_edb_3Eca1Ins (Ptr<Tuple> sim);

  virtual void Prov_edb_3Eca1Del (Ptr<Tuple> sim);

  virtual void Prov_edb_4Eca1Ins (Ptr<Tuple> word);

  virtual void Prov_edb_4Eca1Del (Ptr<Tuple> word);

  virtual void Edb1_eca (Ptr<Tuple> provQuery);

  virtual void Idb1a_eca (Ptr<Tuple> provQuery);

  virtual void Idb1b_eca (Ptr<Tuple> provQuery);

  virtual void Idb2_eca (Ptr<Tuple> provQuery);

  virtual void Idb3_eca (Ptr<Tuple> provQuery);

  virtual void Idb4_eca (Ptr<Tuple> pIterate);

  virtual void Idb5_eca (Ptr<Tuple> pIterate);

  virtual void Idb6_eca (Ptr<Tuple> eRuleQuery);

  virtual void Idb7_eca (Ptr<Tuple> rReturn);

  virtual void Idb8Eca0Ins (Ptr<Tuple> pResultTmp);

  virtual void Idb8Eca1Ins (Ptr<Tuple> pQList);

  virtual void Idb9a_eca (Ptr<Tuple> ePReturn);

  virtual void Idb9b_eca (Ptr<Tuple> ePReturn);

  virtual void Rv1_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv2_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv3_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv4_eca (Ptr<Tuple> rIterate);

  virtual void Rv5_eca (Ptr<Tuple> rIterate);

  virtual void Rv6_eca (Ptr<Tuple> eProvQuery);

  virtual void Rv7_eca (Ptr<Tuple> pReturn);

  virtual void Rv8Eca0Ins (Ptr<Tuple> rResultTmp);

  virtual void Rv8Eca1Ins (Ptr<Tuple> rQList);

  virtual void Rv9_eca (Ptr<Tuple> eRReturn);

};

} // namespace vqap
} // namespace rapidnet
} // namespace ns3

#endif // VQAP_H
