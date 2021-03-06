/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLCollection.h"

#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeCustom.h"
#include "Node.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLCollectionTableValues[] =
{
    { "length", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCollectionLength), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCollectionConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLCollectionTable = { 5, 3, JSHTMLCollectionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLCollectionConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLCollectionConstructorTable = { 1, 0, JSHTMLCollectionConstructorTableValues, 0 };
const ClassInfo JSHTMLCollectionConstructor::s_info = { "HTMLCollectionConstructor", &Base::s_info, &JSHTMLCollectionConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLCollectionConstructor) };

JSHTMLCollectionConstructor::JSHTMLCollectionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLCollectionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLCollectionPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLCollectionConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCollectionConstructor, JSDOMWrapper>(exec, JSHTMLCollectionConstructorTable, jsCast<JSHTMLCollectionConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLCollectionPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLCollectionPrototypeFunctionItem), (intptr_t)0 },
    { "namedItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLCollectionPrototypeFunctionNamedItem), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLCollectionPrototypeTable = { 5, 3, JSHTMLCollectionPrototypeTableValues, 0 };
const ClassInfo JSHTMLCollectionPrototype::s_info = { "HTMLCollectionPrototype", &Base::s_info, &JSHTMLCollectionPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLCollectionPrototype) };

JSObject* JSHTMLCollectionPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLCollection>(vm, globalObject);
}

bool JSHTMLCollectionPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLCollectionPrototype* thisObject = jsCast<JSHTMLCollectionPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSHTMLCollectionPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSHTMLCollection::s_info = { "HTMLCollection", &Base::s_info, &JSHTMLCollectionTable, 0 , CREATE_METHOD_TABLE(JSHTMLCollection) };

JSHTMLCollection::JSHTMLCollection(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLCollection> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSHTMLCollection::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLCollection::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLCollectionPrototype::create(vm, globalObject, JSHTMLCollectionPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSHTMLCollection::destroy(JSC::JSCell* cell)
{
    JSHTMLCollection* thisObject = static_cast<JSHTMLCollection*>(cell);
    thisObject->JSHTMLCollection::~JSHTMLCollection();
}

JSHTMLCollection::~JSHTMLCollection()
{
    releaseImplIfNotNull();
}

bool JSHTMLCollection::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLCollection* thisObject = jsCast<JSHTMLCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    JSValue proto = thisObject->prototype();
    if (proto.isObject() && jsCast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSHTMLCollection>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLCollection, Base>(exec, JSHTMLCollectionTable, thisObject, propertyName, slot);
}

bool JSHTMLCollection::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHTMLCollection* thisObject = jsCast<JSHTMLCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsHTMLCollectionLength(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLCollection* castedThis = jsDynamicCast<JSHTMLCollection*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLCollection& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLCollectionConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHTMLCollection* domObject = jsDynamicCast<JSHTMLCollection*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLCollection::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSHTMLCollection::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSHTMLCollection* thisObject = jsCast<JSHTMLCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSHTMLCollection::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLCollectionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLCollectionPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHTMLCollection* castedThis = jsDynamicCast<JSHTMLCollection*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLCollection::info());
    HTMLCollection& impl = castedThis->impl();
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLCollectionPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHTMLCollection* castedThis = jsDynamicCast<JSHTMLCollection*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLCollection::info());
    HTMLCollection& impl = castedThis->impl();
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.namedItem(name)));
    return JSValue::encode(result);
}


EncodedJSValue JSHTMLCollection::indexGetter(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue, unsigned index)
{
    JSHTMLCollection* thisObj = jsCast<JSHTMLCollection*>(JSValue::decode(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, info());
    return JSValue::encode(toJS(exec, thisObj->globalObject(), thisObj->impl().item(index)));
}

static inline bool isObservable(JSHTMLCollection* jsHTMLCollection)
{
    if (jsHTMLCollection->hasCustomProperties())
        return true;
    return false;
}

bool JSHTMLCollectionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSHTMLCollection* jsHTMLCollection = jsCast<JSHTMLCollection*>(handle.get().asCell());
    if (!isObservable(jsHTMLCollection))
        return false;
    void* root = WebCore::root(jsHTMLCollection->impl().ownerNode());
    return visitor.containsOpaqueRoot(root);
}

void JSHTMLCollectionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSHTMLCollection* jsHTMLCollection = jsCast<JSHTMLCollection*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsHTMLCollection->impl(), jsHTMLCollection);
    jsHTMLCollection->releaseImpl();
}

HTMLCollection* toHTMLCollection(JSC::JSValue value)
{
    return value.inherits(JSHTMLCollection::info()) ? &jsCast<JSHTMLCollection*>(value)->impl() : 0;
}

}
