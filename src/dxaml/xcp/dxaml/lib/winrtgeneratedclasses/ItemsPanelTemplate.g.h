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

#include "FrameworkTemplate.g.h"

#define __ItemsPanelTemplate_GUID "421f4b9a-6327-4501-a8f2-1a53f8b0387d"

namespace DirectUI
{
    class ItemsPanelTemplate;

    class __declspec(novtable) __declspec(uuid(__ItemsPanelTemplate_GUID)) ItemsPanelTemplate:
        public DirectUI::FrameworkTemplate
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ItemsPanelTemplate");

        BEGIN_INTERFACE_MAP(ItemsPanelTemplate, DirectUI::FrameworkTemplate)
            INTERFACE_ENTRY(ItemsPanelTemplate, ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate)
        END_INTERFACE_MAP(ItemsPanelTemplate, DirectUI::FrameworkTemplate)

    public:
        ItemsPanelTemplate();
        ~ItemsPanelTemplate() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsPanelTemplate;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ItemsPanelTemplate;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}

