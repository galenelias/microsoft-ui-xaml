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

#include "ImageSource.g.h"

#define __RenderTargetBitmap_GUID "b3432d35-9853-4d4d-b19a-e8acd3c46693"

namespace DirectUI
{
    class RenderTargetBitmap;
    class UIElement;

    class __declspec(novtable) RenderTargetBitmapGenerated:
        public DirectUI::ImageSource
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmap
    {
        friend class DirectUI::RenderTargetBitmap;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Imaging.RenderTargetBitmap");

        BEGIN_INTERFACE_MAP(RenderTargetBitmapGenerated, DirectUI::ImageSource)
            INTERFACE_ENTRY(RenderTargetBitmapGenerated, ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmap)
        END_INTERFACE_MAP(RenderTargetBitmapGenerated, DirectUI::ImageSource)

    public:
        RenderTargetBitmapGenerated();
        ~RenderTargetBitmapGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RenderTargetBitmap;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::RenderTargetBitmap;
        }

        // Properties.
        IFACEMETHOD(get_PixelHeight)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_PixelWidth)(_Out_ INT* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(GetPixelsAsync)(_Outptr_ ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>** ppReturnValue) override;
        IFACEMETHOD(RenderAsync)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue) override;
        IFACEMETHOD(RenderToSizeAsync)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT scaledWidth, _In_ INT scaledHeight, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "RenderTargetBitmap_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) RenderTargetBitmapFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics
    {
        BEGIN_INTERFACE_MAP(RenderTargetBitmapFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(RenderTargetBitmapFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics)
        END_INTERFACE_MAP(RenderTargetBitmapFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_PixelWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PixelHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RenderTargetBitmap;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}