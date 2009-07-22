#ifndef _WIN32K_CLASS_H
#define _WIN32K_CLASS_H

#include <include/win32.h>
#include <include/desktop.h>

#define IS_ATOM(x) \
  (((ULONG_PTR)(x) > 0x0) && ((ULONG_PTR)(x) < 0x10000))

typedef struct _WNDPROC_INFO
{
    WNDPROC WindowProc;
    BOOL IsUnicode;
} WNDPROC_INFO, *PWNDPROC_INFO;

static __inline BOOL
IsCallProcHandle(IN WNDPROC lpWndProc)
{
    /* FIXME - check for 64 bit architectures... */
    return ((ULONG_PTR)lpWndProc & 0xFFFF0000) == 0xFFFF0000;
}

WNDPROC
GetCallProcHandle(IN PCALLPROC CallProc);

VOID
DestroyCallProc(IN PDESKTOPINFO Desktop,
                IN OUT PCALLPROC CallProc);

PCALLPROC
CloneCallProc(IN PDESKTOPINFO Desktop,
              IN PCALLPROC CallProc);

PCALLPROC
CreateCallProc(IN PDESKTOPINFO Desktop,
               IN WNDPROC WndProc,
               IN BOOL Unicode,
               IN PPROCESSINFO pi);

BOOL
UserGetCallProcInfo(IN HANDLE hCallProc,
                    OUT PWNDPROC_INFO wpInfo);

void FASTCALL
DestroyProcessClasses(PW32PROCESS Process );

PWINDOWCLASS
IntReferenceClass(IN OUT PWINDOWCLASS BaseClass,
                  IN OUT PWINDOWCLASS *ClassLink,
                  IN PDESKTOP Desktop);

VOID
IntDereferenceClass(IN OUT PWINDOWCLASS Class,
                    IN PDESKTOPINFO Desktop,
                    IN PPROCESSINFO pi);

RTL_ATOM
UserRegisterClass(IN CONST WNDCLASSEXW* lpwcx,
                  IN PUNICODE_STRING ClassName,
                  IN PUNICODE_STRING MenuName,
                  IN WNDPROC wpExtra,
                  IN DWORD dwFlags);

BOOL
UserUnregisterClass(IN PUNICODE_STRING ClassName,
                    IN HINSTANCE hInstance);

ULONG_PTR
UserGetClassLongPtr(IN PWINDOWCLASS Class,
                    IN INT Index,
                    IN BOOL Ansi);

RTL_ATOM
IntGetClassAtom(IN PUNICODE_STRING ClassName,
                IN HINSTANCE hInstance  OPTIONAL,
                IN PPROCESSINFO pi  OPTIONAL,
                OUT PWINDOWCLASS *BaseClass  OPTIONAL,
                OUT PWINDOWCLASS **Link  OPTIONAL);

PWINDOWCLASS
FASTCALL
IntCreateClass(IN CONST WNDCLASSEXW* lpwcx,
               IN PUNICODE_STRING ClassName,
               IN PUNICODE_STRING MenuName,
               IN WNDPROC wpExtra,
               IN DWORD dwFlags,
               IN PDESKTOP Desktop,
               IN PPROCESSINFO pi);

PCALLPROC
UserFindCallProc(IN PWINDOWCLASS Class,
                 IN WNDPROC WndProc,
                 IN BOOL bUnicode);

BOOL
UserRegisterSystemClasses(IN ULONG Count,
                          IN PREGISTER_SYSCLASS SystemClasses);

VOID
UserAddCallProcToClass(IN OUT PWINDOWCLASS Class,
                       IN PCALLPROC CallProc);

BOOL
IntGetAtomFromStringOrAtom(IN PUNICODE_STRING ClassName,
                           OUT RTL_ATOM *Atom);

BOOL
IntCheckProcessDesktopClasses(IN PDESKTOP Desktop,
                              IN BOOL FreeOnFailure);

#endif /* _WIN32K_CLASS_H */

/* EOF */
