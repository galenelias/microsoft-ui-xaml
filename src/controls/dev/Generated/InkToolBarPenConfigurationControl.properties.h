// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class InkToolBarPenConfigurationControlProperties
{
public:
    InkToolBarPenConfigurationControlProperties();

    void PenButton(winrt::InkToolBarPenButton const& value);
    winrt::InkToolBarPenButton PenButton();

    static winrt::DependencyProperty PenButtonProperty() { return s_PenButtonProperty; }

    static GlobalDependencyProperty s_PenButtonProperty;

    static void EnsureProperties();
    static void ClearProperties();
};