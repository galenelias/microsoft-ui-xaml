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

#include "XamlIsland.g.h"
#include "SystemBackdrop.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::XamlIslandGenerated::XamlIslandGenerated()
{
}

DirectUI::XamlIslandGenerated::~XamlIslandGenerated()
{
}

HRESULT DirectUI::XamlIslandGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlIsland)))
    {
        *ppObject = static_cast<DirectUI::XamlIsland*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IXamlIsland)) && Feature_ExperimentalApi::IsEnabled())
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IXamlIsland>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::IClosable)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::IClosable*>(this);
    }
#endif
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlIslandGenerated::get_Content(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    
    IFC(static_cast<XamlIsland*>(this)->get_ContentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlIslandGenerated::put_Content(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<XamlIsland*>(this)->put_ContentImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlIslandGenerated::get_ContentIsland(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentIsland** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    
    IFC(static_cast<XamlIsland*>(this)->get_ContentIslandImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlIslandGenerated::get_SystemBackdrop(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    
    IFC(static_cast<XamlIsland*>(this)->get_SystemBackdropImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlIslandGenerated::put_SystemBackdrop(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<XamlIsland*>(this)->put_SystemBackdropImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.

HRESULT DirectUI::XamlIslandFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IXamlIslandFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IXamlIslandFactory*>(this);
    }
    else
#endif
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::XamlIsland>::QueryInterfaceImpl(iid, ppObject));
    }

#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
    AddRefOuter();
    RRETURN(S_OK);
#endif
}

_Check_return_ HRESULT DirectUI::XamlIslandFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.
IFACEMETHODIMP DirectUI::XamlIslandFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IXamlIsland** ppInstance)
{
    if (!Feature_ExperimentalApi::IsEnabled()) IFC_RETURN(E_NOTIMPL);


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::XamlIsland,ABI::Microsoft::UI::Xaml::IXamlIsland>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), true /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlIsland()
    {
        RRETURN(ctl::ActivationFactoryCreator<XamlIslandFactory>::CreateActivationFactory());
    }
}