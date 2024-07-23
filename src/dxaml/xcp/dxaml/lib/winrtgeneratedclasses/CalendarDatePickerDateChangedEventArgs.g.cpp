// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "precomp.h"
#include "CalendarDatePickerDateChangedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::CalendarDatePickerDateChangedEventArgsGenerated()
{
}

DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::~CalendarDatePickerDateChangedEventArgsGenerated()
{
}

HRESULT DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarDatePickerDateChangedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::CalendarDatePickerDateChangedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::get_NewDate(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<CalendarDatePickerDateChangedEventArgs*>(this)->get_NewDateImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::put_NewDate(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<CalendarDatePickerDateChangedEventArgs*>(this)->put_NewDateImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::get_OldDate(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<CalendarDatePickerDateChangedEventArgs*>(this)->get_OldDateImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CalendarDatePickerDateChangedEventArgsGenerated::put_OldDate(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<CalendarDatePickerDateChangedEventArgs*>(this)->put_OldDateImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateCalendarDatePickerDateChangedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::CalendarDatePickerDateChangedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_CalendarDatePickerDateChangedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
