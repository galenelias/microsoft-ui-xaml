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

#include "PathSegment.g.h"

#define __LineSegment_GUID "5a127562-bd9f-4c09-9469-5dd3f2f52c6f"

namespace DirectUI
{
    class LineSegment;

    class __declspec(novtable) __declspec(uuid(__LineSegment_GUID)) LineSegment:
        public DirectUI::PathSegment
        , public ABI::Microsoft::UI::Xaml::Media::ILineSegment
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.LineSegment");

        BEGIN_INTERFACE_MAP(LineSegment, DirectUI::PathSegment)
            INTERFACE_ENTRY(LineSegment, ABI::Microsoft::UI::Xaml::Media::ILineSegment)
        END_INTERFACE_MAP(LineSegment, DirectUI::PathSegment)

    public:
        LineSegment();
        ~LineSegment() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::LineSegment;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::LineSegment;
        }

        // Properties.
        IFACEMETHOD(get_Point)(_Out_ ABI::Windows::Foundation::Point* pValue) override;
        IFACEMETHOD(put_Point)(_In_ ABI::Windows::Foundation::Point value) override;

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


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) LineSegmentFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::ILineSegmentStatics
    {
        BEGIN_INTERFACE_MAP(LineSegmentFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(LineSegmentFactory, ABI::Microsoft::UI::Xaml::Media::ILineSegmentStatics)
        END_INTERFACE_MAP(LineSegmentFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_PointProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::LineSegment;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}