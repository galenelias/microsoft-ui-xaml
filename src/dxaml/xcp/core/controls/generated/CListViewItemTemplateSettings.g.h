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

#include "CListViewBaseItemTemplateSettings.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CListViewItemTemplateSettings : public CListViewBaseItemTemplateSettings
{
protected:
    CListViewItemTemplateSettings(_In_ CCoreServices *pCore)
        : CListViewBaseItemTemplateSettings(pCore)
    {
        SetIsCustomType();
    }

    ~CListViewItemTemplateSettings() override = default;

public:
    DECLARE_CREATE(CListViewItemTemplateSettings);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::ListViewItemTemplateSettings;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};