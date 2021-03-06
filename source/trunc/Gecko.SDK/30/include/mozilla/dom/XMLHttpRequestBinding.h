/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_XMLHttpRequestBinding_h__
#define mozilla_dom_XMLHttpRequestBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

class nsXMLHttpRequest;

namespace mozilla {
namespace dom {

struct MozXMLHttpRequestParametersAtoms;
class NativePropertyHooks;
class ProtoAndIfaceArray;

namespace workers {

class XMLHttpRequest;

} // namespace workers

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(XMLHttpRequestResponseType, uint32_t)
  _empty,
  Arraybuffer,
  Blob,
  Document,
  Json,
  Text,
  Moz_chunked_text,
  Moz_chunked_arraybuffer,
  Moz_blob
MOZ_END_ENUM_CLASS(XMLHttpRequestResponseType)

namespace XMLHttpRequestResponseTypeValues {
extern const EnumEntry strings[10];
} // namespace XMLHttpRequestResponseTypeValues


struct MozXMLHttpRequestParameters : public DictionaryBase
{
  bool mMozAnon;
  bool mMozSystem;

  MozXMLHttpRequestParameters();

  explicit inline MozXMLHttpRequestParameters(const MozXMLHttpRequestParameters& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline MozXMLHttpRequestParameters(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, MozXMLHttpRequestParametersAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const MozXMLHttpRequestParameters& aOther);
};

namespace binding_detail {
struct FastMozXMLHttpRequestParameters : public MozXMLHttpRequestParameters
{
  inline FastMozXMLHttpRequestParameters()
    : MozXMLHttpRequestParameters(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace XMLHttpRequestBinding {

  typedef nsXMLHttpRequest NativeType;

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
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, nsXMLHttpRequest* aObject, nsWrapperCache* aCache);

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

} // namespace XMLHttpRequestBinding



namespace XMLHttpRequestBinding_workers {

  typedef mozilla::dom::workers::XMLHttpRequest NativeType;

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::workers::XMLHttpRequest* aObject, nsWrapperCache* aCache);

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

} // namespace XMLHttpRequestBinding_workers



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_XMLHttpRequestBinding_h__
