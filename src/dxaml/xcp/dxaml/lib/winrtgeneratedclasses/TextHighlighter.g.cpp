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

#include "TextHighlighter.g.h"
#include "Brush.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::TextHighlighterGenerated::TextHighlighterGenerated()
{
}

DirectUI::TextHighlighterGenerated::~TextHighlighterGenerated()
{
}

HRESULT DirectUI::TextHighlighterGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextHighlighter)))
    {
        *ppObject = static_cast<DirectUI::TextHighlighter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighter)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Documents::ITextHighlighter>(this);
    }
    else
    {
        RRETURN(DirectUI::TextHighlighterBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::TextHighlighterGenerated::get_Background(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TextHighlighter_Background, ppValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::TextHighlighterGenerated::put_Background(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TextHighlighter_Background, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::TextHighlighterGenerated::get_Foreground(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TextHighlighter_Foreground, ppValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::TextHighlighterGenerated::put_Foreground(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TextHighlighter_Foreground, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::TextHighlighterGenerated::get_Ranges(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::TextRange>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TextHighlighter_Ranges, ppValue));
}

// Events.

// Methods.

HRESULT DirectUI::TextHighlighterFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::TextHighlighterFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Documents::ITextHighlighter** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighter);
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

IFACEMETHODIMP DirectUI::TextHighlighterFactory::get_ForegroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TextHighlighter_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::TextHighlighterFactory::get_BackgroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TextHighlighter_Background, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TextHighlighter()
    {
        RRETURN(ctl::ActivationFactoryCreator<TextHighlighterFactory>::CreateActivationFactory());
    }
}