#ifndef _DECL_Main_H_
#define _DECL_Main_H_
#include "charm++.h"
#include <memory>
#include "PowerLog.decl.h"

/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly int block_height;
 */

/* DECLS: readonly int block_width;
 */

/* DECLS: readonly int array_height;
 */

/* DECLS: readonly int array_width;
 */

/* DECLS: readonly int num_chare_rows;
 */

/* DECLS: readonly int num_chare_cols;
 */

/* DECLS: readonly int min_depth;
 */

/* DECLS: readonly int max_depth;
 */

/* DECLS: readonly int nframe;
 */

/* DECLS: readonly double xctr;
 */

/* DECLS: readonly double yctr;
 */

/* DECLS: readonly double radius;
 */

/* DECLS: readonly double v;
 */

/* DECLS: readonly double ap;
 */

/* DECLS: readonly double an;
 */

/* DECLS: readonly double tmax;
 */

/* DECLS: readonly double dt;
 */

/* DECLS: readonly double cfl;
 */

/* DECLS: readonly int max_iterations;
 */

/* DECLS: readonly int refine_frequency;
 */


/* DECLS: readonly CProxy_PerProcessorChare ppc;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void printTreeInformation(const CkVec<QuadIndex > &impl_noname_1);
void terminate(void);
void startMeshGeneration(void);
void startRunning(void);
void reportCascadeStats(const int *cascade_lengths, int size);
void qdlatency(const double *elems, int size);
void remeshlatency(const double *elems, int size);
void totalWorkUnits(int total);
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
    /* DECLS: void printTreeInformation(const CkVec<QuadIndex > &impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_printTreeInformation_marshall2();
    // Entry point index lookup
    
    inline static int idx_printTreeInformation_marshall2() {
      static int epidx = reg_printTreeInformation_marshall2();
      return epidx;
    }

    
    inline static int idx_printTreeInformation(void (Main::*)(const CkVec<QuadIndex > &impl_noname_1) ) {
      return idx_printTreeInformation_marshall2();
    }


    
    static int printTreeInformation(const CkVec<QuadIndex > &impl_noname_1) { return idx_printTreeInformation_marshall2(); }
    
    static void _call_printTreeInformation_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_printTreeInformation_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_printTreeInformation_marshall2(PUP::er &p,void *msg);
    /* DECLS: void terminate(void);
     */
    // Entry point registration at startup
    
    static int reg_terminate_void();
    // Entry point index lookup
    
    inline static int idx_terminate_void() {
      static int epidx = reg_terminate_void();
      return epidx;
    }

    
    inline static int idx_terminate(void (Main::*)(void) ) {
      return idx_terminate_void();
    }


    
    static int terminate(void) { return idx_terminate_void(); }
    
    static void _call_terminate_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startMeshGeneration(void);
     */
    // Entry point registration at startup
    
    static int reg_startMeshGeneration_void();
    // Entry point index lookup
    
    inline static int idx_startMeshGeneration_void() {
      static int epidx = reg_startMeshGeneration_void();
      return epidx;
    }

    
    inline static int idx_startMeshGeneration(void (Main::*)(void) ) {
      return idx_startMeshGeneration_void();
    }


    
    static int startMeshGeneration(void) { return idx_startMeshGeneration_void(); }
    
    static void _call_startMeshGeneration_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startRunning(void);
     */
    // Entry point registration at startup
    
    static int reg_startRunning_void();
    // Entry point index lookup
    
    inline static int idx_startRunning_void() {
      static int epidx = reg_startRunning_void();
      return epidx;
    }

    
    inline static int idx_startRunning(void (Main::*)(void) ) {
      return idx_startRunning_void();
    }


    
    static int startRunning(void) { return idx_startRunning_void(); }
    
    static void _call_startRunning_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reportCascadeStats(const int *cascade_lengths, int size);
     */
    // Entry point registration at startup
    
    static int reg_reportCascadeStats_marshall6();
    // Entry point index lookup
    
    inline static int idx_reportCascadeStats_marshall6() {
      static int epidx = reg_reportCascadeStats_marshall6();
      return epidx;
    }

    
    inline static int idx_reportCascadeStats(void (Main::*)(const int *cascade_lengths, int size) ) {
      return idx_reportCascadeStats_marshall6();
    }


    
    static int reportCascadeStats(const int *cascade_lengths, int size) { return idx_reportCascadeStats_marshall6(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reportCascadeStats_marshall6();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reportCascadeStats_marshall6() {
      static int epidx = reg_redn_wrapper_reportCascadeStats_marshall6();
      return epidx;
    }
    
    static int redn_wrapper_reportCascadeStats(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reportCascadeStats_marshall6(); }
    
    static void _call_redn_wrapper_reportCascadeStats_marshall6(void* impl_msg, void* impl_obj_void);
    
    static void _call_reportCascadeStats_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reportCascadeStats_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reportCascadeStats_marshall6(PUP::er &p,void *msg);
    /* DECLS: void qdlatency(const double *elems, int size);
     */
    // Entry point registration at startup
    
    static int reg_qdlatency_marshall7();
    // Entry point index lookup
    
    inline static int idx_qdlatency_marshall7() {
      static int epidx = reg_qdlatency_marshall7();
      return epidx;
    }

    
    inline static int idx_qdlatency(void (Main::*)(const double *elems, int size) ) {
      return idx_qdlatency_marshall7();
    }


    
    static int qdlatency(const double *elems, int size) { return idx_qdlatency_marshall7(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_qdlatency_marshall7();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_qdlatency_marshall7() {
      static int epidx = reg_redn_wrapper_qdlatency_marshall7();
      return epidx;
    }
    
    static int redn_wrapper_qdlatency(CkReductionMsg* impl_msg) { return idx_redn_wrapper_qdlatency_marshall7(); }
    
    static void _call_redn_wrapper_qdlatency_marshall7(void* impl_msg, void* impl_obj_void);
    
    static void _call_qdlatency_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_qdlatency_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_qdlatency_marshall7(PUP::er &p,void *msg);
    /* DECLS: void remeshlatency(const double *elems, int size);
     */
    // Entry point registration at startup
    
    static int reg_remeshlatency_marshall8();
    // Entry point index lookup
    
    inline static int idx_remeshlatency_marshall8() {
      static int epidx = reg_remeshlatency_marshall8();
      return epidx;
    }

    
    inline static int idx_remeshlatency(void (Main::*)(const double *elems, int size) ) {
      return idx_remeshlatency_marshall8();
    }


    
    static int remeshlatency(const double *elems, int size) { return idx_remeshlatency_marshall8(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_remeshlatency_marshall8();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_remeshlatency_marshall8() {
      static int epidx = reg_redn_wrapper_remeshlatency_marshall8();
      return epidx;
    }
    
    static int redn_wrapper_remeshlatency(CkReductionMsg* impl_msg) { return idx_redn_wrapper_remeshlatency_marshall8(); }
    
    static void _call_redn_wrapper_remeshlatency_marshall8(void* impl_msg, void* impl_obj_void);
    
    static void _call_remeshlatency_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_remeshlatency_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_remeshlatency_marshall8(PUP::er &p,void *msg);
    /* DECLS: void totalWorkUnits(int total);
     */
    // Entry point registration at startup
    
    static int reg_totalWorkUnits_marshall9();
    // Entry point index lookup
    
    inline static int idx_totalWorkUnits_marshall9() {
      static int epidx = reg_totalWorkUnits_marshall9();
      return epidx;
    }

    
    inline static int idx_totalWorkUnits(void (Main::*)(int total) ) {
      return idx_totalWorkUnits_marshall9();
    }


    
    static int totalWorkUnits(int total) { return idx_totalWorkUnits_marshall9(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_totalWorkUnits_marshall9();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_totalWorkUnits_marshall9() {
      static int epidx = reg_redn_wrapper_totalWorkUnits_marshall9();
      return epidx;
    }
    
    static int redn_wrapper_totalWorkUnits(CkReductionMsg* impl_msg) { return idx_redn_wrapper_totalWorkUnits_marshall9(); }
    
    static void _call_redn_wrapper_totalWorkUnits_marshall9(void* impl_msg, void* impl_obj_void);
    
    static void _call_totalWorkUnits_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_totalWorkUnits_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_totalWorkUnits_marshall9(PUP::er &p,void *msg);
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

/* DECLS: void printTreeInformation(const CkVec<QuadIndex > &impl_noname_1);
 */
    
    void printTreeInformation(const CkVec<QuadIndex > &impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void terminate(void);
 */
    
    void terminate(void);

/* DECLS: void startMeshGeneration(void);
 */
    
    void startMeshGeneration(void);

/* DECLS: void startRunning(void);
 */
    
    void startRunning(void);

/* DECLS: void reportCascadeStats(const int *cascade_lengths, int size);
 */
    
    void reportCascadeStats(const int *cascade_lengths, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void qdlatency(const double *elems, int size);
 */
    
    void qdlatency(const double *elems, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remeshlatency(const double *elems, int size);
 */
    
    void remeshlatency(const double *elems, int size, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void totalWorkUnits(int total);
 */
    
    void totalWorkUnits(int total, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Main)
typedef CBaseT1<Chare, CProxy_Main> CBase_Main;

/* DECLS: group AdvMap: CkArrayMap{
void AdvMap(void);
};
 */
 class AdvMap;
 class CkIndex_AdvMap;
 class CProxy_AdvMap;
 class CProxyElement_AdvMap;
 class CProxySection_AdvMap;
/* --------------- index object ------------------ */
class CkIndex_AdvMap:public CProxyElement_CkArrayMap{
  public:
    typedef AdvMap local_t;
    typedef CkIndex_AdvMap index_t;
    typedef CProxy_AdvMap proxy_t;
    typedef CProxyElement_AdvMap element_t;
    typedef CProxySection_AdvMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void AdvMap(void);
     */
    // Entry point registration at startup
    
    static int reg_AdvMap_void();
    // Entry point index lookup
    
    inline static int idx_AdvMap_void() {
      static int epidx = reg_AdvMap_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_AdvMap_void(); }
    
    static void _call_AdvMap_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_AdvMap: public CProxyElement_CkArrayMap{
  public:
    typedef AdvMap local_t;
    typedef CkIndex_AdvMap index_t;
    typedef CProxy_AdvMap proxy_t;
    typedef CProxyElement_AdvMap element_t;
    typedef CProxySection_AdvMap section_t;

    CProxyElement_AdvMap(void) {}
    CProxyElement_AdvMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_AdvMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_AdvMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }

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
    AdvMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static AdvMap* ckLocalBranch(CkGroupID gID) {
      return (AdvMap*)CkLocalBranch(gID);
    }
/* DECLS: void AdvMap(void);
 */
    

};
PUPmarshall(CProxyElement_AdvMap)
/* ---------------- collective proxy -------------- */
class CProxy_AdvMap: public CProxy_CkArrayMap{
  public:
    typedef AdvMap local_t;
    typedef CkIndex_AdvMap index_t;
    typedef CProxy_AdvMap proxy_t;
    typedef CProxyElement_AdvMap element_t;
    typedef CProxySection_AdvMap section_t;

    CProxy_AdvMap(void) {}
    CProxy_AdvMap(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_AdvMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_AdvMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_AdvMap operator[](int onPE) const
      {return CProxyElement_AdvMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    AdvMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static AdvMap* ckLocalBranch(CkGroupID gID) {
      return (AdvMap*)CkLocalBranch(gID);
    }
/* DECLS: void AdvMap(void);
 */
    
    static CkGroupID ckNew(void);

};
PUPmarshall(CProxy_AdvMap)
/* ---------------- section proxy -------------- */
class CProxySection_AdvMap: public CProxySection_CkArrayMap{
  public:
    typedef AdvMap local_t;
    typedef CkIndex_AdvMap index_t;
    typedef CProxy_AdvMap proxy_t;
    typedef CProxyElement_AdvMap element_t;
    typedef CProxySection_AdvMap section_t;

    CProxySection_AdvMap(void) {}
    CProxySection_AdvMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_AdvMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_AdvMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_AdvMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_AdvMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    AdvMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static AdvMap* ckLocalBranch(CkGroupID gID) {
      return (AdvMap*)CkLocalBranch(gID);
    }
/* DECLS: void AdvMap(void);
 */
    

};
PUPmarshall(CProxySection_AdvMap)
typedef CBaseT1<CkArrayMap, CProxy_AdvMap> CBase_AdvMap;

#include "Advection.decl.h"

extern void _registerMain(void);
extern "C" void CkRegisterMainModule(void);
#endif
