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

#pragma once


#define __ItemInvokeAdapter_GUID "265ea9b0-af30-4fc6-bdf7-01fc9127e793"

namespace DirectUI
{
    class ItemInvokeAdapter;

    class __declspec(novtable) ItemInvokeAdapterGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::ItemInvokeAdapter;


        BEGIN_INTERFACE_MAP(ItemInvokeAdapterGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(ItemInvokeAdapterGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(ItemInvokeAdapterGenerated, ctl::WeakReferenceSource)

    public:
        ItemInvokeAdapterGenerated();
        ~ItemInvokeAdapterGenerated() override;

        // Event source typedefs.


        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Invoke)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ItemInvokeAdapter_Partial.h"
