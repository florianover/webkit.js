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

#if ENABLE(DEVICE_ORIENTATION)

#include "JSDeviceMotionEvent.h"

#include "DeviceMotionEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDeviceMotionEventTableValues[] =
{
    { "acceleration", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventAcceleration), (intptr_t)0 },
    { "accelerationIncludingGravity", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventAccelerationIncludingGravity), (intptr_t)0 },
    { "rotationRate", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventRotationRate), (intptr_t)0 },
    { "interval", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventInterval), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceMotionEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDeviceMotionEventTable = { 18, 15, JSDeviceMotionEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDeviceMotionEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDeviceMotionEventConstructorTable = { 1, 0, JSDeviceMotionEventConstructorTableValues, 0 };
const ClassInfo JSDeviceMotionEventConstructor::s_info = { "DeviceMotionEventConstructor", &Base::s_info, &JSDeviceMotionEventConstructorTable, 0, CREATE_METHOD_TABLE(JSDeviceMotionEventConstructor) };

JSDeviceMotionEventConstructor::JSDeviceMotionEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDeviceMotionEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDeviceMotionEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDeviceMotionEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDeviceMotionEventConstructor, JSDOMWrapper>(exec, JSDeviceMotionEventConstructorTable, jsCast<JSDeviceMotionEventConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSDeviceMotionEventPrototypeTableValues[] =
{
    { "initDeviceMotionEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDeviceMotionEventPrototypeFunctionInitDeviceMotionEvent), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDeviceMotionEventPrototypeTable = { 2, 1, JSDeviceMotionEventPrototypeTableValues, 0 };
const ClassInfo JSDeviceMotionEventPrototype::s_info = { "DeviceMotionEventPrototype", &Base::s_info, &JSDeviceMotionEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSDeviceMotionEventPrototype) };

JSObject* JSDeviceMotionEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDeviceMotionEvent>(vm, globalObject);
}

bool JSDeviceMotionEventPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDeviceMotionEventPrototype* thisObject = jsCast<JSDeviceMotionEventPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSDeviceMotionEventPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSDeviceMotionEvent::s_info = { "DeviceMotionEvent", &Base::s_info, &JSDeviceMotionEventTable, 0 , CREATE_METHOD_TABLE(JSDeviceMotionEvent) };

JSDeviceMotionEvent::JSDeviceMotionEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DeviceMotionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSDeviceMotionEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSDeviceMotionEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDeviceMotionEventPrototype::create(vm, globalObject, JSDeviceMotionEventPrototype::createStructure(vm, globalObject, JSEventPrototype::self(vm, globalObject)));
}

bool JSDeviceMotionEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDeviceMotionEvent* thisObject = jsCast<JSDeviceMotionEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSDeviceMotionEvent, Base>(exec, JSDeviceMotionEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsDeviceMotionEventAcceleration(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSDeviceMotionEvent* castedThis = jsDynamicCast<JSDeviceMotionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->acceleration(exec));
}


EncodedJSValue jsDeviceMotionEventAccelerationIncludingGravity(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSDeviceMotionEvent* castedThis = jsDynamicCast<JSDeviceMotionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->accelerationIncludingGravity(exec));
}


EncodedJSValue jsDeviceMotionEventRotationRate(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSDeviceMotionEvent* castedThis = jsDynamicCast<JSDeviceMotionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->rotationRate(exec));
}


EncodedJSValue jsDeviceMotionEventInterval(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSDeviceMotionEvent* castedThis = jsDynamicCast<JSDeviceMotionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->interval(exec));
}


EncodedJSValue jsDeviceMotionEventConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSDeviceMotionEvent* domObject = jsDynamicCast<JSDeviceMotionEvent*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDeviceMotionEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSDeviceMotionEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDeviceMotionEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDeviceMotionEventPrototypeFunctionInitDeviceMotionEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSDeviceMotionEvent* castedThis = jsDynamicCast<JSDeviceMotionEvent*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDeviceMotionEvent::info());
    return JSValue::encode(castedThis->initDeviceMotionEvent(exec));
}


}

#endif // ENABLE(DEVICE_ORIENTATION)