#ifndef _DECL_Advection_H_
#define _DECL_Advection_H_
#include "charm++.h"
#include <memory>
/* DECLS: message InitRefineMsg{
bool isInMeshGenerationPhase;
double dx;
double dy;
double myt;
double mydt;
double refined_u[];
bool parent_nbr_exists[];
bool parent_nbr_isRefined[];
DECISION parent_nbr_decision[];
}
;
 */
class InitRefineMsg;
class CMessage_InitRefineMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_InitRefineMsg();
    static void *pack(InitRefineMsg *p);
    static InitRefineMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int);
    void *operator new(size_t, int, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ChildDataMsg{
bool isInMeshGenerationPhase;
int childNum;
int iterations;
double myt;
double mydt;
double child_u[];
bool child_nbr_exists[];
bool child_nbr_isRefined[];
DECISION child_nbr_decision[];
}
;
 */
class ChildDataMsg;
class CMessage_ChildDataMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_ChildDataMsg();
    static void *pack(ChildDataMsg *p);
    static ChildDataMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int);
    void *operator new(size_t, int, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group PerProcessorChare: IrrGroup{
PerProcessorChare(void);
void collectCascades(const CkCallback &cb);
void reduceLatencies(void);
void reduceWorkUnits(void);
};
 */
 class PerProcessorChare;
 class CkIndex_PerProcessorChare;
 class CProxy_PerProcessorChare;
 class CProxyElement_PerProcessorChare;
 class CProxySection_PerProcessorChare;
/* --------------- index object ------------------ */
class CkIndex_PerProcessorChare:public CProxyElement_IrrGroup{
  public:
    typedef PerProcessorChare local_t;
    typedef CkIndex_PerProcessorChare index_t;
    typedef CProxy_PerProcessorChare proxy_t;
    typedef CProxyElement_PerProcessorChare element_t;
    typedef CProxySection_PerProcessorChare section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PerProcessorChare(void);
     */
    // Entry point registration at startup
    
    static int reg_PerProcessorChare_void();
    // Entry point index lookup
    
    inline static int idx_PerProcessorChare_void() {
      static int epidx = reg_PerProcessorChare_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_PerProcessorChare_void(); }
    
    static void _call_PerProcessorChare_void(void* impl_msg, void* impl_obj);
    /* DECLS: void collectCascades(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_collectCascades_marshall2();
    // Entry point index lookup
    
    inline static int idx_collectCascades_marshall2() {
      static int epidx = reg_collectCascades_marshall2();
      return epidx;
    }

    
    inline static int idx_collectCascades(void (PerProcessorChare::*)(const CkCallback &cb) ) {
      return idx_collectCascades_marshall2();
    }


    
    static int collectCascades(const CkCallback &cb) { return idx_collectCascades_marshall2(); }
    
    static void _call_collectCascades_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collectCascades_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collectCascades_marshall2(PUP::er &p,void *msg);
    /* DECLS: void reduceLatencies(void);
     */
    // Entry point registration at startup
    
    static int reg_reduceLatencies_void();
    // Entry point index lookup
    
    inline static int idx_reduceLatencies_void() {
      static int epidx = reg_reduceLatencies_void();
      return epidx;
    }

    
    inline static int idx_reduceLatencies(void (PerProcessorChare::*)(void) ) {
      return idx_reduceLatencies_void();
    }


    
    static int reduceLatencies(void) { return idx_reduceLatencies_void(); }
    
    static void _call_reduceLatencies_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reduceWorkUnits(void);
     */
    // Entry point registration at startup
    
    static int reg_reduceWorkUnits_void();
    // Entry point index lookup
    
    inline static int idx_reduceWorkUnits_void() {
      static int epidx = reg_reduceWorkUnits_void();
      return epidx;
    }

    
    inline static int idx_reduceWorkUnits(void (PerProcessorChare::*)(void) ) {
      return idx_reduceWorkUnits_void();
    }


    
    static int reduceWorkUnits(void) { return idx_reduceWorkUnits_void(); }
    
    static void _call_reduceWorkUnits_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PerProcessorChare: public CProxyElement_IrrGroup{
  public:
    typedef PerProcessorChare local_t;
    typedef CkIndex_PerProcessorChare index_t;
    typedef CProxy_PerProcessorChare proxy_t;
    typedef CProxyElement_PerProcessorChare element_t;
    typedef CProxySection_PerProcessorChare section_t;

    CProxyElement_PerProcessorChare(void) {}
    CProxyElement_PerProcessorChare(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_PerProcessorChare(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_PerProcessorChare(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    PerProcessorChare* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PerProcessorChare* ckLocalBranch(CkGroupID gID) {
      return (PerProcessorChare*)CkLocalBranch(gID);
    }
/* DECLS: PerProcessorChare(void);
 */
    

/* DECLS: void collectCascades(const CkCallback &cb);
 */
    
    void collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduceLatencies(void);
 */
    
    void reduceLatencies(void);

/* DECLS: void reduceWorkUnits(void);
 */
    
    void reduceWorkUnits(void);

};
PUPmarshall(CProxyElement_PerProcessorChare)
/* ---------------- collective proxy -------------- */
class CProxy_PerProcessorChare: public CProxy_IrrGroup{
  public:
    typedef PerProcessorChare local_t;
    typedef CkIndex_PerProcessorChare index_t;
    typedef CProxy_PerProcessorChare proxy_t;
    typedef CProxyElement_PerProcessorChare element_t;
    typedef CProxySection_PerProcessorChare section_t;

    CProxy_PerProcessorChare(void) {}
    CProxy_PerProcessorChare(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_PerProcessorChare(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PerProcessorChare(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PerProcessorChare operator[](int onPE) const
      {return CProxyElement_PerProcessorChare(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    PerProcessorChare* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PerProcessorChare* ckLocalBranch(CkGroupID gID) {
      return (PerProcessorChare*)CkLocalBranch(gID);
    }
/* DECLS: PerProcessorChare(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: void collectCascades(const CkCallback &cb);
 */
    
    void collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectCascades(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectCascades(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduceLatencies(void);
 */
    
    void reduceLatencies(void);
    
    void reduceLatencies(int npes, int *pes);
    
    void reduceLatencies(CmiGroup &grp);

/* DECLS: void reduceWorkUnits(void);
 */
    
    void reduceWorkUnits(void);
    
    void reduceWorkUnits(int npes, int *pes);
    
    void reduceWorkUnits(CmiGroup &grp);

};
PUPmarshall(CProxy_PerProcessorChare)
/* ---------------- section proxy -------------- */
class CProxySection_PerProcessorChare: public CProxySection_IrrGroup{
  public:
    typedef PerProcessorChare local_t;
    typedef CkIndex_PerProcessorChare index_t;
    typedef CProxy_PerProcessorChare proxy_t;
    typedef CProxyElement_PerProcessorChare element_t;
    typedef CProxySection_PerProcessorChare section_t;

    CProxySection_PerProcessorChare(void) {}
    CProxySection_PerProcessorChare(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_PerProcessorChare(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PerProcessorChare(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_PerProcessorChare(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_PerProcessorChare(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    PerProcessorChare* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PerProcessorChare* ckLocalBranch(CkGroupID gID) {
      return (PerProcessorChare*)CkLocalBranch(gID);
    }
/* DECLS: PerProcessorChare(void);
 */
    

/* DECLS: void collectCascades(const CkCallback &cb);
 */
    
    void collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduceLatencies(void);
 */
    
    void reduceLatencies(void);

/* DECLS: void reduceWorkUnits(void);
 */
    
    void reduceWorkUnits(void);

};
PUPmarshall(CProxySection_PerProcessorChare)
typedef CBaseT1<Group, CProxy_PerProcessorChare> CBase_PerProcessorChare;

/* DECLS: array Advection: ArrayElement{
Advection(void);
Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
Advection(InitRefineMsg* impl_msg);
void printState(void);
void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
void recvParentDecision(int cascade_length);
void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
void done(void);
void rootTerminated(void);
void phase1OfMeshGenerationDone(void);
void meshUpdateReductionClient(int result);
void setstTime(void);
void generateMesh(void);
void phase2OfMeshGenerationDone(void);
void updateMesh(void);
void startRemesh(void);
void phase2Done(void);
void doRemeshing(void);
void startLdb(void);
void signalExchangeGhostsCompletion(void);
void doStep(void);
void doMeshRestructure(void);
void exchangeGhosts(void);
void phase1Done(void);
void getGhostsAndRefine(void);
void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
void getAndSendGhost(void);
void requestNextFrame(liveVizRequestMsg* impl_msg);
void free_memory(void);
void doPhase2(void);
void recvChildData(ChildDataMsg* impl_msg);
Advection(CkMigrateMessage* impl_msg);
};
 */
 class Advection;
 class CkIndex_Advection;
 class CProxy_Advection;
 class CProxyElement_Advection;
 class CProxySection_Advection;
/* --------------- index object ------------------ */
class CkIndex_Advection:public CProxyElement_ArrayElement{
  public:
    typedef Advection local_t;
    typedef CkIndex_Advection index_t;
    typedef CProxy_Advection proxy_t;
    typedef CProxyElement_Advection element_t;
    typedef CProxySection_Advection section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Advection(void);
     */
    // Entry point registration at startup
    
    static int reg_Advection_void();
    // Entry point index lookup
    
    inline static int idx_Advection_void() {
      static int epidx = reg_Advection_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Advection_void(); }
    
    static void _call_Advection_void(void* impl_msg, void* impl_obj);
    /* DECLS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
     */
    // Entry point registration at startup
    
    static int reg_Advection_marshall2();
    // Entry point index lookup
    
    inline static int idx_Advection_marshall2() {
      static int epidx = reg_Advection_marshall2();
      return epidx;
    }

    
    static int ckNew(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5) { return idx_Advection_marshall2(); }
    
    static void _call_Advection_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Advection_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Advection_marshall2(PUP::er &p,void *msg);
    /* DECLS: Advection(InitRefineMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Advection_InitRefineMsg();
    // Entry point index lookup
    
    inline static int idx_Advection_InitRefineMsg() {
      static int epidx = reg_Advection_InitRefineMsg();
      return epidx;
    }

    
    static int ckNew(InitRefineMsg* impl_msg) { return idx_Advection_InitRefineMsg(); }
    
    static void _call_Advection_InitRefineMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void printState(void);
     */
    // Entry point registration at startup
    
    static int reg_printState_void();
    // Entry point index lookup
    
    inline static int idx_printState_void() {
      static int epidx = reg_printState_void();
      return epidx;
    }

    
    inline static int idx_printState(void (Advection::*)(void) ) {
      return idx_printState_void();
    }


    
    static int printState(void) { return idx_printState_void(); }
    
    static void _call_printState_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
     */
    // Entry point registration at startup
    
    static int reg_receiveGhosts_marshall5();
    // Entry point index lookup
    
    inline static int idx_receiveGhosts_marshall5() {
      static int epidx = reg_receiveGhosts_marshall5();
      return epidx;
    }

    
    inline static int idx_receiveGhosts(void (Advection::*)(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag) ) {
      return idx_receiveGhosts_marshall5();
    }


    
    static int receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag) { return idx_receiveGhosts_marshall5(); }
    
    static void _call_receiveGhosts_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveGhosts_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveGhosts_marshall5(PUP::er &p,void *msg);
    /* DECLS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
     */
    // Entry point registration at startup
    
    static int reg_informParent_marshall6();
    // Entry point index lookup
    
    inline static int idx_informParent_marshall6() {
      static int epidx = reg_informParent_marshall6();
      return epidx;
    }

    
    inline static int idx_informParent(void (Advection::*)(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length) ) {
      return idx_informParent_marshall6();
    }


    
    static int informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length) { return idx_informParent_marshall6(); }
    
    static void _call_informParent_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_informParent_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_informParent_marshall6(PUP::er &p,void *msg);
    /* DECLS: void recvParentDecision(int cascade_length);
     */
    // Entry point registration at startup
    
    static int reg_recvParentDecision_marshall7();
    // Entry point index lookup
    
    inline static int idx_recvParentDecision_marshall7() {
      static int epidx = reg_recvParentDecision_marshall7();
      return epidx;
    }

    
    inline static int idx_recvParentDecision(void (Advection::*)(int cascade_length) ) {
      return idx_recvParentDecision_marshall7();
    }


    
    static int recvParentDecision(int cascade_length) { return idx_recvParentDecision_marshall7(); }
    
    static void _call_recvParentDecision_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvParentDecision_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvParentDecision_marshall7(PUP::er &p,void *msg);
    /* DECLS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
     */
    // Entry point registration at startup
    
    static int reg_exchangePhase1Msg_marshall8();
    // Entry point index lookup
    
    inline static int idx_exchangePhase1Msg_marshall8() {
      static int epidx = reg_exchangePhase1Msg_marshall8();
      return epidx;
    }

    
    inline static int idx_exchangePhase1Msg(void (Advection::*)(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length) ) {
      return idx_exchangePhase1Msg_marshall8();
    }


    
    static int exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length) { return idx_exchangePhase1Msg_marshall8(); }
    
    static void _call_exchangePhase1Msg_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchangePhase1Msg_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchangePhase1Msg_marshall8(PUP::er &p,void *msg);
    /* DECLS: void done(void);
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Advection::*)(void) ) {
      return idx_done_void();
    }


    
    static int done(void) { return idx_done_void(); }
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    /* DECLS: void rootTerminated(void);
     */
    // Entry point registration at startup
    
    static int reg_rootTerminated_void();
    // Entry point index lookup
    
    inline static int idx_rootTerminated_void() {
      static int epidx = reg_rootTerminated_void();
      return epidx;
    }

    
    inline static int idx_rootTerminated(void (Advection::*)(void) ) {
      return idx_rootTerminated_void();
    }


    
    static int rootTerminated(void) { return idx_rootTerminated_void(); }
    
    static void _call_rootTerminated_void(void* impl_msg, void* impl_obj);
    /* DECLS: void phase1OfMeshGenerationDone(void);
     */
    // Entry point registration at startup
    
    static int reg_phase1OfMeshGenerationDone_void();
    // Entry point index lookup
    
    inline static int idx_phase1OfMeshGenerationDone_void() {
      static int epidx = reg_phase1OfMeshGenerationDone_void();
      return epidx;
    }

    
    inline static int idx_phase1OfMeshGenerationDone(void (Advection::*)(void) ) {
      return idx_phase1OfMeshGenerationDone_void();
    }


    
    static int phase1OfMeshGenerationDone(void) { return idx_phase1OfMeshGenerationDone_void(); }
    
    static void _call_phase1OfMeshGenerationDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void meshUpdateReductionClient(int result);
     */
    // Entry point registration at startup
    
    static int reg_meshUpdateReductionClient_marshall12();
    // Entry point index lookup
    
    inline static int idx_meshUpdateReductionClient_marshall12() {
      static int epidx = reg_meshUpdateReductionClient_marshall12();
      return epidx;
    }

    
    inline static int idx_meshUpdateReductionClient(void (Advection::*)(int result) ) {
      return idx_meshUpdateReductionClient_marshall12();
    }


    
    static int meshUpdateReductionClient(int result) { return idx_meshUpdateReductionClient_marshall12(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_meshUpdateReductionClient_marshall12();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_meshUpdateReductionClient_marshall12() {
      static int epidx = reg_redn_wrapper_meshUpdateReductionClient_marshall12();
      return epidx;
    }
    
    static int redn_wrapper_meshUpdateReductionClient(CkReductionMsg* impl_msg) { return idx_redn_wrapper_meshUpdateReductionClient_marshall12(); }
    
    static void _call_redn_wrapper_meshUpdateReductionClient_marshall12(void* impl_msg, void* impl_obj_void);
    
    static void _call_meshUpdateReductionClient_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_meshUpdateReductionClient_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_meshUpdateReductionClient_marshall12(PUP::er &p,void *msg);
    /* DECLS: void setstTime(void);
     */
    // Entry point registration at startup
    
    static int reg_setstTime_void();
    // Entry point index lookup
    
    inline static int idx_setstTime_void() {
      static int epidx = reg_setstTime_void();
      return epidx;
    }

    
    inline static int idx_setstTime(void (Advection::*)(void) ) {
      return idx_setstTime_void();
    }


    
    static int setstTime(void) { return idx_setstTime_void(); }
    
    static void _call_setstTime_void(void* impl_msg, void* impl_obj);
    /* DECLS: void generateMesh(void);
     */
    // Entry point registration at startup
    
    static int reg_generateMesh_void();
    // Entry point index lookup
    
    inline static int idx_generateMesh_void() {
      static int epidx = reg_generateMesh_void();
      return epidx;
    }

    
    inline static int idx_generateMesh(void (Advection::*)(void) ) {
      return idx_generateMesh_void();
    }


    
    static int generateMesh(void) { return idx_generateMesh_void(); }
    
    static void _call_generateMesh_void(void* impl_msg, void* impl_obj);
    /* DECLS: void phase2OfMeshGenerationDone(void);
     */
    // Entry point registration at startup
    
    static int reg_phase2OfMeshGenerationDone_void();
    // Entry point index lookup
    
    inline static int idx_phase2OfMeshGenerationDone_void() {
      static int epidx = reg_phase2OfMeshGenerationDone_void();
      return epidx;
    }

    
    inline static int idx_phase2OfMeshGenerationDone(void (Advection::*)(void) ) {
      return idx_phase2OfMeshGenerationDone_void();
    }


    
    static int phase2OfMeshGenerationDone(void) { return idx_phase2OfMeshGenerationDone_void(); }
    
    static void _call_phase2OfMeshGenerationDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void updateMesh(void);
     */
    // Entry point registration at startup
    
    static int reg_updateMesh_void();
    // Entry point index lookup
    
    inline static int idx_updateMesh_void() {
      static int epidx = reg_updateMesh_void();
      return epidx;
    }

    
    inline static int idx_updateMesh(void (Advection::*)(void) ) {
      return idx_updateMesh_void();
    }


    
    static int updateMesh(void) { return idx_updateMesh_void(); }
    
    static void _call_updateMesh_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startRemesh(void);
     */
    // Entry point registration at startup
    
    static int reg_startRemesh_void();
    // Entry point index lookup
    
    inline static int idx_startRemesh_void() {
      static int epidx = reg_startRemesh_void();
      return epidx;
    }

    
    inline static int idx_startRemesh(void (Advection::*)(void) ) {
      return idx_startRemesh_void();
    }


    
    static int startRemesh(void) { return idx_startRemesh_void(); }
    
    static void _call_startRemesh_void(void* impl_msg, void* impl_obj);
    /* DECLS: void phase2Done(void);
     */
    // Entry point registration at startup
    
    static int reg_phase2Done_void();
    // Entry point index lookup
    
    inline static int idx_phase2Done_void() {
      static int epidx = reg_phase2Done_void();
      return epidx;
    }

    
    inline static int idx_phase2Done(void (Advection::*)(void) ) {
      return idx_phase2Done_void();
    }


    
    static int phase2Done(void) { return idx_phase2Done_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_phase2Done_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_phase2Done_void() {
      static int epidx = reg_redn_wrapper_phase2Done_void();
      return epidx;
    }
    
    static int redn_wrapper_phase2Done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_phase2Done_void(); }
    
    static void _call_redn_wrapper_phase2Done_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_phase2Done_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doRemeshing(void);
     */
    // Entry point registration at startup
    
    static int reg_doRemeshing_void();
    // Entry point index lookup
    
    inline static int idx_doRemeshing_void() {
      static int epidx = reg_doRemeshing_void();
      return epidx;
    }

    
    inline static int idx_doRemeshing(void (Advection::*)(void) ) {
      return idx_doRemeshing_void();
    }


    
    static int doRemeshing(void) { return idx_doRemeshing_void(); }
    
    static void _call_doRemeshing_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startLdb(void);
     */
    // Entry point registration at startup
    
    static int reg_startLdb_void();
    // Entry point index lookup
    
    inline static int idx_startLdb_void() {
      static int epidx = reg_startLdb_void();
      return epidx;
    }

    
    inline static int idx_startLdb(void (Advection::*)(void) ) {
      return idx_startLdb_void();
    }


    
    static int startLdb(void) { return idx_startLdb_void(); }
    
    static void _call_startLdb_void(void* impl_msg, void* impl_obj);
    /* DECLS: void signalExchangeGhostsCompletion(void);
     */
    // Entry point registration at startup
    
    static int reg_signalExchangeGhostsCompletion_void();
    // Entry point index lookup
    
    inline static int idx_signalExchangeGhostsCompletion_void() {
      static int epidx = reg_signalExchangeGhostsCompletion_void();
      return epidx;
    }

    
    inline static int idx_signalExchangeGhostsCompletion(void (Advection::*)(void) ) {
      return idx_signalExchangeGhostsCompletion_void();
    }


    
    static int signalExchangeGhostsCompletion(void) { return idx_signalExchangeGhostsCompletion_void(); }
    
    static void _call_signalExchangeGhostsCompletion_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doStep(void);
     */
    // Entry point registration at startup
    
    static int reg_doStep_void();
    // Entry point index lookup
    
    inline static int idx_doStep_void() {
      static int epidx = reg_doStep_void();
      return epidx;
    }

    
    inline static int idx_doStep(void (Advection::*)(void) ) {
      return idx_doStep_void();
    }


    
    static int doStep(void) { return idx_doStep_void(); }
    
    static void _call_doStep_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doMeshRestructure(void);
     */
    // Entry point registration at startup
    
    static int reg_doMeshRestructure_void();
    // Entry point index lookup
    
    inline static int idx_doMeshRestructure_void() {
      static int epidx = reg_doMeshRestructure_void();
      return epidx;
    }

    
    inline static int idx_doMeshRestructure(void (Advection::*)(void) ) {
      return idx_doMeshRestructure_void();
    }


    
    static int doMeshRestructure(void) { return idx_doMeshRestructure_void(); }
    
    static void _call_doMeshRestructure_void(void* impl_msg, void* impl_obj);
    /* DECLS: void exchangeGhosts(void);
     */
    // Entry point registration at startup
    
    static int reg_exchangeGhosts_void();
    // Entry point index lookup
    
    inline static int idx_exchangeGhosts_void() {
      static int epidx = reg_exchangeGhosts_void();
      return epidx;
    }

    
    inline static int idx_exchangeGhosts(void (Advection::*)(void) ) {
      return idx_exchangeGhosts_void();
    }


    
    static int exchangeGhosts(void) { return idx_exchangeGhosts_void(); }
    
    static void _call_exchangeGhosts_void(void* impl_msg, void* impl_obj);
    /* DECLS: void phase1Done(void);
     */
    // Entry point registration at startup
    
    static int reg_phase1Done_void();
    // Entry point index lookup
    
    inline static int idx_phase1Done_void() {
      static int epidx = reg_phase1Done_void();
      return epidx;
    }

    
    inline static int idx_phase1Done(void (Advection::*)(void) ) {
      return idx_phase1Done_void();
    }


    
    static int phase1Done(void) { return idx_phase1Done_void(); }
    
    static void _call_phase1Done_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getGhostsAndRefine(void);
     */
    // Entry point registration at startup
    
    static int reg_getGhostsAndRefine_void();
    // Entry point index lookup
    
    inline static int idx_getGhostsAndRefine_void() {
      static int epidx = reg_getGhostsAndRefine_void();
      return epidx;
    }

    
    inline static int idx_getGhostsAndRefine(void (Advection::*)(void) ) {
      return idx_getGhostsAndRefine_void();
    }


    
    static int getGhostsAndRefine(void) { return idx_getGhostsAndRefine_void(); }
    
    static void _call_getGhostsAndRefine_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
     */
    // Entry point registration at startup
    
    static int reg_receiveRefGhosts_marshall27();
    // Entry point index lookup
    
    inline static int idx_receiveRefGhosts_marshall27() {
      static int epidx = reg_receiveRefGhosts_marshall27();
      return epidx;
    }

    
    inline static int idx_receiveRefGhosts(void (Advection::*)(int impl_noname_a, int impl_noname_b, int width, const double *u) ) {
      return idx_receiveRefGhosts_marshall27();
    }


    
    static int receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u) { return idx_receiveRefGhosts_marshall27(); }
    
    static void _call_receiveRefGhosts_marshall27(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveRefGhosts_marshall27(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveRefGhosts_marshall27(PUP::er &p,void *msg);
    /* DECLS: void getAndSendGhost(void);
     */
    // Entry point registration at startup
    
    static int reg_getAndSendGhost_void();
    // Entry point index lookup
    
    inline static int idx_getAndSendGhost_void() {
      static int epidx = reg_getAndSendGhost_void();
      return epidx;
    }

    
    inline static int idx_getAndSendGhost(void (Advection::*)(void) ) {
      return idx_getAndSendGhost_void();
    }


    
    static int getAndSendGhost(void) { return idx_getAndSendGhost_void(); }
    
    static void _call_getAndSendGhost_void(void* impl_msg, void* impl_obj);
    /* DECLS: void requestNextFrame(liveVizRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_requestNextFrame_liveVizRequestMsg();
    // Entry point index lookup
    
    inline static int idx_requestNextFrame_liveVizRequestMsg() {
      static int epidx = reg_requestNextFrame_liveVizRequestMsg();
      return epidx;
    }

    
    inline static int idx_requestNextFrame(void (Advection::*)(liveVizRequestMsg* impl_msg) ) {
      return idx_requestNextFrame_liveVizRequestMsg();
    }


    
    static int requestNextFrame(liveVizRequestMsg* impl_msg) { return idx_requestNextFrame_liveVizRequestMsg(); }
    
    static void _call_requestNextFrame_liveVizRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void free_memory(void);
     */
    // Entry point registration at startup
    
    static int reg_free_memory_void();
    // Entry point index lookup
    
    inline static int idx_free_memory_void() {
      static int epidx = reg_free_memory_void();
      return epidx;
    }

    
    inline static int idx_free_memory(void (Advection::*)(void) ) {
      return idx_free_memory_void();
    }


    
    static int free_memory(void) { return idx_free_memory_void(); }
    
    static void _call_free_memory_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doPhase2(void);
     */
    // Entry point registration at startup
    
    static int reg_doPhase2_void();
    // Entry point index lookup
    
    inline static int idx_doPhase2_void() {
      static int epidx = reg_doPhase2_void();
      return epidx;
    }

    
    inline static int idx_doPhase2(void (Advection::*)(void) ) {
      return idx_doPhase2_void();
    }


    
    static int doPhase2(void) { return idx_doPhase2_void(); }
    
    static void _call_doPhase2_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvChildData(ChildDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvChildData_ChildDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvChildData_ChildDataMsg() {
      static int epidx = reg_recvChildData_ChildDataMsg();
      return epidx;
    }

    
    inline static int idx_recvChildData(void (Advection::*)(ChildDataMsg* impl_msg) ) {
      return idx_recvChildData_ChildDataMsg();
    }


    
    static int recvChildData(ChildDataMsg* impl_msg) { return idx_recvChildData_ChildDataMsg(); }
    
    static void _call_recvChildData_ChildDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Advection(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Advection_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Advection_CkMigrateMessage() {
      static int epidx = reg_Advection_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Advection_CkMigrateMessage(); }
    
    static void _call_Advection_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Advection : public CProxyElement_ArrayElement{
  public:
    typedef Advection local_t;
    typedef CkIndex_Advection index_t;
    typedef CProxy_Advection proxy_t;
    typedef CProxyElement_Advection element_t;
    typedef CProxySection_Advection section_t;

    CProxyElement_Advection(void) {}
    CProxyElement_Advection(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

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

    Advection *ckLocal(void) const
    { return (Advection *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Advection(const CkArrayID &aid,const CkArrayIndexQuadIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Advection(const CkArrayID &aid,const CkArrayIndexQuadIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Advection(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Advection(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Advection(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */
    
    void insert(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: Advection(InitRefineMsg* impl_msg);
 */
    
    void insert(InitRefineMsg* impl_msg, int onPE=-1);
/* DECLS: void printState(void);
 */
    
    void printState(void) ;

/* DECLS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */
    
    void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */
    
    void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvParentDecision(int cascade_length);
 */
    
    void recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */
    
    void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void done(void);
 */
    
    void done(void) ;

/* DECLS: void rootTerminated(void);
 */
    
    void rootTerminated(void) ;

/* DECLS: void phase1OfMeshGenerationDone(void);
 */
    
    void phase1OfMeshGenerationDone(void) ;

/* DECLS: void meshUpdateReductionClient(int result);
 */
    
    void meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setstTime(void);
 */
    
    void setstTime(void) ;

/* DECLS: void generateMesh(void);
 */
    
    void generateMesh(void) ;

/* DECLS: void phase2OfMeshGenerationDone(void);
 */
    
    void phase2OfMeshGenerationDone(void) ;

/* DECLS: void updateMesh(void);
 */
    
    void updateMesh(void) ;

/* DECLS: void startRemesh(void);
 */
    
    void startRemesh(void) ;

/* DECLS: void phase2Done(void);
 */
    
    void phase2Done(void) ;

/* DECLS: void doRemeshing(void);
 */
    
    void doRemeshing(void) ;

/* DECLS: void startLdb(void);
 */
    
    void startLdb(void) ;

/* DECLS: void signalExchangeGhostsCompletion(void);
 */
    
    void signalExchangeGhostsCompletion(void) ;

/* DECLS: void doStep(void);
 */
    
    void doStep(void) ;

/* DECLS: void doMeshRestructure(void);
 */
    
    void doMeshRestructure(void) ;

/* DECLS: void exchangeGhosts(void);
 */
    
    void exchangeGhosts(void) ;

/* DECLS: void phase1Done(void);
 */
    
    void phase1Done(void) ;

/* DECLS: void getGhostsAndRefine(void);
 */
    
    void getGhostsAndRefine(void) ;

/* DECLS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */
    
    void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAndSendGhost(void);
 */
    
    void getAndSendGhost(void) ;

/* DECLS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */
    
    void requestNextFrame(liveVizRequestMsg* impl_msg) ;

/* DECLS: void free_memory(void);
 */
    
    void free_memory(void) ;

/* DECLS: void doPhase2(void);
 */
    
    void doPhase2(void) ;

/* DECLS: void recvChildData(ChildDataMsg* impl_msg);
 */
    
    void recvChildData(ChildDataMsg* impl_msg) ;

/* DECLS: Advection(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Advection)
/* ---------------- collective proxy -------------- */
 class CProxy_Advection : public CProxy_ArrayElement{
  public:
    typedef Advection local_t;
    typedef CkIndex_Advection index_t;
    typedef CProxy_Advection proxy_t;
    typedef CProxyElement_Advection element_t;
    typedef CProxySection_Advection section_t;

    CProxy_Advection(void) {}
    CProxy_Advection(const ArrayElement *e) : CProxy_ArrayElement(e){  }

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
    CProxyElement_Advection operator [] (const CkArrayIndexQuadIndex &idx) const
    { return CProxyElement_Advection(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Advection operator() (const CkArrayIndexQuadIndex &idx) const
    { return CProxyElement_Advection(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_Advection(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Advection(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Advection(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts);

/* DECLS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */
    
    static CkArrayID ckNew(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Advection(InitRefineMsg* impl_msg);
 */
    
    static CkArrayID ckNew(InitRefineMsg* impl_msg, const CkArrayOptions &opts);

/* DECLS: void printState(void);
 */
    
    void printState(void) ;

/* DECLS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */
    
    void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */
    
    void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvParentDecision(int cascade_length);
 */
    
    void recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */
    
    void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void done(void);
 */
    
    void done(void) ;

/* DECLS: void rootTerminated(void);
 */
    
    void rootTerminated(void) ;

/* DECLS: void phase1OfMeshGenerationDone(void);
 */
    
    void phase1OfMeshGenerationDone(void) ;

/* DECLS: void meshUpdateReductionClient(int result);
 */
    
    void meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setstTime(void);
 */
    
    void setstTime(void) ;

/* DECLS: void generateMesh(void);
 */
    
    void generateMesh(void) ;

/* DECLS: void phase2OfMeshGenerationDone(void);
 */
    
    void phase2OfMeshGenerationDone(void) ;

/* DECLS: void updateMesh(void);
 */
    
    void updateMesh(void) ;

/* DECLS: void startRemesh(void);
 */
    
    void startRemesh(void) ;

/* DECLS: void phase2Done(void);
 */
    
    void phase2Done(void) ;

/* DECLS: void doRemeshing(void);
 */
    
    void doRemeshing(void) ;

/* DECLS: void startLdb(void);
 */
    
    void startLdb(void) ;

/* DECLS: void signalExchangeGhostsCompletion(void);
 */
    
    void signalExchangeGhostsCompletion(void) ;

/* DECLS: void doStep(void);
 */
    
    void doStep(void) ;

/* DECLS: void doMeshRestructure(void);
 */
    
    void doMeshRestructure(void) ;

/* DECLS: void exchangeGhosts(void);
 */
    
    void exchangeGhosts(void) ;

/* DECLS: void phase1Done(void);
 */
    
    void phase1Done(void) ;

/* DECLS: void getGhostsAndRefine(void);
 */
    
    void getGhostsAndRefine(void) ;

/* DECLS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */
    
    void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAndSendGhost(void);
 */
    
    void getAndSendGhost(void) ;

/* DECLS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */
    
    void requestNextFrame(liveVizRequestMsg* impl_msg) ;

/* DECLS: void free_memory(void);
 */
    
    void free_memory(void) ;

/* DECLS: void doPhase2(void);
 */
    
    void doPhase2(void) ;

/* DECLS: void recvChildData(ChildDataMsg* impl_msg);
 */
    
    void recvChildData(ChildDataMsg* impl_msg) ;

/* DECLS: Advection(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Advection)
/* ---------------- section proxy -------------- */
 class CProxySection_Advection : public CProxySection_ArrayElement{
  public:
    typedef Advection local_t;
    typedef CkIndex_Advection index_t;
    typedef CProxy_Advection proxy_t;
    typedef CProxyElement_Advection element_t;
    typedef CProxySection_Advection section_t;

    CProxySection_Advection(void) {}

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
    CProxyElement_Advection operator [] (const CkArrayIndexQuadIndex &idx) const
        {return CProxyElement_Advection(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Advection operator() (const CkArrayIndexQuadIndex &idx) const
        {return CProxyElement_Advection(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_Advection(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Advection(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Advection(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Advection(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Advection(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Advection(void);
 */
    

/* DECLS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */
    

/* DECLS: Advection(InitRefineMsg* impl_msg);
 */
    

/* DECLS: void printState(void);
 */
    
    void printState(void) ;

/* DECLS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */
    
    void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */
    
    void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvParentDecision(int cascade_length);
 */
    
    void recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */
    
    void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void done(void);
 */
    
    void done(void) ;

/* DECLS: void rootTerminated(void);
 */
    
    void rootTerminated(void) ;

/* DECLS: void phase1OfMeshGenerationDone(void);
 */
    
    void phase1OfMeshGenerationDone(void) ;

/* DECLS: void meshUpdateReductionClient(int result);
 */
    
    void meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setstTime(void);
 */
    
    void setstTime(void) ;

/* DECLS: void generateMesh(void);
 */
    
    void generateMesh(void) ;

/* DECLS: void phase2OfMeshGenerationDone(void);
 */
    
    void phase2OfMeshGenerationDone(void) ;

/* DECLS: void updateMesh(void);
 */
    
    void updateMesh(void) ;

/* DECLS: void startRemesh(void);
 */
    
    void startRemesh(void) ;

/* DECLS: void phase2Done(void);
 */
    
    void phase2Done(void) ;

/* DECLS: void doRemeshing(void);
 */
    
    void doRemeshing(void) ;

/* DECLS: void startLdb(void);
 */
    
    void startLdb(void) ;

/* DECLS: void signalExchangeGhostsCompletion(void);
 */
    
    void signalExchangeGhostsCompletion(void) ;

/* DECLS: void doStep(void);
 */
    
    void doStep(void) ;

/* DECLS: void doMeshRestructure(void);
 */
    
    void doMeshRestructure(void) ;

/* DECLS: void exchangeGhosts(void);
 */
    
    void exchangeGhosts(void) ;

/* DECLS: void phase1Done(void);
 */
    
    void phase1Done(void) ;

/* DECLS: void getGhostsAndRefine(void);
 */
    
    void getGhostsAndRefine(void) ;

/* DECLS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */
    
    void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void getAndSendGhost(void);
 */
    
    void getAndSendGhost(void) ;

/* DECLS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */
    
    void requestNextFrame(liveVizRequestMsg* impl_msg) ;

/* DECLS: void free_memory(void);
 */
    
    void free_memory(void) ;

/* DECLS: void doPhase2(void);
 */
    
    void doPhase2(void) ;

/* DECLS: void recvChildData(ChildDataMsg* impl_msg);
 */
    
    void recvChildData(ChildDataMsg* impl_msg) ;

/* DECLS: Advection(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Advection)
#define Advection_SDAG_CODE                                                    \
public:                                                                        \
  void rootTerminated();                                                       \
private:                                                                       \
  void rootTerminated_end();                                                   \
  void _atomic_0();                                                            \
public:                                                                        \
  void setstTime();                                                            \
private:                                                                       \
  void setstTime_end();                                                        \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _atomic_1();                                                            \
public:                                                                        \
  void generateMesh();                                                         \
private:                                                                       \
  void generateMesh_end();                                                     \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _atomic_2();                                                            \
  CWhenTrigger* _when_0();                                                     \
  void _when_0_end();                                                          \
  void _atomic_3();                                                            \
public:                                                                        \
  void phase2OfMeshGenerationDone();                                           \
private:                                                                       \
  void phase2OfMeshGenerationDone_end();                                       \
  void _slist_2();                                                             \
  void _slist_2_end();                                                         \
  void _atomic_4();                                                            \
  CWhenTrigger* _when_1();                                                     \
  void _when_1_end(int result);                                                \
  void _atomic_5(int result);                                                  \
public:                                                                        \
  void startRemesh();                                                          \
private:                                                                       \
  void startRemesh_end();                                                      \
  void _slist_3();                                                             \
  void _slist_3_end();                                                         \
  void _atomic_6();                                                            \
  CWhenTrigger* _when_2();                                                     \
  void _when_2_end();                                                          \
  void _atomic_7();                                                            \
public:                                                                        \
  void phase2Done();                                                           \
private:                                                                       \
  void phase2Done_end();                                                       \
  void _slist_4();                                                             \
  void _slist_4_end();                                                         \
  void _atomic_8();                                                            \
public:                                                                        \
  void doStep();                                                               \
private:                                                                       \
  void doStep_end();                                                           \
  void _slist_5();                                                             \
  void _slist_5_end();                                                         \
  void _atomic_9();                                                            \
  CWhenTrigger* _when_3();                                                     \
  void _when_3_end();                                                          \
  void _atomic_10();                                                           \
public:                                                                        \
  void doMeshRestructure();                                                    \
private:                                                                       \
  void doMeshRestructure_end();                                                \
  void _slist_6();                                                             \
  void _slist_6_end();                                                         \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _else_0();                                                              \
  void _else_0_end();                                                          \
  void _slist_7();                                                             \
  void _slist_7_end();                                                         \
  void _atomic_11();                                                           \
  void _slist_8();                                                             \
  void _slist_8_end();                                                         \
  void _atomic_12();                                                           \
  CWhenTrigger* _when_4();                                                     \
  void _when_4_end();                                                          \
  void _atomic_13();                                                           \
public:                                                                        \
  void exchangeGhosts();                                                       \
private:                                                                       \
  void exchangeGhosts_end();                                                   \
  void _slist_9();                                                             \
  void _slist_9_end();                                                         \
  void _atomic_14();                                                           \
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_10();                                                            \
  void _slist_10_end();                                                        \
  CWhenTrigger* _when_5();                                                     \
  void _when_5_end(int iter, int dir, int width, double * u1, QuadIndex sender, int tag);\
  void _atomic_15(int iter, int dir, int width, double * u1, QuadIndex sender, int tag);\
  void _atomic_16();                                                           \
public:                                                                        \
  void getGhostsAndRefine();                                                   \
private:                                                                       \
  void getGhostsAndRefine_end();                                               \
  void _slist_11();                                                            \
  void _slist_11_end();                                                        \
  void _for_1();                                                               \
  void _for_1_end();                                                           \
  void _slist_12();                                                            \
  void _slist_12_end();                                                        \
  CWhenTrigger* _when_6();                                                     \
  void _when_6_end(int iter, int dir, int width, double * u1, QuadIndex sender, int tag);\
  void _atomic_17(int iter, int dir, int width, double * u1, QuadIndex sender, int tag);\
  void _atomic_18();                                                           \
public:                                                                        \
  void getAndSendGhost();                                                      \
private:                                                                       \
  void getAndSendGhost_end();                                                  \
  void _slist_13();                                                            \
  void _slist_13_end();                                                        \
  void _atomic_19();                                                           \
  CWhenTrigger* _when_7();                                                     \
  void _when_7_end(int iter, int dir, int width, double * u1);                 \
  void _atomic_20(int iter, int dir, int width, double * u1);                  \
public:                                                                        \
  void phase1OfMeshGenerationDone(void);                                       \
  void meshUpdateReductionClient(int result);                                  \
  void phase1Done(void);                                                       \
  void signalExchangeGhostsCompletion(void);                                   \
  void receiveGhosts(int iter, int dir, int width, double *u1, QuadIndex sender, int tag);\
  void receiveRefGhosts(int iter, int dir, int width, double *u1);             \
public:                                                                        \
  std::auto_ptr<CDep> __cDep;                                                  \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void __sdag_pup(PUP::er &p);                                                 \
  static void __sdag_register();                                               \
  static int _sdag_idx_Advection_atomic_0();                                   \
  static int _sdag_reg_Advection_atomic_0();                                   \
  static int _sdag_idx_Advection_atomic_1();                                   \
  static int _sdag_reg_Advection_atomic_1();                                   \
  static int _sdag_idx_Advection_call_remeshing_for_mesh_update();             \
  static int _sdag_reg_Advection_call_remeshing_for_mesh_update();             \
  static int _sdag_idx_Advection_atomic_3();                                   \
  static int _sdag_reg_Advection_atomic_3();                                   \
  static int _sdag_idx_Advection_atomic_4();                                   \
  static int _sdag_reg_Advection_atomic_4();                                   \
  static int _sdag_idx_Advection_atomic_5();                                   \
  static int _sdag_reg_Advection_atomic_5();                                   \
  static int _sdag_idx_Advection_doMeshRestructure();                          \
  static int _sdag_reg_Advection_doMeshRestructure();                          \
  static int _sdag_idx_Advection_atomic_7();                                   \
  static int _sdag_reg_Advection_atomic_7();                                   \
  static int _sdag_idx_Advection_atomic_8();                                   \
  static int _sdag_reg_Advection_atomic_8();                                   \
  static int _sdag_idx_Advection_begin_iteration();                            \
  static int _sdag_reg_Advection_begin_iteration();                            \
  static int _sdag_idx_Advection_doWork();                                     \
  static int _sdag_reg_Advection_doWork();                                     \
  static int _sdag_idx_Advection_exchange_ghosts_before_remeshing();           \
  static int _sdag_reg_Advection_exchange_ghosts_before_remeshing();           \
  static int _sdag_idx_Advection_do_remeshing_on_leaves();                     \
  static int _sdag_reg_Advection_do_remeshing_on_leaves();                     \
  static int _sdag_idx_Advection_do_remeshing_on_internal_nodes();             \
  static int _sdag_reg_Advection_do_remeshing_on_internal_nodes();             \
  static int _sdag_idx_Advection_send_whatever_data_you_can();                 \
  static int _sdag_reg_Advection_send_whatever_data_you_can();                 \
  static int _sdag_idx_Advection_receive_ghosts();                             \
  static int _sdag_reg_Advection_receive_ghosts();                             \
  static int _sdag_idx_Advection_signal_exchange_ghost_completion();           \
  static int _sdag_reg_Advection_signal_exchange_ghost_completion();           \
  static int _sdag_idx_Advection_save_ghosts();                                \
  static int _sdag_reg_Advection_save_ghosts();                                \
  static int _sdag_idx_Advection_refine();                                     \
  static int _sdag_reg_Advection_refine();                                     \
  static int _sdag_idx_Advection_atomic_19();                                  \
  static int _sdag_reg_Advection_atomic_19();                                  \
  static int _sdag_idx_Advection_interpolate_and_send();                       \
  static int _sdag_reg_Advection_interpolate_and_send();                       \

typedef CBaseT1<ArrayElementT<QuadIndex>, CProxy_Advection> CBase_Advection;

extern void _registerAdvection(void);
#endif
