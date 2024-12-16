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

#include "Timeline.g.h"

#define __PointAnimationUsingKeyFrames_GUID "06bd8185-84f1-47c7-83a1-fd34f625d8d6"

namespace DirectUI
{
    class PointAnimationUsingKeyFrames;
    class PointKeyFrameCollection;

    class __declspec(novtable) __declspec(uuid(__PointAnimationUsingKeyFrames_GUID)) PointAnimationUsingKeyFrames:
        public DirectUI::Timeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.PointAnimationUsingKeyFrames");

        BEGIN_INTERFACE_MAP(PointAnimationUsingKeyFrames, DirectUI::Timeline)
            INTERFACE_ENTRY(PointAnimationUsingKeyFrames, ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames)
        END_INTERFACE_MAP(PointAnimationUsingKeyFrames, DirectUI::Timeline)

    public:
        PointAnimationUsingKeyFrames();
        ~PointAnimationUsingKeyFrames() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointAnimationUsingKeyFrames;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PointAnimationUsingKeyFrames;
        }

        // Properties.
        IFACEMETHOD(get_EnableDependentAnimation)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_EnableDependentAnimation)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_KeyFrames)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::PointKeyFrame*>** ppValue) override;

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
    class __declspec(novtable) PointAnimationUsingKeyFramesFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics
    {
        BEGIN_INTERFACE_MAP(PointAnimationUsingKeyFramesFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(PointAnimationUsingKeyFramesFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics)
        END_INTERFACE_MAP(PointAnimationUsingKeyFramesFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        IFACEMETHOD(get_EnableDependentAnimationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointAnimationUsingKeyFrames;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}