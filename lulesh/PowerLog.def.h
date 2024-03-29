/* DEFS: group PowerLogger: IrrGroup{
PowerLogger(int impl_noname_0);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PowerLogger::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PowerLogger(int impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PowerLogger(int impl_noname_0);
 */

CkGroupID CProxy_PowerLogger::ckNew(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  return CkCreateGroup(CkIndex_PowerLogger::__idx, CkIndex_PowerLogger::idx_PowerLogger_marshall1(), impl_msg);
}

  CProxy_PowerLogger::CProxy_PowerLogger(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  ckSetGroupID(CkCreateGroup(CkIndex_PowerLogger::__idx, CkIndex_PowerLogger::idx_PowerLogger_marshall1(), impl_msg));
}

// Entry point registration function

int CkIndex_PowerLogger::reg_PowerLogger_marshall1() {
  int epidx = CkRegisterEp("PowerLogger(int impl_noname_0)",
      _call_PowerLogger_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PowerLogger_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PowerLogger_marshall1);

  return epidx;
}


void CkIndex_PowerLogger::_call_PowerLogger_marshall1(void* impl_msg, void* impl_obj_void)
{
  PowerLogger* impl_obj = static_cast<PowerLogger *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) PowerLogger(impl_noname_0);
}

int CkIndex_PowerLogger::_callmarshall_PowerLogger_marshall1(char* impl_buf, void* impl_obj_void) {
  PowerLogger* impl_obj = static_cast< PowerLogger *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) PowerLogger(impl_noname_0);
  return implP.size();
}

void CkIndex_PowerLogger::_marshallmessagepup_PowerLogger_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PowerLogger(int impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PowerLogger::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PowerLogger::isIrreducible());
  // REG: PowerLogger(int impl_noname_0);
  idx_PowerLogger_marshall1();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPowerLog(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group PowerLogger: IrrGroup{
PowerLogger(int impl_noname_0);
};
*/
  CkIndex_PowerLogger::__register("PowerLogger", sizeof(PowerLogger));

}
#endif /* CK_TEMPLATES_ONLY */
