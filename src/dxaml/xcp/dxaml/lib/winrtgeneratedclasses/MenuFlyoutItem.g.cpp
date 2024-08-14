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

#include "MenuFlyoutItem.g.h"
#include "IconElement.g.h"
#include "MenuFlyoutItemTemplateSettings.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::MenuFlyoutItemGenerated::MenuFlyoutItemGenerated()
{
}

DirectUI::MenuFlyoutItemGenerated::~MenuFlyoutItemGenerated()
{
}

HRESULT DirectUI::MenuFlyoutItemGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MenuFlyoutItem)))
    {
        *ppObject = static_cast<DirectUI::MenuFlyoutItem*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItem)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItem*>(this);
    }
    else
    {
        RRETURN(DirectUI::MenuFlyoutItemBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_Command(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::ICommand** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Command, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::put_Command(_In_opt_ ABI::Microsoft::UI::Xaml::Input::ICommand* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Command, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_CommandParameter(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_CommandParameter, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::put_CommandParameter(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_CommandParameter, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_Icon(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Icon, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::put_Icon(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IIconElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Icon, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_KeyboardAcceleratorTextOverride(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<MenuFlyoutItem*>(this)->get_KeyboardAcceleratorTextOverrideImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::put_KeyboardAcceleratorTextOverride(_In_opt_ HSTRING value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MenuFlyoutItem*>(this)->put_KeyboardAcceleratorTextOverrideImpl(value));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::get_PreventDismissOnPointer(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_PreventDismissOnPointer, pValue));
}
_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::put_PreventDismissOnPointer(_In_ BOOLEAN value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_PreventDismissOnPointer, value));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_TemplateSettings(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_TemplateSettings, ppValue));
}
_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_TemplateSettings, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::get_Text(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Text, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::put_Text(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutItem_Text, value));
}

// Events.
_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::GetClickEventSourceNoRef(_Outptr_ ClickEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::MenuFlyoutItem_Click, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ClickEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::MenuFlyoutItem_Click, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::MenuFlyoutItem_Click, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::add_Click(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ClickEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClickEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::MenuFlyoutItemGenerated::remove_Click(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ClickEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClickEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::MenuFlyoutItem_Click));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.

_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::MenuFlyoutItem_Click:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                ClickEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClickEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::MenuFlyoutItemBaseGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::MenuFlyoutItemGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::MenuFlyoutItem_Click:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                ClickEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClickEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::MenuFlyoutItemBaseGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::MenuFlyoutItemFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItemStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItem** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutItem);
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
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::get_TextProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutItem_Text, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::get_CommandProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutItem_Command, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::get_CommandParameterProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutItem_CommandParameter, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::get_IconProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutItem_Icon, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutItemFactory::get_KeyboardAcceleratorTextOverrideProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutItem_KeyboardAcceleratorTextOverride, ppValue));
}



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_MenuFlyoutItem()
    {
        RRETURN(ctl::ActivationFactoryCreator<MenuFlyoutItemFactory>::CreateActivationFactory());
    }
}