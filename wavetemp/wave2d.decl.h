#ifndef _DECL_wave2d_H_
#define _DECL_wave2d_H_
#include "charm++.h"
#include <memory>
#include "PowerLog.decl.h"

/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly CProxy_Wave arrayProxy;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void iterationCompleted(CkReductionMsg* impl_msg);
void afterCkpt(void);
void updateLastT(void);
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
    /* DECLS: void iterationCompleted(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_iterationCompleted_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_iterationCompleted_CkReductionMsg() {
      static int epidx = reg_iterationCompleted_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_iterationCompleted(void (Main::*)(CkReductionMsg* impl_msg) ) {
      return idx_iterationCompleted_CkReductionMsg();
    }


    
    static int iterationCompleted(CkReductionMsg* impl_msg) { return idx_iterationCompleted_CkReductionMsg(); }
    
    static void _call_iterationCompleted_CkReductionMsg(void* impl_msg, void* impl_obj);
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

/* DECLS: void iterationCompleted(CkReductionMsg* impl_msg);
 */
    
    void iterationCompleted(CkReductionMsg* impl_msg);

/* DECLS: void afterCkpt(void);
 */
    
    void afterCkpt(void);

/* DECLS: void updateLastT(void);
 */
    
    void updateLastT(void);

};
PUPmarshall(CProxy_Main)
typedef CBaseT1<Chare, CProxy_Main> CBase_Main;

/* DECLS: array Wave: ArrayElement{
Wave(void);
void begin_iteration(void);
void recvGhosts(int whichSide, int height, const double *s);
void doSync(void);
void doTrace(void);
void endTrace(void);
Wave(CkMigrateMessage* impl_msg);
};
 */
 class Wave;
 class CkIndex_Wave;
 class CProxy_Wave;
 class CProxyElement_Wave;
 class CProxySection_Wave;
/* --------------- index object ------------------ */
class CkIndex_Wave:public CProxyElement_ArrayElement{
  public:
    typedef Wave local_t;
    typedef CkIndex_Wave index_t;
    typedef CProxy_Wave proxy_t;
    typedef CProxyElement_Wave element_t;
    typedef CProxySection_Wave section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Wave(void);
     */
    // Entry point registration at startup
    
    static int reg_Wave_void();
    // Entry point index lookup
    
    inline static int idx_Wave_void() {
      static int epidx = reg_Wave_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Wave_void(); }
    
    static void _call_Wave_void(void* impl_msg, void* impl_obj);
    /* DECLS: void begin_iteration(void);
     */
    // Entry point registration at startup
    
    static int reg_begin_iteration_void();
    // Entry point index lookup
    
    inline static int idx_begin_iteration_void() {
      static int epidx = reg_begin_iteration_void();
      return epidx;
    }

    
    inline static int idx_begin_iteration(void (Wave::*)(void) ) {
      return idx_begin_iteration_void();
    }


    
    static int begin_iteration(void) { return idx_begin_iteration_void(); }
    
    static void _call_begin_iteration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvGhosts(int whichSide, int height, const double *s);
     */
    // Entry point registration at startup
    
    static int reg_recvGhosts_marshall3();
    // Entry point index lookup
    
    inline static int idx_recvGhosts_marshall3() {
      static int epidx = reg_recvGhosts_marshall3();
      return epidx;
    }

    
    inline static int idx_recvGhosts(void (Wave::*)(int whichSide, int height, const double *s) ) {
      return idx_recvGhosts_marshall3();
    }


    
    static int recvGhosts(int whichSide, int height, const double *s) { return idx_recvGhosts_marshall3(); }
    
    static void _call_recvGhosts_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvGhosts_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvGhosts_marshall3(PUP::er &p,void *msg);
    /* DECLS: void doSync(void);
     */
    // Entry point registration at startup
    
    static int reg_doSync_void();
    // Entry point index lookup
    
    inline static int idx_doSync_void() {
      static int epidx = reg_doSync_void();
      return epidx;
    }

    
    inline static int idx_doSync(void (Wave::*)(void) ) {
      return idx_doSync_void();
    }


    
    static int doSync(void) { return idx_doSync_void(); }
    
    static void _call_doSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doTrace(void);
     */
    // Entry point registration at startup
    
    static int reg_doTrace_void();
    // Entry point index lookup
    
    inline static int idx_doTrace_void() {
      static int epidx = reg_doTrace_void();
      return epidx;
    }

    
    inline static int idx_doTrace(void (Wave::*)(void) ) {
      return idx_doTrace_void();
    }


    
    static int doTrace(void) { return idx_doTrace_void(); }
    
    static void _call_doTrace_void(void* impl_msg, void* impl_obj);
    /* DECLS: void endTrace(void);
     */
    // Entry point registration at startup
    
    static int reg_endTrace_void();
    // Entry point index lookup
    
    inline static int idx_endTrace_void() {
      static int epidx = reg_endTrace_void();
      return epidx;
    }

    
    inline static int idx_endTrace(void (Wave::*)(void) ) {
      return idx_endTrace_void();
    }


    
    static int endTrace(void) { return idx_endTrace_void(); }
    
    static void _call_endTrace_void(void* impl_msg, void* impl_obj);
    /* DECLS: Wave(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Wave_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Wave_CkMigrateMessage() {
      static int epidx = reg_Wave_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Wave_CkMigrateMessage(); }
    
    static void _call_Wave_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Wave : public CProxyElement_ArrayElement{
  public:
    typedef Wave local_t;
    typedef CkIndex_Wave index_t;
    typedef CProxy_Wave proxy_t;
    typedef CProxyElement_Wave element_t;
    typedef CProxySection_Wave section_t;

    CProxyElement_Wave(void) {}
    CProxyElement_Wave(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

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

    Wave *ckLocal(void) const
    { return (Wave *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Wave(const CkArrayID &aid,const CkArrayIndex2D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Wave(const CkArrayID &aid,const CkArrayIndex2D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Wave(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Wave(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Wave(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void recvGhosts(int whichSide, int height, const double *s);
 */
    
    void recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void doTrace(void);
 */
    
    void doTrace(void) ;

/* DECLS: void endTrace(void);
 */
    
    void endTrace(void) ;

/* DECLS: Wave(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Wave)
/* ---------------- collective proxy -------------- */
 class CProxy_Wave : public CProxy_ArrayElement{
  public:
    typedef Wave local_t;
    typedef CkIndex_Wave index_t;
    typedef CProxy_Wave proxy_t;
    typedef CProxyElement_Wave element_t;
    typedef CProxySection_Wave section_t;

    CProxy_Wave(void) {}
    CProxy_Wave(const ArrayElement *e) : CProxy_ArrayElement(e){  }

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
    CProxyElement_Wave operator [] (const CkArrayIndex2D &idx) const
    { return CProxyElement_Wave(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Wave operator() (const CkArrayIndex2D &idx) const
    { return CProxyElement_Wave(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Wave operator () (int i0,int i1) const 
        {return CProxyElement_Wave(ckGetArrayID(), CkArrayIndex2D(i0,i1), CK_DELCTOR_CALL);}
    CProxyElement_Wave operator () (CkIndex2D idx) const 
        {return CProxyElement_Wave(ckGetArrayID(), CkArrayIndex2D(idx), CK_DELCTOR_CALL);}
    CProxy_Wave(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Wave(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Wave(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2);

/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void recvGhosts(int whichSide, int height, const double *s);
 */
    
    void recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void doTrace(void);
 */
    
    void doTrace(void) ;

/* DECLS: void endTrace(void);
 */
    
    void endTrace(void) ;

/* DECLS: Wave(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Wave)
/* ---------------- section proxy -------------- */
 class CProxySection_Wave : public CProxySection_ArrayElement{
  public:
    typedef Wave local_t;
    typedef CkIndex_Wave index_t;
    typedef CProxy_Wave proxy_t;
    typedef CProxyElement_Wave element_t;
    typedef CProxySection_Wave section_t;

    CProxySection_Wave(void) {}

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
    CProxyElement_Wave operator [] (const CkArrayIndex2D &idx) const
        {return CProxyElement_Wave(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Wave operator() (const CkArrayIndex2D &idx) const
        {return CProxyElement_Wave(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Wave operator () (int idx) const 
        {return CProxyElement_Wave(ckGetArrayID(), *(CkArrayIndex2D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex2D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2) {
      CkVec<CkArrayIndex2D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          al.push_back(CkArrayIndex2D(i, j));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Wave(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Wave(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Wave(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Wave(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Wave(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Wave(void);
 */
    

/* DECLS: void begin_iteration(void);
 */
    
    void begin_iteration(void) ;

/* DECLS: void recvGhosts(int whichSide, int height, const double *s);
 */
    
    void recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void doSync(void);
 */
    
    void doSync(void) ;

/* DECLS: void doTrace(void);
 */
    
    void doTrace(void) ;

/* DECLS: void endTrace(void);
 */
    
    void endTrace(void) ;

/* DECLS: Wave(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Wave)
typedef CBaseT1<ArrayElementT<CkIndex2D>, CProxy_Wave> CBase_Wave;

/* DECLS: group MyBlockMap: CkArrayMap{
MyBlockMap(void);
};
 */
 class MyBlockMap;
 class CkIndex_MyBlockMap;
 class CProxy_MyBlockMap;
 class CProxyElement_MyBlockMap;
 class CProxySection_MyBlockMap;
/* --------------- index object ------------------ */
class CkIndex_MyBlockMap:public CProxyElement_CkArrayMap{
  public:
    typedef MyBlockMap local_t;
    typedef CkIndex_MyBlockMap index_t;
    typedef CProxy_MyBlockMap proxy_t;
    typedef CProxyElement_MyBlockMap element_t;
    typedef CProxySection_MyBlockMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MyBlockMap(void);
     */
    // Entry point registration at startup
    
    static int reg_MyBlockMap_void();
    // Entry point index lookup
    
    inline static int idx_MyBlockMap_void() {
      static int epidx = reg_MyBlockMap_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_MyBlockMap_void(); }
    
    static void _call_MyBlockMap_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MyBlockMap: public CProxyElement_CkArrayMap{
  public:
    typedef MyBlockMap local_t;
    typedef CkIndex_MyBlockMap index_t;
    typedef CProxy_MyBlockMap proxy_t;
    typedef CProxyElement_MyBlockMap element_t;
    typedef CProxySection_MyBlockMap section_t;

    CProxyElement_MyBlockMap(void) {}
    CProxyElement_MyBlockMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_MyBlockMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_MyBlockMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    MyBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MyBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MyBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MyBlockMap(void);
 */
    

};
PUPmarshall(CProxyElement_MyBlockMap)
/* ---------------- collective proxy -------------- */
class CProxy_MyBlockMap: public CProxy_CkArrayMap{
  public:
    typedef MyBlockMap local_t;
    typedef CkIndex_MyBlockMap index_t;
    typedef CProxy_MyBlockMap proxy_t;
    typedef CProxyElement_MyBlockMap element_t;
    typedef CProxySection_MyBlockMap section_t;

    CProxy_MyBlockMap(void) {}
    CProxy_MyBlockMap(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_MyBlockMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MyBlockMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_MyBlockMap operator[](int onPE) const
      {return CProxyElement_MyBlockMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    MyBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MyBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MyBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MyBlockMap(void);
 */
    
    static CkGroupID ckNew(void);

};
PUPmarshall(CProxy_MyBlockMap)
/* ---------------- section proxy -------------- */
class CProxySection_MyBlockMap: public CProxySection_CkArrayMap{
  public:
    typedef MyBlockMap local_t;
    typedef CkIndex_MyBlockMap index_t;
    typedef CProxy_MyBlockMap proxy_t;
    typedef CProxyElement_MyBlockMap element_t;
    typedef CProxySection_MyBlockMap section_t;

    CProxySection_MyBlockMap(void) {}
    CProxySection_MyBlockMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_MyBlockMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MyBlockMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_MyBlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_MyBlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    MyBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MyBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MyBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MyBlockMap(void);
 */
    

};
PUPmarshall(CProxySection_MyBlockMap)
typedef CBaseT1<CkArrayMap, CProxy_MyBlockMap> CBase_MyBlockMap;

extern void _registerwave2d(void);
extern "C" void CkRegisterMainModule(void);
#endif
