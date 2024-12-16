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

#include "ItemsControlAutomationPeer.g.h"

#define __MenuFlyoutPresenterAutomationPeer_GUID "8cc8a5c3-c979-4830-aa5f-3d5df0c623b3"

namespace DirectUI
{
    class MenuFlyoutPresenterAutomationPeer;

    class __declspec(novtable) MenuFlyoutPresenterAutomationPeerGenerated:
        public DirectUI::ItemsControlAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer
    {
        friend class DirectUI::MenuFlyoutPresenterAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.MenuFlyoutPresenterAutomationPeer");

        BEGIN_INTERFACE_MAP(MenuFlyoutPresenterAutomationPeerGenerated, DirectUI::ItemsControlAutomationPeer)
            INTERFACE_ENTRY(MenuFlyoutPresenterAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer)
        END_INTERFACE_MAP(MenuFlyoutPresenterAutomationPeerGenerated, DirectUI::ItemsControlAutomationPeer)

    public:
        MenuFlyoutPresenterAutomationPeerGenerated();
        ~MenuFlyoutPresenterAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MenuFlyoutPresenterAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::MenuFlyoutPresenterAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "MenuFlyoutPresenterAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) MenuFlyoutPresenterAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(MenuFlyoutPresenterAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(MenuFlyoutPresenterAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory)
        END_INTERFACE_MAP(MenuFlyoutPresenterAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MenuFlyoutPresenterAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}