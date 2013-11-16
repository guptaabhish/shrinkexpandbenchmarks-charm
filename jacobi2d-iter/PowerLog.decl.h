#ifndef _DECL_PowerLog_H_
#define _DECL_PowerLog_H_
#include "charm++.h"
#include <memory>
/* DECLS: group PowerLogger: IrrGroup{
PowerLogger(int impl_noname_0);
};
 */
 class PowerLogger;
 class CkIndex_PowerLogger;
 class CProxy_PowerLogger;
 class CProxyElement_PowerLogger;
 class CProxySection_PowerLogger;
/* --------------- index object ------------------ */
class CkIndex_PowerLogger:public CProxyElement_IrrGroup{
  public:
    typedef PowerLogger local_t;
    typedef CkIndex_PowerLogger index_t;
    typedef CProxy_PowerLogger proxy_t;
    typedef CProxyElement_PowerLogger element_t;
    typedef CProxySection_PowerLogger section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PowerLogger(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_PowerLogger_marshall1();
    // Entry point index lookup
    
    inline static int idx_PowerLogger_marshall1() {
      static int epidx = reg_PowerLogger_marshall1();
      return epidx;
    }

    
    static int ckNew(int impl_noname_0) { return idx_PowerLogger_marshall1(); }
    
    static void _call_PowerLogger_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PowerLogger_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PowerLogger_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PowerLogger: public CProxyElement_IrrGroup{
  public:
    typedef PowerLogger local_t;
    typedef CkIndex_PowerLogger index_t;
    typedef CProxy_PowerLogger proxy_t;
    typedef CProxyElement_PowerLogger element_t;
    typedef CProxySection_PowerLogger section_t;

    CProxyElement_PowerLogger(void) {}
    CProxyElement_PowerLogger(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_PowerLogger(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_PowerLogger(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

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
    PowerLogger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PowerLogger* ckLocalBranch(CkGroupID gID) {
      return (PowerLogger*)CkLocalBranch(gID);
    }
/* DECLS: PowerLogger(int impl_noname_0);
 */
    

};
PUPmarshall(CProxyElement_PowerLogger)
/* ---------------- collective proxy -------------- */
class CProxy_PowerLogger: public CProxy_IrrGroup{
  public:
    typedef PowerLogger local_t;
    typedef CkIndex_PowerLogger index_t;
    typedef CProxy_PowerLogger proxy_t;
    typedef CProxyElement_PowerLogger element_t;
    typedef CProxySection_PowerLogger section_t;

    CProxy_PowerLogger(void) {}
    CProxy_PowerLogger(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_PowerLogger(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PowerLogger(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PowerLogger operator[](int onPE) const
      {return CProxyElement_PowerLogger(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    PowerLogger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PowerLogger* ckLocalBranch(CkGroupID gID) {
      return (PowerLogger*)CkLocalBranch(gID);
    }
/* DECLS: PowerLogger(int impl_noname_0);
 */
    
    static CkGroupID ckNew(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PowerLogger(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_PowerLogger)
/* ---------------- section proxy -------------- */
class CProxySection_PowerLogger: public CProxySection_IrrGroup{
  public:
    typedef PowerLogger local_t;
    typedef CkIndex_PowerLogger index_t;
    typedef CProxy_PowerLogger proxy_t;
    typedef CProxyElement_PowerLogger element_t;
    typedef CProxySection_PowerLogger section_t;

    CProxySection_PowerLogger(void) {}
    CProxySection_PowerLogger(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_PowerLogger(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PowerLogger(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_PowerLogger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_PowerLogger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    PowerLogger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PowerLogger* ckLocalBranch(CkGroupID gID) {
      return (PowerLogger*)CkLocalBranch(gID);
    }
/* DECLS: PowerLogger(int impl_noname_0);
 */
    

};
PUPmarshall(CProxySection_PowerLogger)
typedef CBaseT1<Group, CProxy_PowerLogger> CBase_PowerLogger;

extern void _registerPowerLog(void);
#endif
