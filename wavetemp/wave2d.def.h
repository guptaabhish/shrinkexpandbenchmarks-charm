
/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Wave arrayProxy;
 */
extern CProxy_Wave arrayProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_arrayProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|arrayProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void iterationCompleted(CkReductionMsg* impl_msg);
void afterCkpt(void);
void updateLastT(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void iterationCompleted(CkReductionMsg* impl_msg);
 */

void CProxy_Main::iterationCompleted(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_iterationCompleted_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_iterationCompleted_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_iterationCompleted_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_iterationCompleted_CkReductionMsg() {
  int epidx = CkRegisterEp("iterationCompleted(CkReductionMsg* impl_msg)",
      _call_iterationCompleted_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_iterationCompleted_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  impl_obj->iterationCompleted((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void afterCkpt(void);
 */

void CProxy_Main::afterCkpt(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_afterCkpt_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_afterCkpt_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_afterCkpt_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_afterCkpt_void() {
  int epidx = CkRegisterEp("afterCkpt(void)",
      _call_afterCkpt_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_afterCkpt_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->afterCkpt();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLastT(void);
 */

void CProxy_Main::updateLastT(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_updateLastT_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_updateLastT_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_updateLastT_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_updateLastT_void() {
  int epidx = CkRegisterEp("updateLastT(void)",
      _call_updateLastT_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_updateLastT_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->updateLastT();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void iterationCompleted(CkReductionMsg* impl_msg);
  idx_iterationCompleted_CkReductionMsg();

  // REG: void afterCkpt(void);
  idx_afterCkpt_void();

  // REG: void updateLastT(void);
  idx_updateLastT_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Wave: ArrayElement{
Wave(void);
void begin_iteration(void);
void recvGhosts(int whichSide, int height, const double *s);
void doSync(void);
void doTrace(void);
void endTrace(void);
Wave(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Wave::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(void);
 */

void CProxyElement_Wave::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Wave::idx_Wave_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxyElement_Wave::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_begin_iteration_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGhosts(int whichSide, int height, const double *s);
 */

void CProxyElement_Wave::recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int whichSide, int height, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(height));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_recvGhosts_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSync(void);
 */

void CProxyElement_Wave::doSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_doSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doTrace(void);
 */

void CProxyElement_Wave::doTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_doTrace_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTrace(void);
 */

void CProxyElement_Wave::endTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_endTrace_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(void);
 */

CkArrayID CProxy_Wave::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Wave::idx_Wave_void(),opts);
}

CkArrayID CProxy_Wave::ckNew(const int s1, const int s2)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Wave::idx_Wave_void(),CkArrayOptions(s1, s2));
}

// Entry point registration function

int CkIndex_Wave::reg_Wave_void() {
  int epidx = CkRegisterEp("Wave(void)",
      _call_Wave_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_Wave_void(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Wave();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxy_Wave::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Wave::idx_begin_iteration_void(),0);
}

// Entry point registration function

int CkIndex_Wave::reg_begin_iteration_void() {
  int epidx = CkRegisterEp("begin_iteration(void)",
      _call_begin_iteration_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_begin_iteration_void(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->begin_iteration();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGhosts(int whichSide, int height, const double *s);
 */

void CProxy_Wave::recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int whichSide, int height, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(height));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Wave::idx_recvGhosts_marshall3(),0);
}

// Entry point registration function

int CkIndex_Wave::reg_recvGhosts_marshall3() {
  int epidx = CkRegisterEp("recvGhosts(int whichSide, int height, const double *s)",
      _call_recvGhosts_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvGhosts_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvGhosts_marshall3);

  return epidx;
}


void CkIndex_Wave::_call_recvGhosts_marshall3(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int whichSide, int height, const double *s*/
  PUP::fromMem implP(impl_buf);
  int whichSide; implP|whichSide;
  int height; implP|height;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->recvGhosts(whichSide, height, s);
}

int CkIndex_Wave::_callmarshall_recvGhosts_marshall3(char* impl_buf, void* impl_obj_void) {
  Wave* impl_obj = static_cast< Wave *>(impl_obj_void);
  /*Unmarshall pup'd fields: int whichSide, int height, const double *s*/
  PUP::fromMem implP(impl_buf);
  int whichSide; implP|whichSide;
  int height; implP|height;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->recvGhosts(whichSide, height, s);
  return implP.size();
}

void CkIndex_Wave::_marshallmessagepup_recvGhosts_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int whichSide, int height, const double *s*/
  PUP::fromMem implP(impl_buf);
  int whichSide; implP|whichSide;
  int height; implP|height;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  if (implDestP.hasComments()) implDestP.comment("whichSide");
  implDestP|whichSide;
  if (implDestP.hasComments()) implDestP.comment("height");
  implDestP|height;
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*s))<impl_cnt_s;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|s[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSync(void);
 */

void CProxy_Wave::doSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Wave::idx_doSync_void(),0);
}

// Entry point registration function

int CkIndex_Wave::reg_doSync_void() {
  int epidx = CkRegisterEp("doSync(void)",
      _call_doSync_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_doSync_void(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doSync();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doTrace(void);
 */

void CProxy_Wave::doTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Wave::idx_doTrace_void(),0);
}

// Entry point registration function

int CkIndex_Wave::reg_doTrace_void() {
  int epidx = CkRegisterEp("doTrace(void)",
      _call_doTrace_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_doTrace_void(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->doTrace();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTrace(void);
 */

void CProxy_Wave::endTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Wave::idx_endTrace_void(),0);
}

// Entry point registration function

int CkIndex_Wave::reg_endTrace_void() {
  int epidx = CkRegisterEp("endTrace(void)",
      _call_endTrace_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_endTrace_void(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->endTrace();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Wave::reg_Wave_CkMigrateMessage() {
  int epidx = CkRegisterEp("Wave(CkMigrateMessage* impl_msg)",
      _call_Wave_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Wave::_call_Wave_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Wave* impl_obj = static_cast<Wave *>(impl_obj_void);
  new (impl_obj) Wave((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxySection_Wave::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_begin_iteration_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGhosts(int whichSide, int height, const double *s);
 */

void CProxySection_Wave::recvGhosts(int whichSide, int height, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int whichSide, int height, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(height));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|whichSide;
    implP|height;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_recvGhosts_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSync(void);
 */

void CProxySection_Wave::doSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_doSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doTrace(void);
 */

void CProxySection_Wave::doTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_doTrace_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTrace(void);
 */

void CProxySection_Wave::endTrace(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Wave::idx_endTrace_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Wave(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Wave::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Wave(void);
  idx_Wave_void();
  CkRegisterDefaultCtor(__idx, idx_Wave_void());

  // REG: void begin_iteration(void);
  idx_begin_iteration_void();

  // REG: void recvGhosts(int whichSide, int height, const double *s);
  idx_recvGhosts_marshall3();

  // REG: void doSync(void);
  idx_doSync_void();

  // REG: void doTrace(void);
  idx_doTrace_void();

  // REG: void endTrace(void);
  idx_endTrace_void();

  // REG: Wave(CkMigrateMessage* impl_msg);
  idx_Wave_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Wave_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MyBlockMap: CkArrayMap{
MyBlockMap(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MyBlockMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MyBlockMap(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MyBlockMap(void);
 */

CkGroupID CProxy_MyBlockMap::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_MyBlockMap::__idx, CkIndex_MyBlockMap::idx_MyBlockMap_void(), impl_msg);
}

// Entry point registration function

int CkIndex_MyBlockMap::reg_MyBlockMap_void() {
  int epidx = CkRegisterEp("MyBlockMap(void)",
      _call_MyBlockMap_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_MyBlockMap::_call_MyBlockMap_void(void* impl_msg, void* impl_obj_void)
{
  MyBlockMap* impl_obj = static_cast<MyBlockMap *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) MyBlockMap();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MyBlockMap(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MyBlockMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,MyBlockMap::isIrreducible());
  // REG: MyBlockMap(void);
  idx_MyBlockMap_void();
  CkRegisterDefaultCtor(__idx, idx_MyBlockMap_void());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerwave2d(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerPowerLog();

  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("arrayProxy","CProxy_Wave",sizeof(arrayProxy),(void *) &arrayProxy,__xlater_roPup_arrayProxy);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void iterationCompleted(CkReductionMsg* impl_msg);
void afterCkpt(void);
void updateLastT(void);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Wave: ArrayElement{
Wave(void);
void begin_iteration(void);
void recvGhosts(int whichSide, int height, const double *s);
void doSync(void);
void doTrace(void);
void endTrace(void);
Wave(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Wave::__register("Wave", sizeof(Wave));

/* REG: group MyBlockMap: CkArrayMap{
MyBlockMap(void);
};
*/
  CkIndex_MyBlockMap::__register("MyBlockMap", sizeof(MyBlockMap));

}
extern "C" void CkRegisterMainModule(void) {
  _registerwave2d();
}
#endif /* CK_TEMPLATES_ONLY */
