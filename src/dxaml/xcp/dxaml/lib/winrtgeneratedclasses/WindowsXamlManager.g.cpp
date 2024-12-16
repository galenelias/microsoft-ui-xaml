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

#include "WindowsXamlManager.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::WindowsXamlManagerGenerated::WindowsXamlManagerGenerated()
{
}

DirectUI::WindowsXamlManagerGenerated::~WindowsXamlManagerGenerated()
{
}

HRESULT DirectUI::WindowsXamlManagerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::WindowsXamlManager)))
    {
        *ppObject = static_cast<DirectUI::WindowsXamlManager*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::IClosable)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::IClosable*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager2)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager2>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

_Check_return_ HRESULT DirectUI::WindowsXamlManagerGenerated::EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const
{
    HRESULT hr = S_OK;

    ARG_VALIDRETURNPOINTER(ptToken);
    ARG_NOTNULL(pValue, "value");
    IFC(CheckThread());

Cleanup:
    return S_OK;
}
// Events.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::WindowsXamlManagerGenerated::add_XamlShutdownCompletedOnThread(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::WindowsXamlManager*, ABI::Microsoft::UI::Xaml::Hosting::XamlShutdownCompletedOnThreadEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    XamlShutdownCompletedOnThreadEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));

    IFC(GetXamlShutdownCompletedOnThreadEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::WindowsXamlManagerGenerated::remove_XamlShutdownCompletedOnThread(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    XamlShutdownCompletedOnThreadEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::WindowsXamlManager*, ABI::Microsoft::UI::Xaml::Hosting::XamlShutdownCompletedOnThreadEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::WindowsXamlManager*, ABI::Microsoft::UI::Xaml::Hosting::XamlShutdownCompletedOnThreadEventArgs*>*)tToken.value;

    
    IFC(GetXamlShutdownCompletedOnThreadEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));


Cleanup:
    RRETURN(hr);
}

// Methods.

HRESULT DirectUI::WindowsXamlManagerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics2)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics2*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::WindowsXamlManagerFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::WindowsXamlManagerFactory::InitializeForCurrentThread(_Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "WindowsXamlManager_InitializeForCurrentThread", 0);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    
    IFC(InitializeForCurrentThreadImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "WindowsXamlManager_InitializeForCurrentThread", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::WindowsXamlManagerFactory::GetForCurrentThread(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Hosting::IWindowsXamlManager** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "WindowsXamlManager_GetForCurrentThread", 0);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    
    IFC(GetForCurrentThreadImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "WindowsXamlManager_GetForCurrentThread", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_WindowsXamlManager()
    {
        RRETURN(ctl::ActivationFactoryCreator<WindowsXamlManagerFactory>::CreateActivationFactory());
    }
}