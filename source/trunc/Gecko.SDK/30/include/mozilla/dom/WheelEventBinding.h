/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_WheelEventBinding_h__
#define mozilla_dom_WheelEventBinding_h__

#include "MouseEventBinding.h"
#include "js/RootingAPI.h"
#include "js/TypeDecls.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/EventTarget.h"
#include "mozilla/dom/Nullable.h"
#include "nsIDOMWindow.h"

class JSObject;
class nsIDOMWindow;

namespace mozilla {
namespace dom {

class EventTarget;
class NativePropertyHooks;
class ProtoAndIfaceArray;
class WheelEvent;
struct WheelEventInitAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct WheelEventInit : public MouseEventInit
{
  uint32_t mDeltaMode;
  double mDeltaX;
  double mDeltaY;
  double mDeltaZ;

  WheelEventInit();

protected:
  explicit inline WheelEventInit(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  WheelEventInit(const WheelEventInit&) MOZ_DELETE;
  void operator=(const WheelEventInit) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, WheelEventInitAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastWheelEventInit : public WheelEventInit
{
  inline FastWheelEventInit()
    : WheelEventInit(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace WheelEventBinding {

  typedef mozilla::dom::WheelEvent NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::WheelEvent* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace WheelEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_WheelEventBinding_h__
