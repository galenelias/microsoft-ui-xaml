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

#include "Panel.g.h"
#include "IKeyboardNavigationPanel.g.h"
#include "IOrientedPanel.g.h"

#define __VariableSizedWrapGrid_GUID "285d58ab-d64c-49f4-9740-060a0aabecb7"

namespace DirectUI
{
    class VariableSizedWrapGrid;

    class __declspec(novtable) VariableSizedWrapGridGenerated:
        public DirectUI::Panel
        , public ABI::Microsoft::UI::Xaml::Controls::IVariableSizedWrapGrid
        , public DirectUI::IKeyboardNavigationPanel
        , public DirectUI::IOrientedPanel
    {
        friend class DirectUI::VariableSizedWrapGrid;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.VariableSizedWrapGrid");

        BEGIN_INTERFACE_MAP(VariableSizedWrapGridGenerated, DirectUI::Panel)
            INTERFACE_ENTRY(VariableSizedWrapGridGenerated, ABI::Microsoft::UI::Xaml::Controls::IVariableSizedWrapGrid)
            INTERFACE_ENTRY(VariableSizedWrapGridGenerated, DirectUI::IKeyboardNavigationPanel)
            INTERFACE_ENTRY(VariableSizedWrapGridGenerated, DirectUI::IOrientedPanel)
        END_INTERFACE_MAP(VariableSizedWrapGridGenerated, DirectUI::Panel)

    public:
        VariableSizedWrapGridGenerated();
        ~VariableSizedWrapGridGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VariableSizedWrapGrid;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VariableSizedWrapGrid;
        }

        // Properties.
        IFACEMETHOD(get_HorizontalChildrenAlignment)(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue) override;
        IFACEMETHOD(put_HorizontalChildrenAlignment)(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value) override;
        IFACEMETHOD(get_ItemHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemHeight)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_ItemWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemWidth)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_MaximumRowsOrColumns)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_MaximumRowsOrColumns)(_In_ INT value) override;
        IFACEMETHOD(get_Orientation)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue) override;
        IFACEMETHOD(put_Orientation)(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value) override;
        IFACEMETHOD(get_VerticalChildrenAlignment)(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue) override;
        IFACEMETHOD(put_VerticalChildrenAlignment)(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value) override;

        // Events.

        // Methods.
        IFACEMETHOD(GetTargetIndexFromNavigationAction)(_In_ UINT sourceIndex, _In_ ABI::Microsoft::UI::Xaml::Controls::ElementType sourceType, _In_ ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _In_ BOOLEAN allowWrap, _In_ UINT itemIndexHintForHeaderNavigation, _Out_ UINT* pComputedTargetIndex, _Out_ ABI::Microsoft::UI::Xaml::Controls::ElementType* pComputedTargetType, _Out_ BOOLEAN* pActionValidForSourceIndex) = 0;
        IFACEMETHOD(SupportsKeyNavigationAction)(_In_ ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _Out_ BOOLEAN* pReturnValue) = 0;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "VariableSizedWrapGrid_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) VariableSizedWrapGridFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IVariableSizedWrapGridStatics
    {
        BEGIN_INTERFACE_MAP(VariableSizedWrapGridFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(VariableSizedWrapGridFactory, ABI::Microsoft::UI::Xaml::Controls::IVariableSizedWrapGridStatics)
        END_INTERFACE_MAP(VariableSizedWrapGridFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ItemHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OrientationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalChildrenAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_VerticalChildrenAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaximumRowsOrColumnsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.
        static _Check_return_ HRESULT GetRowSpanStatic(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Out_ INT* pValue);
        static _Check_return_ HRESULT SetRowSpanStatic(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT value);
        IFACEMETHOD(get_RowSpanProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(GetRowSpan)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Out_ INT* pValue);
        IFACEMETHOD(SetRowSpan)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT value);
        static _Check_return_ HRESULT GetColumnSpanStatic(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Out_ INT* pValue);
        static _Check_return_ HRESULT SetColumnSpanStatic(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT value);
        IFACEMETHOD(get_ColumnSpanProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(GetColumnSpan)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Out_ INT* pValue);
        IFACEMETHOD(SetColumnSpan)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT value);

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VariableSizedWrapGrid;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}