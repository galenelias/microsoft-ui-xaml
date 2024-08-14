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

#include "IContainerContentChangingIterator.g.h"
#include "IGeneratorHost.g.h"
#include "IGroupHeaderMapping.g.h"

namespace DirectUI
{
    interface __declspec(uuid("2741e724-81c2-4cae-8092-3b703aa1d93f")) ICustomGeneratorItemsHost : public IInspectable
    {
        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(RegisterItemsHost)(_In_ DirectUI::IGeneratorHost* pHost) = 0;
        IFACEMETHOD(DisconnectItemsHost)() = 0;
        IFACEMETHOD(GetItemContainerMapping)(_Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemContainerMapping** ppReturnValue) = 0;
        IFACEMETHOD(GetGroupHeaderMapping)(_Outptr_ DirectUI::IGroupHeaderMapping** ppReturnValue) = 0;
        IFACEMETHOD(Refresh)() = 0;
        IFACEMETHOD(NotifyOfItemsChanging)(_In_ ABI::Windows::Foundation::Collections::IVectorChangedEventArgs* pE) = 0;
        IFACEMETHOD(NotifyOfItemsChanged)(_In_ ABI::Windows::Foundation::Collections::IVectorChangedEventArgs* pE) = 0;
        IFACEMETHOD(NotifyOfItemsReordered)(_In_ UINT count) = 0;
        IFACEMETHOD(GetContainersForIncrementalVisualization)(_Outptr_ DirectUI::IContainerContentChangingIterator** ppReturnValue) = 0;
    };
}