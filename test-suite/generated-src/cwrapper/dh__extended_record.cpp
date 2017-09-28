// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "extended_record.hpp"

#include "dh__extended_record.hpp"

static void(*s_py_callback_extended_record___delete)(DjinniRecordHandle * );
void extended_record_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_extended_record___delete = ptr;
}

void extended_record___delete(DjinniRecordHandle * drh) {
    s_py_callback_extended_record___delete(drh);
}
void optional_extended_record___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_extended_record___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static bool ( * s_py_callback_extended_record_get_extended_record_f1)(DjinniRecordHandle *);

void extended_record_add_callback_get_extended_record_f1(bool( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_extended_record_get_extended_record_f1 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_extended_record_python_create_extended_record)(bool);

void extended_record_add_callback_python_create_extended_record(DjinniRecordHandle *( * ptr)(bool)) {
    s_py_callback_extended_record_python_create_extended_record = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniExtendedRecord::fromCpp(const ::testsuite::ExtendedRecord& dr) {

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_extended_record_python_create_extended_record(
            dr.foo),
        extended_record___delete);
    return _aux;
}

::testsuite::ExtendedRecord DjinniExtendedRecord::toCpp(djinni::Handle<DjinniRecordHandle> dh) {

    auto _aux = ::testsuite::ExtendedRecord(
        s_py_callback_extended_record_get_extended_record_f1(dh.get()));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniExtendedRecord::fromCpp(std::experimental::optional<::testsuite::ExtendedRecord> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniExtendedRecord::fromCpp(std::move(* dc)), optional_extended_record___delete);
}

std::experimental::optional<::testsuite::ExtendedRecord>DjinniExtendedRecord::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::testsuite::ExtendedRecord>(DjinniExtendedRecord::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), extended_record___delete)));
    }
    return std::experimental::nullopt;
}
