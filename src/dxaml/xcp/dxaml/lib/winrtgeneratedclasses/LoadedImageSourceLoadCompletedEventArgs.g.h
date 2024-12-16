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


#define __LoadedImageSourceLoadCompletedEventArgs_GUID "aa99f55f-dacc-4b3e-83ff-320212048875"

namespace DirectUI
{
    class LoadedImageSourceLoadCompletedEventArgs;

    class __declspec(novtable) __declspec(uuid(__LoadedImageSourceLoadCompletedEventArgs_GUID)) LoadedImageSourceLoadCompletedEventArgs :
        public ABI::Microsoft::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.LoadedImageSourceLoadCompletedEventArgs");

        BEGIN_INTERFACE_MAP(LoadedImageSourceLoadCompletedEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(LoadedImageSourceLoadCompletedEventArgs, ABI::Microsoft::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs)
        END_INTERFACE_MAP(LoadedImageSourceLoadCompletedEventArgs, DirectUI::EventArgs)

    public:
        LoadedImageSourceLoadCompletedEventArgs();
        ~LoadedImageSourceLoadCompletedEventArgs() override;

        // Properties.
        IFACEMETHOD(get_Status)(_Out_ ABI::Microsoft::UI::Xaml::Media::LoadedImageSourceLoadStatus* pValue) override;
        _Check_return_ HRESULT put_Status(_In_ ABI::Microsoft::UI::Xaml::Media::LoadedImageSourceLoadStatus value);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}

