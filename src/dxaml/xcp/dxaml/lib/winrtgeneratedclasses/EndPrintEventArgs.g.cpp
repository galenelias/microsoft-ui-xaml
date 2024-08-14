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
#include "EndPrintEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::EndPrintEventArgs::EndPrintEventArgs(): m_errorCode()
{
}

DirectUI::EndPrintEventArgs::~EndPrintEventArgs()
{
}

HRESULT DirectUI::EndPrintEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::EndPrintEventArgs)))
    {
        *ppObject = static_cast<DirectUI::EndPrintEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
_Check_return_ HRESULT DirectUI::EndPrintEventArgs::get_ErrorCode(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_errorCode, pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::EndPrintEventArgs::put_ErrorCode(_In_ INT value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_errorCode));
Cleanup:
    RRETURN(hr);
}

// Methods.

