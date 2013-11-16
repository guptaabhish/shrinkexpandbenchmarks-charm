#ifndef _DECL_llCharm_H_
#define _DECL_llCharm_H_
#include "charm++.h"
#include <memory>
#include "PowerLog.decl.h"

/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly int elemDimX;
 */

/* DECLS: readonly int elemDimY;
 */

/* DECLS: readonly int elemDimZ;
 */

/* DECLS: readonly int blockDimX;
 */

/* DECLS: readonly int blockDimY;
 */

/* DECLS: readonly int blockDimZ;
 */

/* DECLS: readonly int ghostDimX;
 */

/* DECLS: readonly int ghostDimY;
 */

/* DECLS: readonly int ghostDimZ;
 */

/* DECLS: readonly int chareDimX;
 */

/* DECLS: readonly int chareDimY;
 */

/* DECLS: readonly int chareDimZ;
 */

/* DECLS: readonly double charesPerPE;
 */

/* DECLS: readonly int numElems;
 */

/* DECLS: readonly int numNodes;
 */

/* DECLS: readonly int ghostElems;
 */

/* DECLS: readonly int frontOffset;
 */

/* DECLS: readonly int backOffset;
 */

/* DECLS: readonly int rightOffset;
 */

/* DECLS: readonly int leftOffset;
 */

/* DECLS: readonly int upOffset;
 */

/* DECLS: readonly int downOffset;
 */

/* DECLS: readonly Real_t stopTime;
 */

/* DECLS: readonly int lbFrequency;
 */

/* DECLS: readonly int cpFrequency;
 */

/* DECLS: readonly int maxIterations;
 */



/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void averageTimeCheckin(CkReductionMsg* impl_msg);
void initCheckin(CkReductionMsg* impl_msg);
void report(CkReductionMsg* impl_msg);
void afterCkpt(void);
void updateLastT(void);
Main(CkMigrateMessage* impl_msg);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void averageTimeCheckin(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_averageTimeCheckin_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_averageTimeCheckin_CkReductionMsg() {
      static int epidx = reg_averageTimeCheckin_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_averageTimeCheckin(void (Main::*)(CkReductionMsg* impl_msg) ) {
      return idx_averageTimeCheckin_CkReductionMsg();
    }


    
    static int averageTimeCheckin(CkReductionMsg* impl_msg) { return idx_averageTimeCheckin_CkReductionMsg(); }
    
    static void _call_averageTimeCheckin_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initCheckin(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initCheckin_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_initCheckin_CkReductionMsg() {
      static int epidx = reg_initCheckin_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_initCheckin(void (Main::*)(CkReductionMsg* impl_msg) ) {
      return idx_initCheckin_CkReductionMsg();
    }


    
    static int initCheckin(CkReductionMsg* impl_msg) { return idx_initCheckin_CkReductionMsg(); }
    
    static void _call_initCheckin_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void report(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_report_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_report_CkReductionMsg() {
      static int epidx = reg_report_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_report(void (Main::*)(CkReductionMsg* impl_msg) ) {
      return idx_report_CkReductionMsg();
    }


    
    static int report(CkReductionMsg* impl_msg) { return idx_report_CkReductionMsg(); }
    
    static void _call_report_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void afterCkpt(void);
     */
    // Entry point registration at startup
    
    static int reg_afterCkpt_void();
    // Entry point index lookup
    
    inline static int idx_afterCkpt_void() {
      static int epidx = reg_afterCkpt_void();
      return epidx;
    }

    
    inline static int idx_afterCkpt(void (Main::*)(void) ) {
      return idx_afterCkpt_void();
    }


    
    static int afterCkpt(void) { return idx_afterCkpt_void(); }
    
    static void _call_afterCkpt_void(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLastT(void);
     */
    // Entry point registration at startup
    
    static int reg_updateLastT_void();
    // Entry point index lookup
    
    inline static int idx_updateLastT_void() {
      static int epidx = reg_updateLastT_void();
      return epidx;
    }

    
    inline static int idx_updateLastT(void (Main::*)(void) ) {
      return idx_updateLastT_void();
    }


    
    static int updateLastT(void) { return idx_updateLastT_void(); }
    
    static void _call_updateLastT_void(void* impl_msg, void* impl_obj);
    /* DECLS: Main(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Main_CkMigrateMessage() {
      static int epidx = reg_Main_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Main_CkMigrateMessage(); }
    
    static void _call_Main_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: void averageTimeCheckin(CkReductionMsg* impl_msg);
 */
    
    void averageTimeCheckin(CkReductionMsg* impl_msg);

/* DECLS: void initCheckin(CkReductionMsg* impl_msg);
 */
    
    void initCheckin(CkReductionMsg* impl_msg);

/* DECLS: void report(CkReductionMsg* impl_msg);
 */
    
    void report(CkReductionMsg* impl_msg);

/* DECLS: void afterCkpt(void);
 */
    
    void afterCkpt(void);

/* DECLS: void updateLastT(void);
 */
    
    void updateLastT(void);

/* DECLS: Main(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Main)
typedef CBaseT1<Chare, CProxy_Main> CBase_Main;

/* DECLS: array Domain: ArrayElement{
Domain(void);
void startLB(void);
void beginIteration(void);
void resumeNodeIteration(void);
void resumeElemIteration(void);
void sendNodalMass(void);
void ResumeFromSync(void);
void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData);
void printEnergy(void);
void begin_iteration(void);
void doSync(void);
void run1(void);
Domain(CkMigrateMessage* impl_msg);
};
 */
 class Domain;
 class CkIndex_Domain;
 class CProxy_Domain;
 class CProxyElement_Domain;
 class CProxySection_Domain;
/* --------------- index object ------------------ */
class CkIndex_Domain:public CProxyElement_ArrayElement{
  public:
    typedef Domain local_t;
    typedef CkIndex_Domain index_t;
    typedef CProxy_Domain proxy_t;
    typedef CProxyElement_Domain element_t;
    typedef CProxySection_Domain section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Domain(void);
     */
    // Entry point registration at startup
    
    static int reg_Domain_void();
    // Entry point index lookup
    
    inline static int idx_Domain_void() {
      static int epidx = reg_Domain_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Domain_void(); }
    
    static void _call_Domain_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startLB(void);
     */
    // Entry point registration at startup
    
    static int reg_startLB_void();
    // Entry point index lookup
    
    inline static int idx_startLB_void() {
      static int epidx = reg_startLB_void();
      return epidx;
    }

    
    inline static int idx_startLB(void (Domain::*)(void) ) {
      return idx_startLB_void();
    }


    
    static int startLB(void) { return idx_startLB_void(); }
    
    static void _call_startLB_void(void* impl_msg, void* impl_obj);
    /* DECLS: void beginIteration(void);
     */
    // Entry point registration at startup
    
    static int reg_beginIteration_void();
    // Entry point index lookup
    
    inline static int idx_beginIteration_void() {
      static int epidx = reg_beginIteration_void();
      return epidx;
    }

    
    inline static int idx_beginIteration(void (Domain::*)(void) ) {
      return idx_beginIteration_void();
    }


    
    static int beginIteration(void) { return idx_beginIteration_void(); }
    
    static void _call_beginIteration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeNodeIteration(void);
     */
    // Entry point registration at startup
    
    static int reg_resumeNodeIteration_void();
    // Entry point index lookup
    
    inline static int idx_resumeNodeIteration_void() {
      static int epidx = reg_resumeNodeIteration_void();
      return epidx;
    }

    
    inline static int idx_resumeNodeIteration(void (Domain::*)(void) ) {
      return idx_resumeNodeIteration_void();
    }


    
    static int resumeNodeIteration(void) { return idx_resumeNodeIteration_void(); }
    
    static void _call_resumeNodeIteration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeElemIteration(void);
     */
    // Entry point registration at startup
    
    static int reg_resumeElemIteration_void();
    // Entry point index lookup
    
    inline static int idx_resumeElemIteration_void() {
      static int epidx = reg_resumeElemIteration_void();
      return epidx;
    }

    
    inline static int idx_resumeElemIteration(void (Domain::*)(void) ) {
      return idx_resumeElemIteration_void();
    }


    
    static int resumeElemIteration(void) { return idx_resumeElemIteration_void(); }
    
    static void _call_resumeElemIteration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendNodalMass(void);
     */
    // Entry point registration at startup
    
    static int reg_sendNodalMass_void();
    // Entry point index lookup
    
    inline static int idx_sendNodalMass_void() {
      static int epidx = reg_sendNodalMass_void();
      return epidx;
    }

    
    inline static int idx_sendNodalMass(void (Domain::*)(void) ) {
      return idx_sendNodalMass_void();
    }


    
    static int sendNodalMass(void) { return idx_sendNodalMass_void(); }
    
    static void _call_sendNodalMass_void(void* impl_msg, void* impl_obj);
    /* DECLS: void ResumeFromSync(void);
     */
    // Entry point registration at startup
    
    static int reg_ResumeFromSync_void();
    // Entry point index lookup
    
    inline static int idx_ResumeFromSync_void() {
      static int epidx = reg_ResumeFromSync_void();
      return epidx;
    }

    
    inline static int idx_ResumeFromSync(void (Domain::*)(void) ) {
      return idx_ResumeFromSync_void();
    }


    
    static int ResumeFromSync(void) { return idx_ResumeFromSync_void(); }
    
    static void _call_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
     */
    // Entry point registration at startup
    
    static int reg_receiveNodeGhosts_marshall8();
    // Entry point index lookup
    
    inline static int idx_receiveNodeGhosts_marshall8() {
      static int epidx = reg_receiveNodeGhosts_marshall8();
      return epidx;
    }

    
    inline static int idx_receiveNodeGhosts(void (Domain::*)(int iter, int dir, int width, int height, const Real_t *ghostData) ) {
      return idx_receiveNodeGhosts_marshall8();
    }


    
    static int receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData) { return idx_receiveNodeGhosts_marshall8(); }
    
    static void _call_receiveNodeGhosts_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveNodeGhosts_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveNodeGhosts_marshall8(PUP::er &p,void *msg);
    /* DECLS: void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
     */
    // Entry point registration at startup
    
    static int reg_receiveElemGhosts_marshall9();
    // Entry point index lookup
    
    inline static int idx_receiveElemGhosts_marshall9() {
      static int epidx = reg_receiveElemGhosts_marshall9();
      return epidx;
    }

    
    inline static int idx_receiveElemGhosts(void (Domain::*)(int iter, int dir, int width, int height, const Real_t *ghostData) ) {
      return idx_receiveElemGhosts_marshall9();
    }


    
    static int receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData) { return idx_receiveElemGhosts_marshall9(); }
    
    static void _call_receiveElemGhosts_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveElemGhosts_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveElemGhosts_marshall9(PUP::er &p,void *msg);
    /* DECLS: void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData);
     */
    // Entry point registration at startup
    
    static int reg_receiveNodalMass_marshall10();
    // Entry point index lookup
    
    inline static int idx_receiveNodalMass_marshall10() {
      static int epidx = reg_receiveNodalMass_marshall10();
      return epidx;
    }

    
    inline static int idx_receiveNodalMass(void (Domain::*)(int dir, int width, int height, const Real_t *ghostData) ) {
      return idx_receiveNodalMass_marshall10();
    }


    
    static int receiveNodalMass(int dir, int width, int height, const Real_t *ghostData) { return idx_receiveNodalMass_marshall10(); }
    
    static void _call_receiveNodalMass_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveNodalMass_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveNodalMass_marshall10(PUP::er &p,void *msg);
    /* DECLS: void printEnergy(void);
     */
    // Entry point registration at startup
    
    static int reg_printEnergy_void();
    // Entry point index lookup
    
    inline static int idx_printEnergy_void() {
      static int epidx = reg_printEnergy_void();
      return epidx;
    }

    
    inline static int idx_printEnergy(void (Domain::*)(void) ) {
      return idx_printEnergy_void();
    }


    
    static int printEnergy(void) { return idx_printEnergy_void(); }
    
    static void _call_printEnergy_void(void* impl_msg, void* impl_obj);
    /* DECLS: void begin_iteration(void);
     */
    // Entry point registration at startup
    
    static int reg_begin_iteration_void();
    // Entry point index lookup
    
    inline static int idx_begin_iteration_void() {
      static int epidx = reg_begin_iteration_void();
      return epidx;
    }

    
    inline static int idx_begin_iteration(void (Domain::*)(void) ) {
      return idx_begin_iteration_void();
    }


    
    static int begin_iteration(void) { return idx_begin_iteration_void(); }
    
    static void _call_begin_iteration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doSync(void);
     */
    // Entry point registration at startup
    
    static int reg_doSync_void();
    // Entry point index lookup
    
    inline static int idx_doSync_void() {
      static int epidx = reg_doSync_void();
      return epidx;
    }

    
    inline static int idx_doSync(void (Domain::*)(void) ) {
      return idx_doSync_void();
    }


    
    static int doSync(void) { return idx_doSync_void(); }
    
    static void _call_doSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void run1(void);
     */
    // Entry point registration at startup
    
    static int reg_run1_void();
    // Entry point index lookup
    
    inline static int idx_run1_void() {
      static int epidx = reg_run1_void();
      return epidx;
    }

    
    inline static int idx_run1(void (Domain::*)(void) ) {
      return idx_run1_void();
    }


    
    static int run1(void) { return idx_run1_void(); }
    
    static void _call_run1_void(void* impl_msg, void* impl_obj);
    /* DECLS: Domain(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Domain_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Domain_CkMigrateMessage() {
      static int epidx = reg_Domain_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Domain_CkMigrateMessage(); }
    
    static void _call_Domain_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Domain : public CProxyElement_ArrayElement{
  public:
    typedef Domain local_t;
    typedef CkIndex_Domain index_t;
    typedef CProxy_Domain proxy_t;
    typedef CProxyElement_Domain element_t;
    typedef CProxySection_Domain section_t;

    CProxyElement_Domain(void) {}
    CProxyElement_Domain(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Domain *ckLocal(void) const
    { return (Domain *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Domain(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Domain(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Domain(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Domain(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Domain(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void startLB(void);
 */
    
    void startLB(void) ;

/* DECLS: void beginIteration(void);
 */
    
    void beginIteration(void) ;

/* DECLS: void resumeNodeIteration(void);
 */
    
    void resumeNodeIteration(void) ;

/* DECLS: void resumeElemIteration(void);
 */
    
    void resumeElemIteration(void) ;

/* DECLS: void sendNodalMass(void);
 */
    
    void sendNodalMass(void) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void printEnergy(void);
 */
    
    void printEnergy(void) ;

/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void run1(void);
 */
    
    void run1(void) ;

/* DECLS: Domain(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Domain)
/* ---------------- collective proxy -------------- */
 class CProxy_Domain : public CProxy_ArrayElement{
  public:
    typedef Domain local_t;
    typedef CkIndex_Domain index_t;
    typedef CProxy_Domain proxy_t;
    typedef CProxyElement_Domain element_t;
    typedef CProxySection_Domain section_t;

    CProxy_Domain(void) {}
    CProxy_Domain(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxy_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    static CkArrayID ckNew(void) { return ckCreateEmptyArray(); }
    // Generalized array indexing:
    CProxyElement_Domain operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_Domain(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Domain operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_Domain(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Domain operator () (int i0,int i1,int i2) const 
        {return CProxyElement_Domain(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_Domain operator () (CkIndex3D idx) const 
        {return CProxyElement_Domain(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_Domain(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Domain(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Domain(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void startLB(void);
 */
    
    void startLB(void) ;

/* DECLS: void beginIteration(void);
 */
    
    void beginIteration(void) ;

/* DECLS: void resumeNodeIteration(void);
 */
    
    void resumeNodeIteration(void) ;

/* DECLS: void resumeElemIteration(void);
 */
    
    void resumeElemIteration(void) ;

/* DECLS: void sendNodalMass(void);
 */
    
    void sendNodalMass(void) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void printEnergy(void);
 */
    
    void printEnergy(void) ;

/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void run1(void);
 */
    
    void run1(void) ;

/* DECLS: Domain(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Domain)
/* ---------------- section proxy -------------- */
 class CProxySection_Domain : public CProxySection_ArrayElement{
  public:
    typedef Domain local_t;
    typedef CkIndex_Domain index_t;
    typedef CProxy_Domain proxy_t;
    typedef CProxyElement_Domain element_t;
    typedef CProxySection_Domain section_t;

    CProxySection_Domain(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxySection_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Domain operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_Domain(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Domain operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_Domain(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Domain operator () (int idx) const 
        {return CProxyElement_Domain(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Domain(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Domain(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Domain(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Domain(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Domain(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Domain(void);
 */
    

/* DECLS: void startLB(void);
 */
    
    void startLB(void) ;

/* DECLS: void beginIteration(void);
 */
    
    void beginIteration(void) ;

/* DECLS: void resumeNodeIteration(void);
 */
    
    void resumeNodeIteration(void) ;

/* DECLS: void resumeElemIteration(void);
 */
    
    void resumeElemIteration(void) ;

/* DECLS: void sendNodalMass(void);
 */
    
    void sendNodalMass(void) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodeGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveElemGhosts(int iter, int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData);
 */
    
    void receiveNodalMass(int dir, int width, int height, const Real_t *ghostData, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void printEnergy(void);
 */
    
    void printEnergy(void) ;

/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void run1(void);
 */
    
    void run1(void) ;

/* DECLS: Domain(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Domain)
#define Domain_SDAG_CODE                                                       \
public:                                                                        \
  void run1();                                                                 \
private:                                                                       \
  void run1_end();                                                             \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _atomic_0();                                                            \
public:                                                                        \
public:                                                                        \
  std::auto_ptr<CDep> __cDep;                                                  \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void __sdag_pup(PUP::er &p);                                                 \
  static void __sdag_register();                                               \
  static int _sdag_idx_Domain_atomic_0();                                      \
  static int _sdag_reg_Domain_atomic_0();                                      \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_Domain> CBase_Domain;

extern void _registerllCharm(void);
extern "C" void CkRegisterMainModule(void);
#endif
