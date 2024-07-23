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
#include "DownloadProgressEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::DownloadProgressEventArgs::DownloadProgressEventArgs()
{
}

DirectUI::DownloadProgressEventArgs::~DownloadProgressEventArgs()
{
}

HRESULT DirectUI::DownloadProgressEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DownloadProgressEventArgs)))
    {
        *ppObject = static_cast<DirectUI::DownloadProgressEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::DownloadProgressEventArgs::get_Progress(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    INT valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CDownloadProgressEventArgs*>(pCoreEventArgsNoRef)->get_Progress(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DownloadProgressEventArgs::put_Progress(_In_ INT value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    INT valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CDownloadProgressEventArgs*>(pCoreEventArgsNoRef)->put_Progress(valueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateDownloadProgressEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::DownloadProgressEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_DownloadProgressEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
