
/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int array_height;
 */
extern int array_height;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_array_height(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|array_height;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int array_width;
 */
extern int array_width;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_array_width(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|array_width;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int block_height;
 */
extern int block_height;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_block_height(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|block_height;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int block_width;
 */
extern int block_width;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_block_width(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|block_width;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int num_chare_rows;
 */
extern int num_chare_rows;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_chare_rows(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_chare_rows;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int num_chare_cols;
 */
extern int num_chare_cols;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_chare_cols(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_chare_cols;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void report(CkReductionMsg* impl_msg);
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
/* DEFS: void report(CkReductionMsg* impl_msg);
 */

void CProxy_Main::report(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_report_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_report_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_report_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_report_CkReductionMsg() {
  int epidx = CkRegisterEp("report(CkReductionMsg* impl_msg)",
      _call_report_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_report_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  impl_obj->report((CkReductionMsg*)impl_msg);
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

  // REG: void report(CkReductionMsg* impl_msg);
  idx_report_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Jacobi: ArrayElement{
Jacobi(void);
void begin_iteration(void);
void ghostsFromLeft(int width, const double *s);
void ghostsFromRight(int width, const double *s);
void ghostsFromTop(int width, const double *s);
void ghostsFromBottom(int width, const double *s);
Jacobi(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Jacobi::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Jacobi(void);
 */

void CProxyElement_Jacobi::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Jacobi::idx_Jacobi_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxyElement_Jacobi::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_begin_iteration_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromLeft(int width, const double *s);
 */

void CProxyElement_Jacobi::ghostsFromLeft(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromLeft_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromRight(int width, const double *s);
 */

void CProxyElement_Jacobi::ghostsFromRight(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromRight_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromTop(int width, const double *s);
 */

void CProxyElement_Jacobi::ghostsFromTop(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromTop_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromBottom(int width, const double *s);
 */

void CProxyElement_Jacobi::ghostsFromBottom(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromBottom_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Jacobi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Jacobi(void);
 */

CkArrayID CProxy_Jacobi::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Jacobi::idx_Jacobi_void(),opts);
}

CkArrayID CProxy_Jacobi::ckNew(const int s1, const int s2)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_Jacobi::idx_Jacobi_void(),CkArrayOptions(s1, s2));
}

// Entry point registration function

int CkIndex_Jacobi::reg_Jacobi_void() {
  int epidx = CkRegisterEp("Jacobi(void)",
      _call_Jacobi_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Jacobi::_call_Jacobi_void(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Jacobi();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxy_Jacobi::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Jacobi::idx_begin_iteration_void(),0);
}

// Entry point registration function

int CkIndex_Jacobi::reg_begin_iteration_void() {
  int epidx = CkRegisterEp("begin_iteration(void)",
      _call_begin_iteration_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Jacobi::_call_begin_iteration_void(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->begin_iteration();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromLeft(int width, const double *s);
 */

void CProxy_Jacobi::ghostsFromLeft(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Jacobi::idx_ghostsFromLeft_marshall3(),0);
}

// Entry point registration function

int CkIndex_Jacobi::reg_ghostsFromLeft_marshall3() {
  int epidx = CkRegisterEp("ghostsFromLeft(int width, const double *s)",
      _call_ghostsFromLeft_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ghostsFromLeft_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ghostsFromLeft_marshall3);

  return epidx;
}


void CkIndex_Jacobi::_call_ghostsFromLeft_marshall3(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromLeft(width, s);
}

int CkIndex_Jacobi::_callmarshall_ghostsFromLeft_marshall3(char* impl_buf, void* impl_obj_void) {
  Jacobi* impl_obj = static_cast< Jacobi *>(impl_obj_void);
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromLeft(width, s);
  return implP.size();
}

void CkIndex_Jacobi::_marshallmessagepup_ghostsFromLeft_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
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
/* DEFS: void ghostsFromRight(int width, const double *s);
 */

void CProxy_Jacobi::ghostsFromRight(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Jacobi::idx_ghostsFromRight_marshall4(),0);
}

// Entry point registration function

int CkIndex_Jacobi::reg_ghostsFromRight_marshall4() {
  int epidx = CkRegisterEp("ghostsFromRight(int width, const double *s)",
      _call_ghostsFromRight_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ghostsFromRight_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ghostsFromRight_marshall4);

  return epidx;
}


void CkIndex_Jacobi::_call_ghostsFromRight_marshall4(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromRight(width, s);
}

int CkIndex_Jacobi::_callmarshall_ghostsFromRight_marshall4(char* impl_buf, void* impl_obj_void) {
  Jacobi* impl_obj = static_cast< Jacobi *>(impl_obj_void);
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromRight(width, s);
  return implP.size();
}

void CkIndex_Jacobi::_marshallmessagepup_ghostsFromRight_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
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
/* DEFS: void ghostsFromTop(int width, const double *s);
 */

void CProxy_Jacobi::ghostsFromTop(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Jacobi::idx_ghostsFromTop_marshall5(),0);
}

// Entry point registration function

int CkIndex_Jacobi::reg_ghostsFromTop_marshall5() {
  int epidx = CkRegisterEp("ghostsFromTop(int width, const double *s)",
      _call_ghostsFromTop_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ghostsFromTop_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ghostsFromTop_marshall5);

  return epidx;
}


void CkIndex_Jacobi::_call_ghostsFromTop_marshall5(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromTop(width, s);
}

int CkIndex_Jacobi::_callmarshall_ghostsFromTop_marshall5(char* impl_buf, void* impl_obj_void) {
  Jacobi* impl_obj = static_cast< Jacobi *>(impl_obj_void);
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromTop(width, s);
  return implP.size();
}

void CkIndex_Jacobi::_marshallmessagepup_ghostsFromTop_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
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
/* DEFS: void ghostsFromBottom(int width, const double *s);
 */

void CProxy_Jacobi::ghostsFromBottom(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Jacobi::idx_ghostsFromBottom_marshall6(),0);
}

// Entry point registration function

int CkIndex_Jacobi::reg_ghostsFromBottom_marshall6() {
  int epidx = CkRegisterEp("ghostsFromBottom(int width, const double *s)",
      _call_ghostsFromBottom_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ghostsFromBottom_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ghostsFromBottom_marshall6);

  return epidx;
}


void CkIndex_Jacobi::_call_ghostsFromBottom_marshall6(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromBottom(width, s);
}

int CkIndex_Jacobi::_callmarshall_ghostsFromBottom_marshall6(char* impl_buf, void* impl_obj_void) {
  Jacobi* impl_obj = static_cast< Jacobi *>(impl_obj_void);
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  impl_obj->ghostsFromBottom(width, s);
  return implP.size();
}

void CkIndex_Jacobi::_marshallmessagepup_ghostsFromBottom_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int width, const double *s*/
  PUP::fromMem implP(impl_buf);
  int width; implP|width;
  int impl_off_s, impl_cnt_s; 
  implP|impl_off_s;
  implP|impl_cnt_s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *s=(double *)(impl_buf+impl_off_s);
  if (implDestP.hasComments()) implDestP.comment("width");
  implDestP|width;
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
/* DEFS: Jacobi(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Jacobi::reg_Jacobi_CkMigrateMessage() {
  int epidx = CkRegisterEp("Jacobi(CkMigrateMessage* impl_msg)",
      _call_Jacobi_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Jacobi::_call_Jacobi_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Jacobi* impl_obj = static_cast<Jacobi *>(impl_obj_void);
  new (impl_obj) Jacobi((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Jacobi(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin_iteration(void);
 */

void CProxySection_Jacobi::begin_iteration(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_begin_iteration_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromLeft(int width, const double *s);
 */

void CProxySection_Jacobi::ghostsFromLeft(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromLeft_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromRight(int width, const double *s);
 */

void CProxySection_Jacobi::ghostsFromRight(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromRight_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromTop(int width, const double *s);
 */

void CProxySection_Jacobi::ghostsFromTop(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromTop_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ghostsFromBottom(int width, const double *s);
 */

void CProxySection_Jacobi::ghostsFromBottom(int width, const double *s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int width, const double *s
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_s, impl_cnt_s;
  impl_off_s=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_s=sizeof(double)*(width));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|width;
    implP|impl_off_s;
    implP|impl_cnt_s;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_s,s,impl_cnt_s);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Jacobi::idx_ghostsFromBottom_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Jacobi(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Jacobi::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Jacobi(void);
  idx_Jacobi_void();
  CkRegisterDefaultCtor(__idx, idx_Jacobi_void());

  // REG: void begin_iteration(void);
  idx_begin_iteration_void();

  // REG: void ghostsFromLeft(int width, const double *s);
  idx_ghostsFromLeft_marshall3();

  // REG: void ghostsFromRight(int width, const double *s);
  idx_ghostsFromRight_marshall4();

  // REG: void ghostsFromTop(int width, const double *s);
  idx_ghostsFromTop_marshall5();

  // REG: void ghostsFromBottom(int width, const double *s);
  idx_ghostsFromBottom_marshall6();

  // REG: Jacobi(CkMigrateMessage* impl_msg);
  idx_Jacobi_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Jacobi_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerjacobi2d(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerPowerLog();

  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("array_height","int",sizeof(array_height),(void *) &array_height,__xlater_roPup_array_height);

  CkRegisterReadonly("array_width","int",sizeof(array_width),(void *) &array_width,__xlater_roPup_array_width);

  CkRegisterReadonly("block_height","int",sizeof(block_height),(void *) &block_height,__xlater_roPup_block_height);

  CkRegisterReadonly("block_width","int",sizeof(block_width),(void *) &block_width,__xlater_roPup_block_width);

  CkRegisterReadonly("num_chare_rows","int",sizeof(num_chare_rows),(void *) &num_chare_rows,__xlater_roPup_num_chare_rows);

  CkRegisterReadonly("num_chare_cols","int",sizeof(num_chare_cols),(void *) &num_chare_cols,__xlater_roPup_num_chare_cols);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void report(CkReductionMsg* impl_msg);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Jacobi: ArrayElement{
Jacobi(void);
void begin_iteration(void);
void ghostsFromLeft(int width, const double *s);
void ghostsFromRight(int width, const double *s);
void ghostsFromTop(int width, const double *s);
void ghostsFromBottom(int width, const double *s);
Jacobi(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Jacobi::__register("Jacobi", sizeof(Jacobi));

}
extern "C" void CkRegisterMainModule(void) {
  _registerjacobi2d();
}
#endif /* CK_TEMPLATES_ONLY */
