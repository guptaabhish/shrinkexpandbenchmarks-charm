/* DEFS: message InitRefineMsg{
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
#ifndef CK_TEMPLATES_ONLY
void *CMessage_InitRefineMsg::operator new(size_t s){
  return InitRefineMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_InitRefineMsg::operator new(size_t s, int* sz){
  return InitRefineMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_InitRefineMsg::operator new(size_t s, int* sz,const int pb){
  return InitRefineMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_InitRefineMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return InitRefineMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_InitRefineMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, const int p) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return InitRefineMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_InitRefineMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(double)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(bool)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(bool)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN8(sizeof(DECISION)*sizes[3]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[4], pb);
}
CMessage_InitRefineMsg::CMessage_InitRefineMsg() {
InitRefineMsg *newmsg = (InitRefineMsg *)this;
  newmsg->refined_u = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->parent_nbr_exists = (bool *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->parent_nbr_isRefined = (bool *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->parent_nbr_decision = (DECISION *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
}
void CMessage_InitRefineMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_InitRefineMsg::pack(InitRefineMsg *msg) {
  msg->refined_u = (double *) ((char *)msg->refined_u - (char *)msg);
  msg->parent_nbr_exists = (bool *) ((char *)msg->parent_nbr_exists - (char *)msg);
  msg->parent_nbr_isRefined = (bool *) ((char *)msg->parent_nbr_isRefined - (char *)msg);
  msg->parent_nbr_decision = (DECISION *) ((char *)msg->parent_nbr_decision - (char *)msg);
  return (void *) msg;
}
InitRefineMsg* CMessage_InitRefineMsg::unpack(void* buf) {
  InitRefineMsg *msg = (InitRefineMsg *) buf;
  msg->refined_u = (double *) ((size_t)msg->refined_u + (char *)msg);
  msg->parent_nbr_exists = (bool *) ((size_t)msg->parent_nbr_exists + (char *)msg);
  msg->parent_nbr_isRefined = (bool *) ((size_t)msg->parent_nbr_isRefined + (char *)msg);
  msg->parent_nbr_decision = (DECISION *) ((size_t)msg->parent_nbr_decision + (char *)msg);
  return msg;
}
int CMessage_InitRefineMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ChildDataMsg{
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
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ChildDataMsg::operator new(size_t s){
  return ChildDataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ChildDataMsg::operator new(size_t s, int* sz){
  return ChildDataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ChildDataMsg::operator new(size_t s, int* sz,const int pb){
  return ChildDataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ChildDataMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return ChildDataMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ChildDataMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, const int p) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return ChildDataMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ChildDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(double)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(bool)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(bool)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN8(sizeof(DECISION)*sizes[3]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[4], pb);
}
CMessage_ChildDataMsg::CMessage_ChildDataMsg() {
ChildDataMsg *newmsg = (ChildDataMsg *)this;
  newmsg->child_u = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->child_nbr_exists = (bool *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->child_nbr_isRefined = (bool *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->child_nbr_decision = (DECISION *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
}
void CMessage_ChildDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ChildDataMsg::pack(ChildDataMsg *msg) {
  msg->child_u = (double *) ((char *)msg->child_u - (char *)msg);
  msg->child_nbr_exists = (bool *) ((char *)msg->child_nbr_exists - (char *)msg);
  msg->child_nbr_isRefined = (bool *) ((char *)msg->child_nbr_isRefined - (char *)msg);
  msg->child_nbr_decision = (DECISION *) ((char *)msg->child_nbr_decision - (char *)msg);
  return (void *) msg;
}
ChildDataMsg* CMessage_ChildDataMsg::unpack(void* buf) {
  ChildDataMsg *msg = (ChildDataMsg *) buf;
  msg->child_u = (double *) ((size_t)msg->child_u + (char *)msg);
  msg->child_nbr_exists = (bool *) ((size_t)msg->child_nbr_exists + (char *)msg);
  msg->child_nbr_isRefined = (bool *) ((size_t)msg->child_nbr_isRefined + (char *)msg);
  msg->child_nbr_decision = (DECISION *) ((size_t)msg->child_nbr_decision + (char *)msg);
  return msg;
}
int CMessage_ChildDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PerProcessorChare: IrrGroup{
PerProcessorChare(void);
void collectCascades(const CkCallback &cb);
void reduceLatencies(void);
void reduceWorkUnits(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PerProcessorChare::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PerProcessorChare(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectCascades(const CkCallback &cb);
 */

void CProxyElement_PerProcessorChare::collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceLatencies(void);
 */

void CProxyElement_PerProcessorChare::reduceLatencies(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceWorkUnits(void);
 */

void CProxyElement_PerProcessorChare::reduceWorkUnits(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PerProcessorChare(void);
 */

CkGroupID CProxy_PerProcessorChare::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_PerProcessorChare::__idx, CkIndex_PerProcessorChare::idx_PerProcessorChare_void(), impl_msg);
}

// Entry point registration function

int CkIndex_PerProcessorChare::reg_PerProcessorChare_void() {
  int epidx = CkRegisterEp("PerProcessorChare(void)",
      _call_PerProcessorChare_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_PerProcessorChare::_call_PerProcessorChare_void(void* impl_msg, void* impl_obj_void)
{
  PerProcessorChare* impl_obj = static_cast<PerProcessorChare *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PerProcessorChare();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectCascades(const CkCallback &cb);
 */

void CProxy_PerProcessorChare::collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID(),0);
}

void CProxy_PerProcessorChare::collectCascades(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_PerProcessorChare::collectCascades(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_PerProcessorChare::reg_collectCascades_marshall2() {
  int epidx = CkRegisterEp("collectCascades(const CkCallback &cb)",
      _call_collectCascades_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collectCascades_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collectCascades_marshall2);

  return epidx;
}


void CkIndex_PerProcessorChare::_call_collectCascades_marshall2(void* impl_msg, void* impl_obj_void)
{
  PerProcessorChare* impl_obj = static_cast<PerProcessorChare *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectCascades(cb);
}

int CkIndex_PerProcessorChare::_callmarshall_collectCascades_marshall2(char* impl_buf, void* impl_obj_void) {
  PerProcessorChare* impl_obj = static_cast< PerProcessorChare *>(impl_obj_void);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectCascades(cb);
  return implP.size();
}

void CkIndex_PerProcessorChare::_marshallmessagepup_collectCascades_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  CkCallback cb; implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceLatencies(void);
 */

void CProxy_PerProcessorChare::reduceLatencies(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID(),0);
}

void CProxy_PerProcessorChare::reduceLatencies(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_PerProcessorChare::reduceLatencies(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_PerProcessorChare::reg_reduceLatencies_void() {
  int epidx = CkRegisterEp("reduceLatencies(void)",
      _call_reduceLatencies_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_PerProcessorChare::_call_reduceLatencies_void(void* impl_msg, void* impl_obj_void)
{
  PerProcessorChare* impl_obj = static_cast<PerProcessorChare *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->reduceLatencies();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceWorkUnits(void);
 */

void CProxy_PerProcessorChare::reduceWorkUnits(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID(),0);
}

void CProxy_PerProcessorChare::reduceWorkUnits(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_PerProcessorChare::reduceWorkUnits(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_PerProcessorChare::reg_reduceWorkUnits_void() {
  int epidx = CkRegisterEp("reduceWorkUnits(void)",
      _call_reduceWorkUnits_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_PerProcessorChare::_call_reduceWorkUnits_void(void* impl_msg, void* impl_obj_void)
{
  PerProcessorChare* impl_obj = static_cast<PerProcessorChare *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->reduceWorkUnits();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PerProcessorChare(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectCascades(const CkCallback &cb);
 */

void CProxySection_PerProcessorChare::collectCascades(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CkCallback &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_collectCascades_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceLatencies(void);
 */

void CProxySection_PerProcessorChare::reduceLatencies(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_reduceLatencies_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceWorkUnits(void);
 */

void CProxySection_PerProcessorChare::reduceWorkUnits(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PerProcessorChare::idx_reduceWorkUnits_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PerProcessorChare::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PerProcessorChare::isIrreducible());
  // REG: PerProcessorChare(void);
  idx_PerProcessorChare_void();
  CkRegisterDefaultCtor(__idx, idx_PerProcessorChare_void());

  // REG: void collectCascades(const CkCallback &cb);
  idx_collectCascades_marshall2();

  // REG: void reduceLatencies(void);
  idx_reduceLatencies_void();

  // REG: void reduceWorkUnits(void);
  idx_reduceWorkUnits_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Advection: ArrayElement{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Advection::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(void);
 */

void CProxyElement_Advection::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */

void CProxyElement_Advection::insert(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5, int onPE, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
  }
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_marshall2(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(InitRefineMsg* impl_msg);
 */

void CProxyElement_Advection::insert(InitRefineMsg* impl_msg, int onPE)
{ 
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_InitRefineMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void printState(void);
 */

void CProxyElement_Advection::printState(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_printState_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */

void CProxyElement_Advection::receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_receiveGhosts_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */

void CProxyElement_Advection::informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_informParent_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvParentDecision(int cascade_length);
 */

void CProxyElement_Advection::recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_recvParentDecision_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */

void CProxyElement_Advection::exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_exchangePhase1Msg_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(void);
 */

void CProxyElement_Advection::done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rootTerminated(void);
 */

void CProxyElement_Advection::rootTerminated(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_rootTerminated_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1OfMeshGenerationDone(void);
 */

void CProxyElement_Advection::phase1OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase1OfMeshGenerationDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void meshUpdateReductionClient(int result);
 */

void CProxyElement_Advection::meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_meshUpdateReductionClient_marshall12(),0);
}

void CkIndex_Advection::_call_redn_wrapper_meshUpdateReductionClient_marshall12(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->meshUpdateReductionClient(result);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setstTime(void);
 */

void CProxyElement_Advection::setstTime(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_setstTime_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateMesh(void);
 */

void CProxyElement_Advection::generateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_generateMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2OfMeshGenerationDone(void);
 */

void CProxyElement_Advection::phase2OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase2OfMeshGenerationDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateMesh(void);
 */

void CProxyElement_Advection::updateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_updateMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startRemesh(void);
 */

void CProxyElement_Advection::startRemesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_startRemesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2Done(void);
 */

void CProxyElement_Advection::phase2Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase2Done_void(),0);
}

void CkIndex_Advection::_call_redn_wrapper_phase2Done_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->phase2Done();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doRemeshing(void);
 */

void CProxyElement_Advection::doRemeshing(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doRemeshing_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startLdb(void);
 */

void CProxyElement_Advection::startLdb(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_startLdb_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void signalExchangeGhostsCompletion(void);
 */

void CProxyElement_Advection::signalExchangeGhostsCompletion(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_signalExchangeGhostsCompletion_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doStep(void);
 */

void CProxyElement_Advection::doStep(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doStep_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doMeshRestructure(void);
 */

void CProxyElement_Advection::doMeshRestructure(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doMeshRestructure_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeGhosts(void);
 */

void CProxyElement_Advection::exchangeGhosts(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_exchangeGhosts_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1Done(void);
 */

void CProxyElement_Advection::phase1Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase1Done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getGhostsAndRefine(void);
 */

void CProxyElement_Advection::getGhostsAndRefine(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_getGhostsAndRefine_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */

void CProxyElement_Advection::receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int width, const double *u
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_receiveRefGhosts_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAndSendGhost(void);
 */

void CProxyElement_Advection::getAndSendGhost(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_getAndSendGhost_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */

void CProxyElement_Advection::requestNextFrame(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_requestNextFrame_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void free_memory(void);
 */

void CProxyElement_Advection::free_memory(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_free_memory_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doPhase2(void);
 */

void CProxyElement_Advection::doPhase2(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doPhase2_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChildData(ChildDataMsg* impl_msg);
 */

void CProxyElement_Advection::recvChildData(ChildDataMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_recvChildData_ChildDataMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(void);
 */

CkArrayID CProxy_Advection::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_void(),opts);
}

// Entry point registration function

int CkIndex_Advection::reg_Advection_void() {
  int epidx = CkRegisterEp("Advection(void)",
      _call_Advection_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_Advection_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Advection();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */

CkArrayID CProxy_Advection::ckNew(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
    implP|impl_noname_3;
    implP|impl_noname_4;
    implP|impl_noname_5;
  }
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_marshall2(),opts);
}

// Entry point registration function

int CkIndex_Advection::reg_Advection_marshall2() {
  int epidx = CkRegisterEp("Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5)",
      _call_Advection_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Advection_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Advection_marshall2);

  return epidx;
}


void CkIndex_Advection::_call_Advection_marshall2(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  double impl_noname_2; implP|impl_noname_2;
  double impl_noname_3; implP|impl_noname_3;
  double impl_noname_4; implP|impl_noname_4;
  double impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) Advection(impl_noname_2, impl_noname_3, impl_noname_4, impl_noname_5);
}

int CkIndex_Advection::_callmarshall_Advection_marshall2(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  double impl_noname_2; implP|impl_noname_2;
  double impl_noname_3; implP|impl_noname_3;
  double impl_noname_4; implP|impl_noname_4;
  double impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) Advection(impl_noname_2, impl_noname_3, impl_noname_4, impl_noname_5);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_Advection_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  double impl_noname_2; implP|impl_noname_2;
  double impl_noname_3; implP|impl_noname_3;
  double impl_noname_4; implP|impl_noname_4;
  double impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(InitRefineMsg* impl_msg);
 */

CkArrayID CProxy_Advection::ckNew(InitRefineMsg* impl_msg, const CkArrayOptions &opts)
{ 
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Advection::idx_Advection_InitRefineMsg(),opts);
}

// Entry point registration function

int CkIndex_Advection::reg_Advection_InitRefineMsg() {
  int epidx = CkRegisterEp("Advection(InitRefineMsg* impl_msg)",
      _call_Advection_InitRefineMsg, CMessage_InitRefineMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)InitRefineMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Advection::_call_Advection_InitRefineMsg(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  new (impl_obj) Advection((InitRefineMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void printState(void);
 */

void CProxy_Advection::printState(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_printState_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_printState_void() {
  int epidx = CkRegisterEp("printState(void)",
      _call_printState_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_printState_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->printState();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */

void CProxy_Advection::receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_receiveGhosts_marshall5(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_receiveGhosts_marshall5() {
  int epidx = CkRegisterEp("receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag)",
      _call_receiveGhosts_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveGhosts_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveGhosts_marshall5);

  return epidx;
}


void CkIndex_Advection::_call_receiveGhosts_marshall5(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag*/
  PUP::fromMem implP(impl_buf);
  int iter; implP|iter;
  int dir; implP|dir;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  QuadIndex sender; implP|sender;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  impl_obj->receiveGhosts(iter, dir, width, u, sender, tag);
}

int CkIndex_Advection::_callmarshall_receiveGhosts_marshall5(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag*/
  PUP::fromMem implP(impl_buf);
  int iter; implP|iter;
  int dir; implP|dir;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  QuadIndex sender; implP|sender;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  impl_obj->receiveGhosts(iter, dir, width, u, sender, tag);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_receiveGhosts_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag*/
  PUP::fromMem implP(impl_buf);
  int iter; implP|iter;
  int dir; implP|dir;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  QuadIndex sender; implP|sender;
  int tag; implP|tag;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  if (implDestP.hasComments()) implDestP.comment("iter");
  implDestP|iter;
  if (implDestP.hasComments()) implDestP.comment("dir");
  implDestP|dir;
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
  if (implDestP.hasComments()) implDestP.comment("u");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*u))<impl_cnt_u;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|u[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("sender");
  implDestP|sender;
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */

void CProxy_Advection::informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_informParent_marshall6(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_informParent_marshall6() {
  int epidx = CkRegisterEp("informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length)",
      _call_informParent_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_informParent_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_informParent_marshall6);

  return epidx;
}


void CkIndex_Advection::_call_informParent_marshall6(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  DECISION impl_noname_7; implP|impl_noname_7;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->informParent(impl_noname_6, impl_noname_7, cascade_length);
}

int CkIndex_Advection::_callmarshall_informParent_marshall6(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  DECISION impl_noname_7; implP|impl_noname_7;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->informParent(impl_noname_6, impl_noname_7, cascade_length);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_informParent_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  DECISION impl_noname_7; implP|impl_noname_7;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
  if (implDestP.hasComments()) implDestP.comment("cascade_length");
  implDestP|cascade_length;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvParentDecision(int cascade_length);
 */

void CProxy_Advection::recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_recvParentDecision_marshall7(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_recvParentDecision_marshall7() {
  int epidx = CkRegisterEp("recvParentDecision(int cascade_length)",
      _call_recvParentDecision_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvParentDecision_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvParentDecision_marshall7);

  return epidx;
}


void CkIndex_Advection::_call_recvParentDecision_marshall7(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvParentDecision(cascade_length);
}

int CkIndex_Advection::_callmarshall_recvParentDecision_marshall7(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvParentDecision(cascade_length);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_recvParentDecision_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cascade_length");
  implDestP|cascade_length;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */

void CProxy_Advection::exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_exchangePhase1Msg_marshall8(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_exchangePhase1Msg_marshall8() {
  int epidx = CkRegisterEp("exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length)",
      _call_exchangePhase1Msg_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchangePhase1Msg_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchangePhase1Msg_marshall8);

  return epidx;
}


void CkIndex_Advection::_call_exchangePhase1Msg_marshall8(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_8; implP|impl_noname_8;
  DECISION impl_noname_9; implP|impl_noname_9;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangePhase1Msg(impl_noname_8, impl_noname_9, cascade_length);
}

int CkIndex_Advection::_callmarshall_exchangePhase1Msg_marshall8(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_8; implP|impl_noname_8;
  DECISION impl_noname_9; implP|impl_noname_9;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->exchangePhase1Msg(impl_noname_8, impl_noname_9, cascade_length);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_exchangePhase1Msg_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_8; implP|impl_noname_8;
  DECISION impl_noname_9; implP|impl_noname_9;
  int cascade_length; implP|cascade_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
  if (implDestP.hasComments()) implDestP.comment("cascade_length");
  implDestP|cascade_length;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(void);
 */

void CProxy_Advection::done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_done_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_done_void() {
  int epidx = CkRegisterEp("done(void)",
      _call_done_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->done();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rootTerminated(void);
 */

void CProxy_Advection::rootTerminated(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_rootTerminated_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_rootTerminated_void() {
  int epidx = CkRegisterEp("rootTerminated(void)",
      _call_rootTerminated_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_rootTerminated_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->rootTerminated();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1OfMeshGenerationDone(void);
 */

void CProxy_Advection::phase1OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_phase1OfMeshGenerationDone_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_phase1OfMeshGenerationDone_void() {
  int epidx = CkRegisterEp("phase1OfMeshGenerationDone(void)",
      _call_phase1OfMeshGenerationDone_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_phase1OfMeshGenerationDone_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->phase1OfMeshGenerationDone();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void meshUpdateReductionClient(int result);
 */

void CProxy_Advection::meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_meshUpdateReductionClient_marshall12(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_meshUpdateReductionClient_marshall12() {
  int epidx = CkRegisterEp("meshUpdateReductionClient(int result)",
      _call_meshUpdateReductionClient_marshall12, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_meshUpdateReductionClient_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_meshUpdateReductionClient_marshall12);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Advection::reg_redn_wrapper_meshUpdateReductionClient_marshall12() {
  return CkRegisterEp("redn_wrapper_meshUpdateReductionClient(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_meshUpdateReductionClient_marshall12, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Advection::_call_meshUpdateReductionClient_marshall12(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->meshUpdateReductionClient(result);
}

int CkIndex_Advection::_callmarshall_meshUpdateReductionClient_marshall12(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->meshUpdateReductionClient(result);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_meshUpdateReductionClient_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int result*/
  PUP::fromMem implP(impl_buf);
  int result; implP|result;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP|result;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setstTime(void);
 */

void CProxy_Advection::setstTime(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_setstTime_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_setstTime_void() {
  int epidx = CkRegisterEp("setstTime(void)",
      _call_setstTime_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_setstTime_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->setstTime();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateMesh(void);
 */

void CProxy_Advection::generateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_generateMesh_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_generateMesh_void() {
  int epidx = CkRegisterEp("generateMesh(void)",
      _call_generateMesh_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_generateMesh_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->generateMesh();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2OfMeshGenerationDone(void);
 */

void CProxy_Advection::phase2OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_phase2OfMeshGenerationDone_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_phase2OfMeshGenerationDone_void() {
  int epidx = CkRegisterEp("phase2OfMeshGenerationDone(void)",
      _call_phase2OfMeshGenerationDone_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_phase2OfMeshGenerationDone_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->phase2OfMeshGenerationDone();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateMesh(void);
 */

void CProxy_Advection::updateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_updateMesh_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_updateMesh_void() {
  int epidx = CkRegisterEp("updateMesh(void)",
      _call_updateMesh_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_updateMesh_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->updateMesh();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startRemesh(void);
 */

void CProxy_Advection::startRemesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_startRemesh_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_startRemesh_void() {
  int epidx = CkRegisterEp("startRemesh(void)",
      _call_startRemesh_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_startRemesh_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->startRemesh();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2Done(void);
 */

void CProxy_Advection::phase2Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_phase2Done_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_phase2Done_void() {
  int epidx = CkRegisterEp("phase2Done(void)",
      _call_phase2Done_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_Advection::reg_redn_wrapper_phase2Done_void() {
  return CkRegisterEp("redn_wrapper_phase2Done(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_phase2Done_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_Advection::_call_phase2Done_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->phase2Done();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doRemeshing(void);
 */

void CProxy_Advection::doRemeshing(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_doRemeshing_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_doRemeshing_void() {
  int epidx = CkRegisterEp("doRemeshing(void)",
      _call_doRemeshing_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_doRemeshing_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doRemeshing();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startLdb(void);
 */

void CProxy_Advection::startLdb(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_startLdb_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_startLdb_void() {
  int epidx = CkRegisterEp("startLdb(void)",
      _call_startLdb_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_startLdb_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->startLdb();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void signalExchangeGhostsCompletion(void);
 */

void CProxy_Advection::signalExchangeGhostsCompletion(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_signalExchangeGhostsCompletion_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_signalExchangeGhostsCompletion_void() {
  int epidx = CkRegisterEp("signalExchangeGhostsCompletion(void)",
      _call_signalExchangeGhostsCompletion_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_signalExchangeGhostsCompletion_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->signalExchangeGhostsCompletion();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doStep(void);
 */

void CProxy_Advection::doStep(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_doStep_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_doStep_void() {
  int epidx = CkRegisterEp("doStep(void)",
      _call_doStep_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_doStep_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doStep();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doMeshRestructure(void);
 */

void CProxy_Advection::doMeshRestructure(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_doMeshRestructure_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_doMeshRestructure_void() {
  int epidx = CkRegisterEp("doMeshRestructure(void)",
      _call_doMeshRestructure_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_doMeshRestructure_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doMeshRestructure();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeGhosts(void);
 */

void CProxy_Advection::exchangeGhosts(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_exchangeGhosts_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_exchangeGhosts_void() {
  int epidx = CkRegisterEp("exchangeGhosts(void)",
      _call_exchangeGhosts_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_exchangeGhosts_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->exchangeGhosts();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1Done(void);
 */

void CProxy_Advection::phase1Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_phase1Done_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_phase1Done_void() {
  int epidx = CkRegisterEp("phase1Done(void)",
      _call_phase1Done_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_phase1Done_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->phase1Done();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getGhostsAndRefine(void);
 */

void CProxy_Advection::getGhostsAndRefine(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_getGhostsAndRefine_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_getGhostsAndRefine_void() {
  int epidx = CkRegisterEp("getGhostsAndRefine(void)",
      _call_getGhostsAndRefine_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_getGhostsAndRefine_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->getGhostsAndRefine();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */

void CProxy_Advection::receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int width, const double *u
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_receiveRefGhosts_marshall27(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_receiveRefGhosts_marshall27() {
  int epidx = CkRegisterEp("receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u)",
      _call_receiveRefGhosts_marshall27, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveRefGhosts_marshall27);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveRefGhosts_marshall27);

  return epidx;
}


void CkIndex_Advection::_call_receiveRefGhosts_marshall27(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int width, const double *u*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  impl_obj->receiveRefGhosts(impl_noname_a, impl_noname_b, width, u);
}

int CkIndex_Advection::_callmarshall_receiveRefGhosts_marshall27(char* impl_buf, void* impl_obj_void) {
  Advection* impl_obj = static_cast< Advection *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int width, const double *u*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  impl_obj->receiveRefGhosts(impl_noname_a, impl_noname_b, width, u);
  return implP.size();
}

void CkIndex_Advection::_marshallmessagepup_receiveRefGhosts_marshall27(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int width, const double *u*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int width; implP|width;
  int impl_off_u, impl_cnt_u; 
  implP|impl_off_u;
  implP|impl_cnt_u;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *u=(double *)(impl_buf+impl_off_u);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_b");
  implDestP|impl_noname_b;
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
  if (implDestP.hasComments()) implDestP.comment("u");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*u))<impl_cnt_u;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|u[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAndSendGhost(void);
 */

void CProxy_Advection::getAndSendGhost(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_getAndSendGhost_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_getAndSendGhost_void() {
  int epidx = CkRegisterEp("getAndSendGhost(void)",
      _call_getAndSendGhost_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_getAndSendGhost_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->getAndSendGhost();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */

void CProxy_Advection::requestNextFrame(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_requestNextFrame_liveVizRequestMsg(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_requestNextFrame_liveVizRequestMsg() {
  int epidx = CkRegisterEp("requestNextFrame(liveVizRequestMsg* impl_msg)",
      _call_requestNextFrame_liveVizRequestMsg, CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Advection::_call_requestNextFrame_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  impl_obj->requestNextFrame((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void free_memory(void);
 */

void CProxy_Advection::free_memory(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_free_memory_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_free_memory_void() {
  int epidx = CkRegisterEp("free_memory(void)",
      _call_free_memory_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_free_memory_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->free_memory();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doPhase2(void);
 */

void CProxy_Advection::doPhase2(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_doPhase2_void(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_doPhase2_void() {
  int epidx = CkRegisterEp("doPhase2(void)",
      _call_doPhase2_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_doPhase2_void(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doPhase2();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChildData(ChildDataMsg* impl_msg);
 */

void CProxy_Advection::recvChildData(ChildDataMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Advection::idx_recvChildData_ChildDataMsg(),0);
}

// Entry point registration function

int CkIndex_Advection::reg_recvChildData_ChildDataMsg() {
  int epidx = CkRegisterEp("recvChildData(ChildDataMsg* impl_msg)",
      _call_recvChildData_ChildDataMsg, CMessage_ChildDataMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ChildDataMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Advection::_call_recvChildData_ChildDataMsg(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  impl_obj->recvChildData((ChildDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Advection::reg_Advection_CkMigrateMessage() {
  int epidx = CkRegisterEp("Advection(CkMigrateMessage* impl_msg)",
      _call_Advection_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Advection::_call_Advection_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Advection* impl_obj = static_cast<Advection *>(impl_obj_void);
  new (impl_obj) Advection((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(InitRefineMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void printState(void);
 */

void CProxySection_Advection::printState(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_printState_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
 */

void CProxySection_Advection::receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|dir;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    //Have to cast away const-ness to get pup routine
    implP|(QuadIndex &)sender;
    implP|tag;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_receiveGhosts_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
 */

void CProxySection_Advection::informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, const DECISION &impl_noname_7, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_7;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_informParent_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvParentDecision(int cascade_length);
 */

void CProxySection_Advection::recvParentDecision(int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_recvParentDecision_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
 */

void CProxySection_Advection::exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_8, const DECISION &impl_noname_9, int cascade_length
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
    //Have to cast away const-ness to get pup routine
    implP|(DECISION &)impl_noname_9;
    implP|cascade_length;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_exchangePhase1Msg_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(void);
 */

void CProxySection_Advection::done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void rootTerminated(void);
 */

void CProxySection_Advection::rootTerminated(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_rootTerminated_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1OfMeshGenerationDone(void);
 */

void CProxySection_Advection::phase1OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase1OfMeshGenerationDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void meshUpdateReductionClient(int result);
 */

void CProxySection_Advection::meshUpdateReductionClient(int result, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int result
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|result;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|result;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_meshUpdateReductionClient_marshall12(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setstTime(void);
 */

void CProxySection_Advection::setstTime(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_setstTime_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateMesh(void);
 */

void CProxySection_Advection::generateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_generateMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2OfMeshGenerationDone(void);
 */

void CProxySection_Advection::phase2OfMeshGenerationDone(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase2OfMeshGenerationDone_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateMesh(void);
 */

void CProxySection_Advection::updateMesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_updateMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startRemesh(void);
 */

void CProxySection_Advection::startRemesh(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_startRemesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase2Done(void);
 */

void CProxySection_Advection::phase2Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase2Done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doRemeshing(void);
 */

void CProxySection_Advection::doRemeshing(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doRemeshing_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startLdb(void);
 */

void CProxySection_Advection::startLdb(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_startLdb_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void signalExchangeGhostsCompletion(void);
 */

void CProxySection_Advection::signalExchangeGhostsCompletion(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_signalExchangeGhostsCompletion_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doStep(void);
 */

void CProxySection_Advection::doStep(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doStep_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doMeshRestructure(void);
 */

void CProxySection_Advection::doMeshRestructure(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doMeshRestructure_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchangeGhosts(void);
 */

void CProxySection_Advection::exchangeGhosts(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_exchangeGhosts_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phase1Done(void);
 */

void CProxySection_Advection::phase1Done(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_phase1Done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getGhostsAndRefine(void);
 */

void CProxySection_Advection::getGhostsAndRefine(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_getGhostsAndRefine_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
 */

void CProxySection_Advection::receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int width, const double *u
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_u, impl_cnt_u;
  impl_off_u=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_u=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|width;
    implP|impl_off_u;
    implP|impl_cnt_u;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_u,u,impl_cnt_u);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_receiveRefGhosts_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getAndSendGhost(void);
 */

void CProxySection_Advection::getAndSendGhost(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_getAndSendGhost_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestNextFrame(liveVizRequestMsg* impl_msg);
 */

void CProxySection_Advection::requestNextFrame(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_requestNextFrame_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void free_memory(void);
 */

void CProxySection_Advection::free_memory(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_free_memory_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doPhase2(void);
 */

void CProxySection_Advection::doPhase2(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_doPhase2_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChildData(ChildDataMsg* impl_msg);
 */

void CProxySection_Advection::recvChildData(ChildDataMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Advection::idx_recvChildData_ChildDataMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Advection(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Advection::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Advection(void);
  idx_Advection_void();
  CkRegisterDefaultCtor(__idx, idx_Advection_void());

  // REG: Advection(double impl_noname_2, double impl_noname_3, double impl_noname_4, double impl_noname_5);
  idx_Advection_marshall2();

  // REG: Advection(InitRefineMsg* impl_msg);
  idx_Advection_InitRefineMsg();

  // REG: void printState(void);
  idx_printState_void();

  // REG: void receiveGhosts(int iter, int dir, int width, const double *u, const QuadIndex &sender, int tag);
  idx_receiveGhosts_marshall5();

  // REG: void informParent(int impl_noname_6, const DECISION &impl_noname_7, int cascade_length);
  idx_informParent_marshall6();

  // REG: void recvParentDecision(int cascade_length);
  idx_recvParentDecision_marshall7();

  // REG: void exchangePhase1Msg(int impl_noname_8, const DECISION &impl_noname_9, int cascade_length);
  idx_exchangePhase1Msg_marshall8();

  // REG: void done(void);
  idx_done_void();

  // REG: void rootTerminated(void);
  idx_rootTerminated_void();

  // REG: void phase1OfMeshGenerationDone(void);
  idx_phase1OfMeshGenerationDone_void();

  // REG: void meshUpdateReductionClient(int result);
  idx_meshUpdateReductionClient_marshall12();
  idx_redn_wrapper_meshUpdateReductionClient_marshall12();

  // REG: void setstTime(void);
  idx_setstTime_void();

  // REG: void generateMesh(void);
  idx_generateMesh_void();

  // REG: void phase2OfMeshGenerationDone(void);
  idx_phase2OfMeshGenerationDone_void();

  // REG: void updateMesh(void);
  idx_updateMesh_void();

  // REG: void startRemesh(void);
  idx_startRemesh_void();

  // REG: void phase2Done(void);
  idx_phase2Done_void();
  idx_redn_wrapper_phase2Done_void();

  // REG: void doRemeshing(void);
  idx_doRemeshing_void();

  // REG: void startLdb(void);
  idx_startLdb_void();

  // REG: void signalExchangeGhostsCompletion(void);
  idx_signalExchangeGhostsCompletion_void();

  // REG: void doStep(void);
  idx_doStep_void();

  // REG: void doMeshRestructure(void);
  idx_doMeshRestructure_void();

  // REG: void exchangeGhosts(void);
  idx_exchangeGhosts_void();

  // REG: void phase1Done(void);
  idx_phase1Done_void();

  // REG: void getGhostsAndRefine(void);
  idx_getGhostsAndRefine_void();

  // REG: void receiveRefGhosts(int impl_noname_a, int impl_noname_b, int width, const double *u);
  idx_receiveRefGhosts_marshall27();

  // REG: void getAndSendGhost(void);
  idx_getAndSendGhost_void();

  // REG: void requestNextFrame(liveVizRequestMsg* impl_msg);
  idx_requestNextFrame_liveVizRequestMsg();

  // REG: void free_memory(void);
  idx_free_memory_void();

  // REG: void doPhase2(void);
  idx_doPhase2_void();

  // REG: void recvChildData(ChildDataMsg* impl_msg);
  idx_recvChildData_ChildDataMsg();

  // REG: Advection(CkMigrateMessage* impl_msg);
  idx_Advection_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Advection_CkMigrateMessage());

  Advection::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Advection::rootTerminated() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _atomic_0();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::rootTerminated_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_0() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_0()), CkMyPe(), 0, NULL); 
    
    _TRACE_END_EXECUTE(); 
    rootTerminated_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::setstTime() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_0();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::setstTime_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_0() {
    _atomic_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_0_end() {
    setstTime_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_1() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_1()), CkMyPe(), 0, NULL); 
    
				stTime=CmiWallTimer();
			
    _TRACE_END_EXECUTE(); 
    _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::generateMesh() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_1();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::generateMesh_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_1() {
    _atomic_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_1_end() {
    generateMesh_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_2() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_call_remeshing_for_mesh_update()), CkMyPe(), 0, NULL); 
    
            doRemeshing();
            if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0){
                ckout << "making refinement decisions" << endl;
                CkStartQD(CkCallback(CkIndex_Advection::phase1OfMeshGenerationDone(), thisProxy));
            }
        
    _TRACE_END_EXECUTE(); 
    _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_0() {
    CMsgBuffer *phase1OfMeshGenerationDone_buf;

    phase1OfMeshGenerationDone_buf = __cDep->getMessage(0);

    if ((phase1OfMeshGenerationDone_buf != 0)) {
       CkFreeSysMsg((void *) phase1OfMeshGenerationDone_buf->msg);
       __cDep->removeMessage(phase1OfMeshGenerationDone_buf);
      delete phase1OfMeshGenerationDone_buf;
       _atomic_3();
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(0, 1, 0, 1);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->anyEntries[0] = 0;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_0_end() {
    _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_3() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_3()), CkMyPe(), 0, NULL); 
    
            updateMesh();
            if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0){
                ckout << "now in phase 2 of mesh generation" << endl;
                CkStartQD(CkCallback(CkIndex_Advection::phase2OfMeshGenerationDone(), thisProxy));
            }
        
    _TRACE_END_EXECUTE(); 
    _when_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::phase2OfMeshGenerationDone() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_2();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::phase2OfMeshGenerationDone_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_2() {
    _atomic_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_2_end() {
    phase2OfMeshGenerationDone_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_4() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_4()), CkMyPe(), 0, NULL); 
    
            if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0)
                ckout << "participating in reduction to determine mesh stability" << endl;

            int contri;
                                    
                                  

                                                                                               
            if(decision==DEREFINE || decision==REFINE){
                                                                                                                    
                contri=1;
            }
            else
                contri=0;
            contribute(sizeof(int), &contri, CkReduction::sum_int, CkCallback(CkReductionTarget(Advection, meshUpdateReductionClient), thisProxy));
        
    _TRACE_END_EXECUTE(); 
    _when_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_1() {
    CMsgBuffer *meshUpdateReductionClient_buf;
    CkMarshallMsg *meshUpdateReductionClient_msg;

    meshUpdateReductionClient_buf = __cDep->getMessage(1);

    if ((meshUpdateReductionClient_buf != 0)) {
       meshUpdateReductionClient_msg = (CkMarshallMsg *)meshUpdateReductionClient_buf->msg;
       char *meshUpdateReductionClient_impl_buf=((CkMarshallMsg *)meshUpdateReductionClient_msg)->msgBuf;
       PUP::fromMem meshUpdateReductionClient_implP(meshUpdateReductionClient_impl_buf);
       int result; meshUpdateReductionClient_implP|result;
       meshUpdateReductionClient_impl_buf+=CK_ALIGN(meshUpdateReductionClient_implP.size(),16);
       __cDep->removeMessage(meshUpdateReductionClient_buf);
       delete meshUpdateReductionClient_buf;
       _atomic_5(result);
       delete meshUpdateReductionClient_msg;
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(1, 1, 0, 1);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->anyEntries[0] = 1;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_1_end(int result) {
    _slist_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_5(int result) {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_5()), CkMyPe(), 0, NULL); 
    
            if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0)
                ckout << "nUpdates: " << result << endl;
            meshGenIterations++;
            if(result > 0){
                VB(logFile << "calling generateMesh on myself, iteration " << meshGenIterations << std::endl;);
                generateMesh();
            }
            else{
                VB(logFile << "mesh generation is over.... start advection now, isRefined = " << isRefined << std::endl;);
                if(isRefined)
                    iterations++;             
                phase2Done();
            }
        
    _TRACE_END_EXECUTE(); 
    _when_1_end(result);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::startRemesh() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_3();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::startRemesh_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_3() {
    _atomic_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_3_end() {
    startRemesh_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_6() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_doMeshRestructure()), CkMyPe(), 0, NULL); 
    
          iterations++;
          doMeshRestructure();
          if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0)
            CkStartQD(CkCallback(CkIndex_Advection::phase1Done(), thisProxy));
        
    _TRACE_END_EXECUTE(); 
    _when_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_2() {
    CMsgBuffer *phase1Done_buf;

    phase1Done_buf = __cDep->getMessage(2);

    if ((phase1Done_buf != 0)) {
       CkFreeSysMsg((void *) phase1Done_buf->msg);
       __cDep->removeMessage(phase1Done_buf);
      delete phase1Done_buf;
       _atomic_7();
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(2, 1, 0, 1);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->anyEntries[0] = 2;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_2_end() {
    _slist_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_7() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_7()), CkMyPe(), 0, NULL); 
    
	  double now = CkWallTimer();
          double localQDLatency = now - lastIdleTimeQD;
	  double localRemeshLatency = now - remeshStartTime;
          ppc.ckLocalBranch()->recordQDLatency(iterations, localQDLatency);
          ppc.ckLocalBranch()->recordRemeshLatency(iterations, localRemeshLatency);
          if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0) {
            CkPrintf("%s in phase 2a iteration start QD %d\n", thisIndex.getIndexString().c_str(), iterations);
            phase2_it++;
            CkCallback cb;
                                                                                                    
                                                       
            if(phase2_it == 1 || phase2_it%10 == 0)
              cb = CkCallback(CkIndex_Advection::startLdb(), thisProxy);
            else
              cb = CkCallback(CkIndex_Advection::phase2Done(), thisProxy);
            CkStartQD(cb);
          }
          doPhase2();
        
    _TRACE_END_EXECUTE(); 
    _when_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::phase2Done() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_4();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::phase2Done_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_4() {
    _atomic_8();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_4_end() {
    phase2Done_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_8() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_8()), CkMyPe(), 0, NULL); 
    
	CkAssert(usesAutoMeasure == CmiFalse);
	if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0) {
	                                                                                              
	  ckout << "time for iteration " << iterations - refine_frequency + 1 << " to " << iterations << ": " << CmiWallTimer() - itBeginTime << endl;
	  itBeginTime = CmiWallTimer();
	  fflush(stdout);
	}
	if (shouldDestroy);
	                                   
	else {
	  if (!isRefined) {
	    thisProxy[thisIndex].doStep();
	  } 
	  else {
	    iterations += refine_frequency - 1;
	    if (iterations >= max_iterations) {
	                                                                                  
	      VB(logFile << thisIndex.getIndexString() << " now terminating" << std::endl;);
	      if (isRoot())
		CkStartQD(CkCallback(CkIndex_Main::terminate(), mainProxy));
	    } else {
	      if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0) {
		CkPrintf("%s in short phase 0 iteration %d\n", thisIndex.getIndexString().c_str(), iterations);
		fflush(stdout);
	      }
	                                                                            
	      startRemesh();
	    }
	  }
	}
      
    _TRACE_END_EXECUTE(); 
    _slist_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::doStep() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_5();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::doStep_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_5() {
    _atomic_9();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_5_end() {
    doStep_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_9() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_begin_iteration()), CkMyPe(), 0, NULL); 
    
        ppc.ckLocalBranch()->incrementWorkUnitCount();
				if(iterations==100 && CkMyPe()==0) 
				{
					CkPrintf("Program Done! avg_it:%f\n",(CmiWallTimer()-stTime)/iterations);
					CkExit();
				}
        if (thisIndex.nbits == min_depth * 2 && thisIndex.bitVector == 0) {
          ckout  << thisIndex.getIndexString().c_str() << " doStep iteration " << iterations 
		 << " dt: " << dt << " mydt: " << mydt << " myt " << myt<<"t:"<<(CmiWallTimer()-stTime) << " time/itr:"<<(CmiWallTimer()-stTime)/iterations<< endl;
        }
        iterations++;
        char fname[100];

      sprintf(fname, "out/out_%s_%d", thisIndex.getIndexString().c_str(), iterations);
      VB(outFile.open(fname););
      VB(logFile << "************************Begin Iteration " << iterations << " on " << thisIndex.getIndexString() << std::endl;);

			exchangeGhosts();
    
    _TRACE_END_EXECUTE(); 
    _when_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_3() {
    CMsgBuffer *signalExchangeGhostsCompletion_buf;

    signalExchangeGhostsCompletion_buf = __cDep->getMessage(3);

    if ((signalExchangeGhostsCompletion_buf != 0)) {
       CkFreeSysMsg((void *) signalExchangeGhostsCompletion_buf->msg);
       __cDep->removeMessage(signalExchangeGhostsCompletion_buf);
      delete signalExchangeGhostsCompletion_buf;
       _atomic_10();
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(3, 1, 0, 1);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->anyEntries[0] = 3;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_3_end() {
    _slist_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_10() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_doWork()), CkMyPe(), 0, NULL); 
    
      compute_and_iterate();
      iterate();
    
    _TRACE_END_EXECUTE(); 
    _when_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::doMeshRestructure() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_6();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::doMeshRestructure_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_6() {
    _if_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_6_end() {
    doMeshRestructure_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_if_0() {
    if (!isRefined) {
      _slist_8();
    } else {
      _else_0();
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_if_0_end() {
    _slist_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_else_0() {
    double __begintime = CkVTimer(); 
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); 
    _slist_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_else_0_end() {
      _slist_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_7() {
    _atomic_11();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_7_end() {
    _else_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_11() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_do_remeshing_on_internal_nodes()), CkMyPe(), 0, NULL); 
    
				doRemeshing();
			
    _TRACE_END_EXECUTE(); 
    _slist_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_8() {
    _atomic_12();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_8_end() {
    _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_12() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_exchange_ghosts_before_remeshing()), CkMyPe(), 0, NULL); 
    
				exchangeGhosts();
			
    _TRACE_END_EXECUTE(); 
    _when_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_4() {
    CMsgBuffer *signalExchangeGhostsCompletion_buf;

    signalExchangeGhostsCompletion_buf = __cDep->getMessage(3);

    if ((signalExchangeGhostsCompletion_buf != 0)) {
       CkFreeSysMsg((void *) signalExchangeGhostsCompletion_buf->msg);
       __cDep->removeMessage(signalExchangeGhostsCompletion_buf);
      delete signalExchangeGhostsCompletion_buf;
       _atomic_13();
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(4, 1, 0, 1);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->anyEntries[0] = 3;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_4_end() {
    _slist_8_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_13() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_do_remeshing_on_leaves()), CkMyPe(), 0, NULL); 
    
				doRemeshing();
			
    _TRACE_END_EXECUTE(); 
    _when_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::exchangeGhosts() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_9();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::exchangeGhosts_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_9() {
    _atomic_14();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_9_end() {
    exchangeGhosts_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_14() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_send_whatever_data_you_can()), CkMyPe(), 0, NULL); 
    
			for(int i=0; i<3*NUM_NEIGHBORS; i++)
				nbr_dataSent[i]=false;
						
			hasReceived.clear();

			for(int j=1; j<=block_height; j++){
				left_edge[j-1] = u[index(1,j)];
				right_edge[j-1] = u[index(block_width,j)];
			}
			for(int i=0; i<NUM_NEIGHBORS; i++){
				sendGhost(i);
			}
			VB(logFile << "Done Sending Ghosts " << thisIndex.getIndexString() << std::endl;);
    
    _TRACE_END_EXECUTE(); 
    _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_for_0() {
    imsg = 0;
    if ( imsg < 4) {
      _slist_10();
    } else {
      _atomic_16();
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_for_0_end() {
   ;
    if ( imsg < 4) {
      _slist_10();
    } else {
      _atomic_16();
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_10() {
    _when_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_10_end() {
    _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_5() {
    CMsgBuffer *receiveGhosts_buf;
    CkMarshallMsg *receiveGhosts_msg;

    receiveGhosts_buf = __cDep->getMessage(4, iterations);

    if ((receiveGhosts_buf != 0)) {
       receiveGhosts_msg = (CkMarshallMsg *)receiveGhosts_buf->msg;
       char *receiveGhosts_impl_buf=((CkMarshallMsg *)receiveGhosts_msg)->msgBuf;
       PUP::fromMem receiveGhosts_implP(receiveGhosts_impl_buf);
       int iter; receiveGhosts_implP|iter;
       int dir; receiveGhosts_implP|dir;
       int width; receiveGhosts_implP|width;
       int impl_off_u1; receiveGhosts_implP|impl_off_u1;
       QuadIndex sender; receiveGhosts_implP|sender;
       int tag; receiveGhosts_implP|tag;
       receiveGhosts_impl_buf+=CK_ALIGN(receiveGhosts_implP.size(),16);
       double *u1=(double *)(receiveGhosts_impl_buf+impl_off_u1);
       __cDep->removeMessage(receiveGhosts_buf);
       delete receiveGhosts_buf;
       _atomic_15(iter, dir, width, u1, sender, tag);
       delete receiveGhosts_msg;
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(5, 1, 1, 0);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->entries[0] = 4;
       tr->refnums[0] = iterations;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_5_end(int iter, int dir, int width, double * u1, QuadIndex sender, int tag) {
    _slist_10_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_15(int iter, int dir, int width, double * u1, QuadIndex sender, int tag) {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_receive_ghosts()), CkMyPe(), 0, NULL); 
    
      	VB(logFile << thisIndex.getIndexString() << " process: " << iter << ", "
                     << dir << ", " << width << ", " << sender.getIndexString() << ", "
                     << tag << std::endl;);
      	process(iter, dir, width, u1);
      	sendReadyData();
    	
    _TRACE_END_EXECUTE(); 
    _when_5_end(iter, dir, width, u1, sender, tag);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_16() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_signal_exchange_ghost_completion()), CkMyPe(), 0, NULL); 
    
			thisProxy[thisIndex].signalExchangeGhostsCompletion();
		
    _TRACE_END_EXECUTE(); 
    _slist_9_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::getGhostsAndRefine() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_11();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::getGhostsAndRefine_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_11() {
    _for_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_11_end() {
    getGhostsAndRefine_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_for_1() {
    ;
    if (imsg<4) {
      _slist_12();
    } else {
      _atomic_18();
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_for_1_end() {
   ;
    if (imsg<4) {
      _slist_12();
    } else {
      _atomic_18();
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_12() {
    _when_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_12_end() {
    _for_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_6() {
    CMsgBuffer *receiveGhosts_buf;
    CkMarshallMsg *receiveGhosts_msg;

    receiveGhosts_buf = __cDep->getMessage(4, iterations);

    if ((receiveGhosts_buf != 0)) {
       receiveGhosts_msg = (CkMarshallMsg *)receiveGhosts_buf->msg;
       char *receiveGhosts_impl_buf=((CkMarshallMsg *)receiveGhosts_msg)->msgBuf;
       PUP::fromMem receiveGhosts_implP(receiveGhosts_impl_buf);
       int iter; receiveGhosts_implP|iter;
       int dir; receiveGhosts_implP|dir;
       int width; receiveGhosts_implP|width;
       int impl_off_u1; receiveGhosts_implP|impl_off_u1;
       QuadIndex sender; receiveGhosts_implP|sender;
       int tag; receiveGhosts_implP|tag;
       receiveGhosts_impl_buf+=CK_ALIGN(receiveGhosts_implP.size(),16);
       double *u1=(double *)(receiveGhosts_impl_buf+impl_off_u1);
       __cDep->removeMessage(receiveGhosts_buf);
       delete receiveGhosts_buf;
       _atomic_17(iter, dir, width, u1, sender, tag);
       delete receiveGhosts_msg;
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(6, 1, 1, 0);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->entries[0] = 4;
       tr->refnums[0] = iterations;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_6_end(int iter, int dir, int width, double * u1, QuadIndex sender, int tag) {
    _slist_12_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_17(int iter, int dir, int width, double * u1, QuadIndex sender, int tag) {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_save_ghosts()), CkMyPe(), 0, NULL); 
    
          process(iter, dir, width, u1);
          sendReadyData2RefiningNeighbors();
                                                                           
                                                                                                           
        
    _TRACE_END_EXECUTE(); 
    _when_6_end(iter, dir, width, u1, sender, tag);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_18() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_refine()), CkMyPe(), 0, NULL); 
    
                                                                  
        refine();
      
    _TRACE_END_EXECUTE(); 
    _slist_11_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::getAndSendGhost() {
    _TRACE_END_EXECUTE(); 
    if (!__cDep.get())
        _sdag_init();
    _slist_13();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::getAndSendGhost_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_13() {
    _atomic_19();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_slist_13_end() {
    getAndSendGhost_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_19() {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_atomic_19()), CkMyPe(), 0, NULL); 
    
        VB(logFile << "getAndSendGhost called" << endl;); 
      
    _TRACE_END_EXECUTE(); 
    _when_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
CWhenTrigger* Advection::_when_7() {
    CMsgBuffer *receiveRefGhosts_buf;
    CkMarshallMsg *receiveRefGhosts_msg;

    receiveRefGhosts_buf = __cDep->getMessage(5, iterations);

    if ((receiveRefGhosts_buf != 0)) {
       receiveRefGhosts_msg = (CkMarshallMsg *)receiveRefGhosts_buf->msg;
       char *receiveRefGhosts_impl_buf=((CkMarshallMsg *)receiveRefGhosts_msg)->msgBuf;
       PUP::fromMem receiveRefGhosts_implP(receiveRefGhosts_impl_buf);
       int iter; receiveRefGhosts_implP|iter;
       int dir; receiveRefGhosts_implP|dir;
       int width; receiveRefGhosts_implP|width;
       int impl_off_u1; receiveRefGhosts_implP|impl_off_u1;
       receiveRefGhosts_impl_buf+=CK_ALIGN(receiveRefGhosts_implP.size(),16);
       double *u1=(double *)(receiveRefGhosts_impl_buf+impl_off_u1);
       __cDep->removeMessage(receiveRefGhosts_buf);
       delete receiveRefGhosts_buf;
       _atomic_20(iter, dir, width, u1);
       delete receiveRefGhosts_msg;
       return 0;
    } else {
       CWhenTrigger *tr;
       tr = new CWhenTrigger(7, 1, 1, 0);
       if (tr->args[0]) delete tr->args[0];
       tr->args[0] = NULL;
       tr->entries[0] = 5;
       tr->refnums[0] = iterations;
       __cDep->Register(tr);
       return tr;
    }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_when_7_end(int iter, int dir, int width, double * u1) {
    _slist_13_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::_atomic_20(int iter, int dir, int width, double * u1) {
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Advection_interpolate_and_send()), CkMyPe(), 0, NULL); 
    
        process(iter, dir, width, u1);
        sendReadyData2RefiningNeighbors();                          
      
    _TRACE_END_EXECUTE(); 
    _when_7_end(iter, dir, width, u1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::phase1OfMeshGenerationDone(void){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    __cDep->bufferMessage(0, (void*)CkAllocSysMsg(), (void*) _bgParentLog, 0);
    tr = __cDep->getTrigger(0, 0);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_0();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::meshUpdateReductionClient(int result){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    int impl_off=0; int impl_arrstart=0;
    {
      PUP::sizer implP1;
      implP1|result;
      impl_off+=implP1.size();
    }
    CkMarshallMsg *impl_msg1=CkAllocateMarshallMsg(impl_off,NULL);
    {
      PUP::toMem implP1((void *)impl_msg1->msgBuf);
      implP1|result;
    }
    __cDep->bufferMessage(1, (void*)impl_msg1, (void*) _bgParentLog, 0);
    tr = __cDep->getTrigger(1, 0);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_1();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::phase1Done(void){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    __cDep->bufferMessage(2, (void*)CkAllocSysMsg(), (void*) _bgParentLog, 0);
    tr = __cDep->getTrigger(2, 0);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_2();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::signalExchangeGhostsCompletion(void){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    __cDep->bufferMessage(3, (void*)CkAllocSysMsg(), (void*) _bgParentLog, 0);
    tr = __cDep->getTrigger(3, 0);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    switch(tr->whenID) {
      case 3:
      {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_3();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
      }
      case 4:
      {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_4();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
      }
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::receiveGhosts(int iter, int dir, int width, double *u1, QuadIndex sender, int tag){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    int impl_off=0; int impl_arrstart=0;
    int impl_off_u1, impl_cnt_u1;
    impl_off_u1=impl_off=CK_ALIGN(impl_off,sizeof(double));
    impl_off+=(impl_cnt_u1=sizeof(double)*(width));
    {
      PUP::sizer implP1;
      implP1|iter;
      implP1|dir;
      implP1|width;
      implP1|impl_off_u1;
      implP1|(QuadIndex &)sender;
      implP1|tag;
      impl_arrstart=CK_ALIGN(implP1.size(),16);
      impl_off+=impl_arrstart;
    }
    CkMarshallMsg *impl_msg1=CkAllocateMarshallMsg(impl_off,NULL);
    {
      PUP::toMem implP1((void *)impl_msg1->msgBuf);
      implP1|iter;
      implP1|dir;
      implP1|width;
      implP1|impl_off_u1;
      implP1|(QuadIndex &)sender;
      implP1|tag;
    }
    char *impl_buf1=impl_msg1->msgBuf+impl_arrstart;
    memcpy(impl_buf1+impl_off_u1,u1,impl_cnt_u1);
    __cDep->bufferMessage(4, (void*)impl_msg1, (void*) _bgParentLog, iter);
    tr = __cDep->getTrigger(4, iter);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    switch(tr->whenID) {
      case 5:
      {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_5();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
      }
      case 6:
      {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_6();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
      }
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::receiveRefGhosts(int iter, int dir, int width, double *u1){
    CWhenTrigger *tr;
    void* _bgParentLog = NULL;
    if (!__cDep.get()) _sdag_init();
    int impl_off=0; int impl_arrstart=0;
    int impl_off_u1, impl_cnt_u1;
    impl_off_u1=impl_off=CK_ALIGN(impl_off,sizeof(double));
    impl_off+=(impl_cnt_u1=sizeof(double)*(width));
    {
      PUP::sizer implP1;
      implP1|iter;
      implP1|dir;
      implP1|width;
      implP1|impl_off_u1;
      impl_arrstart=CK_ALIGN(implP1.size(),16);
      impl_off+=impl_arrstart;
    }
    CkMarshallMsg *impl_msg1=CkAllocateMarshallMsg(impl_off,NULL);
    {
      PUP::toMem implP1((void *)impl_msg1->msgBuf);
      implP1|iter;
      implP1|dir;
      implP1|width;
      implP1|impl_off_u1;
    }
    char *impl_buf1=impl_msg1->msgBuf+impl_arrstart;
    memcpy(impl_buf1+impl_off_u1,u1,impl_cnt_u1);
    __cDep->bufferMessage(5, (void*)impl_msg1, (void*) _bgParentLog, iter);
    tr = __cDep->getTrigger(5, iter);
    if (tr == 0)
      return;
    _TRACE_END_EXECUTE(); 
    {
        if (tr->args[0]) delete tr->args[0];
        tr->args[0] = NULL;
        _when_7();
        delete tr;
        _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL); 
        return;
    }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::_sdag_init() {
    __cDep.reset(new CDep(6,8));
    __cDep->addDepends(0,0);
    __cDep->addDepends(1,1);
    __cDep->addDepends(2,2);
    __cDep->addDepends(3,3);
    __cDep->addDepends(4,3);
    __cDep->addDepends(5,4);
    __cDep->addDepends(6,4);
    __cDep->addDepends(7,5);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::__sdag_init() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Advection::__sdag_pup(PUP::er &p) {
    bool hasSDAG = __cDep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __cDep->pup(p); }
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Advection::__sdag_register() {
    (void)_sdag_idx_Advection_atomic_0();
    (void)_sdag_idx_Advection_atomic_1();
    (void)_sdag_idx_Advection_call_remeshing_for_mesh_update();
    (void)_sdag_idx_Advection_atomic_3();
    (void)_sdag_idx_Advection_atomic_4();
    (void)_sdag_idx_Advection_atomic_5();
    (void)_sdag_idx_Advection_doMeshRestructure();
    (void)_sdag_idx_Advection_atomic_7();
    (void)_sdag_idx_Advection_atomic_8();
    (void)_sdag_idx_Advection_begin_iteration();
    (void)_sdag_idx_Advection_doWork();
    (void)_sdag_idx_Advection_exchange_ghosts_before_remeshing();
    (void)_sdag_idx_Advection_do_remeshing_on_leaves();
    (void)_sdag_idx_Advection_do_remeshing_on_internal_nodes();
    (void)_sdag_idx_Advection_send_whatever_data_you_can();
    (void)_sdag_idx_Advection_receive_ghosts();
    (void)_sdag_idx_Advection_signal_exchange_ghost_completion();
    (void)_sdag_idx_Advection_save_ghosts();
    (void)_sdag_idx_Advection_refine();
    (void)_sdag_idx_Advection_atomic_19();
    (void)_sdag_idx_Advection_interpolate_and_send();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_0() {
  static int epidx = _sdag_reg_Advection_atomic_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_0() {
  return CkRegisterEp("Advection_atomic_0", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_1() {
  static int epidx = _sdag_reg_Advection_atomic_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_1() {
  return CkRegisterEp("Advection_atomic_1", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_call_remeshing_for_mesh_update() {
  static int epidx = _sdag_reg_Advection_call_remeshing_for_mesh_update();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_call_remeshing_for_mesh_update() {
  return CkRegisterEp("Advection_call_remeshing_for_mesh_update", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_3() {
  static int epidx = _sdag_reg_Advection_atomic_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_3() {
  return CkRegisterEp("Advection_atomic_3", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_4() {
  static int epidx = _sdag_reg_Advection_atomic_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_4() {
  return CkRegisterEp("Advection_atomic_4", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_5() {
  static int epidx = _sdag_reg_Advection_atomic_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_5() {
  return CkRegisterEp("Advection_atomic_5", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_doMeshRestructure() {
  static int epidx = _sdag_reg_Advection_doMeshRestructure();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_doMeshRestructure() {
  return CkRegisterEp("Advection_doMeshRestructure", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_7() {
  static int epidx = _sdag_reg_Advection_atomic_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_7() {
  return CkRegisterEp("Advection_atomic_7", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_8() {
  static int epidx = _sdag_reg_Advection_atomic_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_8() {
  return CkRegisterEp("Advection_atomic_8", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_begin_iteration() {
  static int epidx = _sdag_reg_Advection_begin_iteration();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_begin_iteration() {
  return CkRegisterEp("Advection_begin_iteration", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_doWork() {
  static int epidx = _sdag_reg_Advection_doWork();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_doWork() {
  return CkRegisterEp("Advection_doWork", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_exchange_ghosts_before_remeshing() {
  static int epidx = _sdag_reg_Advection_exchange_ghosts_before_remeshing();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_exchange_ghosts_before_remeshing() {
  return CkRegisterEp("Advection_exchange_ghosts_before_remeshing", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_do_remeshing_on_leaves() {
  static int epidx = _sdag_reg_Advection_do_remeshing_on_leaves();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_do_remeshing_on_leaves() {
  return CkRegisterEp("Advection_do_remeshing_on_leaves", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_do_remeshing_on_internal_nodes() {
  static int epidx = _sdag_reg_Advection_do_remeshing_on_internal_nodes();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_do_remeshing_on_internal_nodes() {
  return CkRegisterEp("Advection_do_remeshing_on_internal_nodes", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_send_whatever_data_you_can() {
  static int epidx = _sdag_reg_Advection_send_whatever_data_you_can();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_send_whatever_data_you_can() {
  return CkRegisterEp("Advection_send_whatever_data_you_can", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_receive_ghosts() {
  static int epidx = _sdag_reg_Advection_receive_ghosts();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_receive_ghosts() {
  return CkRegisterEp("Advection_receive_ghosts", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_signal_exchange_ghost_completion() {
  static int epidx = _sdag_reg_Advection_signal_exchange_ghost_completion();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_signal_exchange_ghost_completion() {
  return CkRegisterEp("Advection_signal_exchange_ghost_completion", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_save_ghosts() {
  static int epidx = _sdag_reg_Advection_save_ghosts();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_save_ghosts() {
  return CkRegisterEp("Advection_save_ghosts", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_refine() {
  static int epidx = _sdag_reg_Advection_refine();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_refine() {
  return CkRegisterEp("Advection_refine", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_atomic_19() {
  static int epidx = _sdag_reg_Advection_atomic_19();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_atomic_19() {
  return CkRegisterEp("Advection_atomic_19", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_idx_Advection_interpolate_and_send() {
  static int epidx = _sdag_reg_Advection_interpolate_and_send();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Advection::_sdag_reg_Advection_interpolate_and_send() {
  return CkRegisterEp("Advection_interpolate_and_send", NULL, 0, CkIndex_Advection::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerAdvection(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message InitRefineMsg{
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
CMessage_InitRefineMsg::__register("InitRefineMsg", sizeof(InitRefineMsg),(CkPackFnPtr) InitRefineMsg::pack,(CkUnpackFnPtr) InitRefineMsg::unpack);

/* REG: message ChildDataMsg{
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
CMessage_ChildDataMsg::__register("ChildDataMsg", sizeof(ChildDataMsg),(CkPackFnPtr) ChildDataMsg::pack,(CkUnpackFnPtr) ChildDataMsg::unpack);

/* REG: group PerProcessorChare: IrrGroup{
PerProcessorChare(void);
void collectCascades(const CkCallback &cb);
void reduceLatencies(void);
void reduceWorkUnits(void);
};
*/
  CkIndex_PerProcessorChare::__register("PerProcessorChare", sizeof(PerProcessorChare));

/* REG: array Advection: ArrayElement{
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
  CkIndex_Advection::__register("Advection", sizeof(Advection));

}
#endif /* CK_TEMPLATES_ONLY */
