// compat/mfc_compat.h
#pragma once

#ifdef _MFC_VER
  #include <afxwin.h>
#else
  // Stub out MFC decorators
  #define AFX_EXT_CLASS
  #define DECLARE_DYNAMIC(cls)
  #define IMPLEMENT_DYNAMIC(cls, base)
  #define DECLARE_SERIAL(cls)
  #define IMPLEMENT_SERIAL(cls, base, schema)

  // Minimal CObject stub if needed
  class CObject {
  public:
      virtual ~CObject() = default;
  };
#endif
