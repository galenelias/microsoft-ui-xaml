// AUTOGENERATED_FOR_WINRT
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "InkToolBarPenButton.g.h"
#include "InkToolBarPenButton.properties.h"

#include "InkToolBarToolButton.h"

class InkToolBarPenButton :
    public winrt::implementation::InkToolBarPenButtonT<InkToolBarPenButton, InkToolBarToolButton, winrt::composable>, 
    public InkToolBarPenButtonProperties
{
public:
    ForwardRefToBaseReferenceTracker(InkToolBarToolButton)

    // These functions are ambiguous with InkToolBarToolButton, disambiguate
    using InkToolBarPenButtonProperties::EnsureProperties;
    using InkToolBarPenButtonProperties::ClearProperties;

    winrt::IVector<winrt::Brush> Palette() { winrt::throw_hresult(E_NOTIMPL); }
    void Palette(winrt::IVector<winrt::Brush> value) { winrt::throw_hresult(E_NOTIMPL); } 
    double MinStrokeWidth() { winrt::throw_hresult(E_NOTIMPL); }
    void MinStrokeWidth(double value) { winrt::throw_hresult(E_NOTIMPL); } 
    double MaxStrokeWidth() { winrt::throw_hresult(E_NOTIMPL); }
    void MaxStrokeWidth(double value) { winrt::throw_hresult(E_NOTIMPL); } 
    winrt::Brush SelectedBrush() { winrt::throw_hresult(E_NOTIMPL); }
    int32_t SelectedBrushIndex() { winrt::throw_hresult(E_NOTIMPL); }
    void SelectedBrushIndex(int32_t value) { winrt::throw_hresult(E_NOTIMPL); } 
    double SelectedStrokeWidth() { winrt::throw_hresult(E_NOTIMPL); }
    void SelectedStrokeWidth(double value) { winrt::throw_hresult(E_NOTIMPL); } 
};
