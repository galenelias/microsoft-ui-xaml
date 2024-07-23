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

#include "ToggleButton.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ToggleButtonGenerated::ToggleButtonGenerated()
{
}

DirectUI::ToggleButtonGenerated::~ToggleButtonGenerated()
{
}

HRESULT DirectUI::ToggleButtonGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ToggleButton)))
    {
        *ppObject = static_cast<DirectUI::ToggleButton*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonOverrides*>(this);
    }
    else
    {
        RRETURN(DirectUI::ButtonBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ToggleButtonGenerated::get_IsChecked(_Out_ ABI::Windows::Foundation::IReference<bool>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleButton_IsChecked, ppValue));
}
IFACEMETHODIMP DirectUI::ToggleButtonGenerated::put_IsChecked(_In_ ABI::Windows::Foundation::IReference<bool>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleButton_IsChecked, pValue));
}
IFACEMETHODIMP DirectUI::ToggleButtonGenerated::get_IsThreeState(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleButton_IsThreeState, pValue));
}
IFACEMETHODIMP DirectUI::ToggleButtonGenerated::put_IsThreeState(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleButton_IsThreeState, value));
}

// Events.
_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::GetCheckedEventSourceNoRef(_Outptr_ CheckedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ToggleButton_Checked, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CheckedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ToggleButton_Checked, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::ToggleButton_Checked, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::add_Checked(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CheckedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCheckedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::remove_Checked(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CheckedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCheckedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ToggleButton_Checked));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::GetIndeterminateEventSourceNoRef(_Outptr_ IndeterminateEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ToggleButton_Indeterminate, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<IndeterminateEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ToggleButton_Indeterminate, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::ToggleButton_Indeterminate, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::add_Indeterminate(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    IndeterminateEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetIndeterminateEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::remove_Indeterminate(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    IndeterminateEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetIndeterminateEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ToggleButton_Indeterminate));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::GetUncheckedEventSourceNoRef(_Outptr_ UncheckedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ToggleButton_Unchecked, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<UncheckedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ToggleButton_Unchecked, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::ToggleButton_Unchecked, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::add_Unchecked(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    UncheckedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetUncheckedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToggleButtonGenerated::remove_Unchecked(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    UncheckedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetUncheckedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ToggleButton_Unchecked));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::ToggleButtonGenerated::OnToggle()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ToggleButton_OnToggle", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ToggleButton*>(this)->OnToggleImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ToggleButton_OnToggle", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::OnToggleProtected()
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnToggle());
    }
    else
    {
        IFC(OnToggle());
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::ToggleButton_Checked:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                CheckedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetCheckedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToggleButton_Indeterminate:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                IndeterminateEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetIndeterminateEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToggleButton_Unchecked:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                UncheckedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetUncheckedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ButtonBaseGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::ToggleButtonGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::ToggleButton_Checked:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                CheckedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetCheckedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToggleButton_Indeterminate:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                IndeterminateEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetIndeterminateEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToggleButton_Unchecked:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                UncheckedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetUncheckedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ButtonBaseGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::ToggleButtonFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButtonStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ToggleButtonFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::ToggleButtonFactory::get_IsCheckedProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToggleButton_IsChecked, ppValue));
}
IFACEMETHODIMP DirectUI::ToggleButtonFactory::get_IsThreeStateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToggleButton_IsThreeState, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ToggleButton()
    {
        RRETURN(ctl::ActivationFactoryCreator<ToggleButtonFactory>::CreateActivationFactory());
    }
}
