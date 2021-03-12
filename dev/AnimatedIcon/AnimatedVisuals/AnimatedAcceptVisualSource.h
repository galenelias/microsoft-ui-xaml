﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.101+g12769c43d3
//       
//       Command:
//           LottieGen -Language Cppwinrt -WinUIVersion 2.4 -InputFile AnimatedAcceptVisualSource.json
//       
//       Input file:
//           AnimatedAcceptVisualSource.json (32315 bytes created 16:32-08:00 Nov 23 2020)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "common.h"
#include "AnimatedVisuals\AnimatedAcceptVisualSource.g.h"

// Name:        AnimatedAcceptVisualSource
// Frame rate:  60 fps
// Frame count: 175
// Duration:    2916.7 mS
// ________________________________________________________________________________________________________________
// |               Marker                |               Constant                | Frame |   mS   |   Progress    |
// |_____________________________________|_______________________________________|_______|________|_______________|
// | NormalOnToNormalOff_Start           | M_NormalOnToNormalOff_Start           |     0 |    0.0 | 0.0F          |
// | NormalOnToNormalOff_End             | M_NormalOnToNormalOff_End             |     9 |  150.0 | 0.0517142862F |
// | NormalOnToPointerOverOn_Start       | M_NormalOnToPointerOverOn_Start       |    10 |  166.7 | 0.0574285723F |
// | NormalOnToPointerOverOn_End         | M_NormalOnToPointerOverOn_End         |    14 |  233.3 | 0.0802857131F |
// | NormalOnToPressedOn_Start           | M_NormalOnToPressedOn_Start           |    15 |  250.0 | 0.0860000029F |
// | NormalOnToPressedOn_End             | M_NormalOnToPressedOn_End             |    19 |  316.7 | 0.10885714F   |
// | NormalOffToNormalOn_Start           | M_NormalOffToNormalOn_Start           |    20 |  333.3 | 0.11457143F   |
// | NormalOffToNormalOn_End             | M_NormalOffToNormalOn_End             |    39 |  650.0 | 0.223142862F  |
// | NormalOffToPointerOverOff_Start     | M_NormalOffToPointerOverOff_Start     |    40 |  666.7 | 0.228857145F  |
// | NormalOffToPointerOverOff_End       | M_NormalOffToPointerOverOff_End       |    44 |  733.3 | 0.251714289F  |
// | NormalOffToPressedOff_Start         | M_NormalOffToPressedOff_Start         |    45 |  750.0 | 0.257428557F  |
// | NormalOffToPressedOff_End           | M_NormalOffToPressedOff_End           |    49 |  816.7 | 0.280285716F  |
// | PointerOverOnToPointerOverOff_Start | M_PointerOverOnToPointerOverOff_Start |    50 |  833.3 | 0.286000013F  |
// | PointerOverOnToPointerOverOff_End   | M_PointerOverOnToPointerOverOff_End   |    59 |  983.3 | 0.33742857F   |
// | PointerOverOnToNormalOn_Start       | M_PointerOverOnToNormalOn_Start       |    60 | 1000.0 | 0.343142867F  |
// | PointerOverOnToNormalOn_End         | M_PointerOverOnToNormalOn_End         |    64 | 1066.7 | 0.365999997F  |
// | PointerOverOnToPressedOn_Start      | M_PointerOverOnToPressedOn_Start      |    65 | 1083.3 | 0.371714294F  |
// | PointerOverOnToPressedOn_End        | M_PointerOverOnToPressedOn_End        |    69 | 1150.0 | 0.394571424F  |
// | PointerOverOffToPointerOverOn_Start | M_PointerOverOffToPointerOverOn_Start |    70 | 1166.7 | 0.400285721F  |
// | PointerOverOffToPointerOverOn_End   | M_PointerOverOffToPointerOverOn_End   |    79 | 1316.7 | 0.451714277F  |
// | PointerOverOffToNormalOff_Start     | M_PointerOverOffToNormalOff_Start     |    80 | 1333.3 | 0.457428575F  |
// | PointerOverOffToNormalOff_End       | M_PointerOverOffToNormalOff_End       |    84 | 1400.0 | 0.480285704F  |
// | PointerOverOffToPressedOff_Start    | M_PointerOverOffToPressedOff_Start    |    85 | 1416.7 | 0.486000001F  |
// | PointerOverOffToPressedOff_End      | M_PointerOverOffToPressedOff_End      |    89 | 1483.3 | 0.508857131F  |
// | PressedOnToPressedOff_Start         | M_PressedOnToPressedOff_Start         |    90 | 1500.0 | 0.514571428F  |
// | PressedOnToPressedOff_End           | M_PressedOnToPressedOff_End           |    99 | 1650.0 | 0.565999985F  |
// | PressedOnToPointerOverOff_Start     | M_PressedOnToPointerOverOff_Start     |   100 | 1666.7 | 0.571714282F  |
// | PressedOnToPointerOverOff_End       | M_PressedOnToPointerOverOff_End       |   109 | 1816.7 | 0.623142838F  |
// | PressedOnToNormalOff_Start          | M_PressedOnToNormalOff_Start          |   110 | 1833.3 | 0.628857136F  |
// | PressedOnToNormalOff_End            | M_PressedOnToNormalOff_End            |   119 | 1983.3 | 0.680285692F  |
// | PressedOffToPressedOn_Start         | M_PressedOffToPressedOn_Start         |   120 | 2000.0 | 0.68599999F   |
// | PressedOffToPressedOn_End           | M_PressedOffToPressedOn_End           |   129 | 2150.0 | 0.737428546F  |
// | PressedOffToPointerOverOn_Start     | M_PressedOffToPointerOverOn_Start     |   130 | 2166.7 | 0.743142843F  |
// | PressedOffToPointerOverOn_End       | M_PressedOffToPointerOverOn_End       |   149 | 2483.3 | 0.851714313F  |
// | PressedOffToNormalOn_Start          | M_PressedOffToNormalOn_Start          |   150 | 2500.0 | 0.857428551F  |
// | PressedOffToNormalOn_End            | M_PressedOffToNormalOn_End            |   169 | 2816.7 | 0.966000021F  |
// | NormalIndeterminate                 | M_NormalIndeterminate                 |   170 | 2833.3 | 0.971714258F  |
// | PointerOverIndeterminate            | M_PointerOverIndeterminate            |   172 | 2866.7 | 0.983142853F  |
// | PressedIndeterminate                | M_PressedIndeterminate                |   174 | 2900.0 | 0.994571447F  |
// ----------------------------------------------------------------------------------------------------------------
// _________________________________________________________
// | Theme property |  Accessor  | Type  |  Default value  |
// |________________|____________|_______|_________________|
// | Foreground     | Foreground | Color | #FF000000 Black |
// ---------------------------------------------------------
class AnimatedAcceptVisualSource
    : public winrt::implementation::AnimatedAcceptVisualSourceT<AnimatedAcceptVisualSource>
{
    winrt::Windows::UI::Composition::CompositionPropertySet _themeProperties{ nullptr };
    winrt::Windows::UI::Color _themeForeground{ 0xFF, 0x00, 0x00, 0x00 };
    winrt::Windows::UI::Composition::CompositionPropertySet EnsureThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

    static winrt::Windows::Foundation::Numerics::float4 ColorAsVector4(winrt::Windows::UI::Color color);
public:
    // Animation duration: 2.917 seconds.
    static constexpr int64_t c_durationTicks{ 29166666L };

    // Marker: NormalOnToNormalOff_Start.
    static constexpr float M_NormalOnToNormalOff_Start{ 0.0F };

    // Marker: NormalOnToNormalOff_End.
    static constexpr float M_NormalOnToNormalOff_End{ 0.0517142862F };

    // Marker: NormalOnToPointerOverOn_Start.
    static constexpr float M_NormalOnToPointerOverOn_Start{ 0.0574285723F };

    // Marker: NormalOnToPointerOverOn_End.
    static constexpr float M_NormalOnToPointerOverOn_End{ 0.0802857131F };

    // Marker: NormalOnToPressedOn_Start.
    static constexpr float M_NormalOnToPressedOn_Start{ 0.0860000029F };

    // Marker: NormalOnToPressedOn_End.
    static constexpr float M_NormalOnToPressedOn_End{ 0.10885714F };

    // Marker: NormalOffToNormalOn_Start.
    static constexpr float M_NormalOffToNormalOn_Start{ 0.11457143F };

    // Marker: NormalOffToNormalOn_End.
    static constexpr float M_NormalOffToNormalOn_End{ 0.223142862F };

    // Marker: NormalOffToPointerOverOff_Start.
    static constexpr float M_NormalOffToPointerOverOff_Start{ 0.228857145F };

    // Marker: NormalOffToPointerOverOff_End.
    static constexpr float M_NormalOffToPointerOverOff_End{ 0.251714289F };

    // Marker: NormalOffToPressedOff_Start.
    static constexpr float M_NormalOffToPressedOff_Start{ 0.257428557F };

    // Marker: NormalOffToPressedOff_End.
    static constexpr float M_NormalOffToPressedOff_End{ 0.280285716F };

    // Marker: PointerOverOnToPointerOverOff_Start.
    static constexpr float M_PointerOverOnToPointerOverOff_Start{ 0.286000013F };

    // Marker: PointerOverOnToPointerOverOff_End.
    static constexpr float M_PointerOverOnToPointerOverOff_End{ 0.33742857F };

    // Marker: PointerOverOnToNormalOn_Start.
    static constexpr float M_PointerOverOnToNormalOn_Start{ 0.343142867F };

    // Marker: PointerOverOnToNormalOn_End.
    static constexpr float M_PointerOverOnToNormalOn_End{ 0.365999997F };

    // Marker: PointerOverOnToPressedOn_Start.
    static constexpr float M_PointerOverOnToPressedOn_Start{ 0.371714294F };

    // Marker: PointerOverOnToPressedOn_End.
    static constexpr float M_PointerOverOnToPressedOn_End{ 0.394571424F };

    // Marker: PointerOverOffToPointerOverOn_Start.
    static constexpr float M_PointerOverOffToPointerOverOn_Start{ 0.400285721F };

    // Marker: PointerOverOffToPointerOverOn_End.
    static constexpr float M_PointerOverOffToPointerOverOn_End{ 0.451714277F };

    // Marker: PointerOverOffToNormalOff_Start.
    static constexpr float M_PointerOverOffToNormalOff_Start{ 0.457428575F };

    // Marker: PointerOverOffToNormalOff_End.
    static constexpr float M_PointerOverOffToNormalOff_End{ 0.480285704F };

    // Marker: PointerOverOffToPressedOff_Start.
    static constexpr float M_PointerOverOffToPressedOff_Start{ 0.486000001F };

    // Marker: PointerOverOffToPressedOff_End.
    static constexpr float M_PointerOverOffToPressedOff_End{ 0.508857131F };

    // Marker: PressedOnToPressedOff_Start.
    static constexpr float M_PressedOnToPressedOff_Start{ 0.514571428F };

    // Marker: PressedOnToPressedOff_End.
    static constexpr float M_PressedOnToPressedOff_End{ 0.565999985F };

    // Marker: PressedOnToPointerOverOff_Start.
    static constexpr float M_PressedOnToPointerOverOff_Start{ 0.571714282F };

    // Marker: PressedOnToPointerOverOff_End.
    static constexpr float M_PressedOnToPointerOverOff_End{ 0.623142838F };

    // Marker: PressedOnToNormalOff_Start.
    static constexpr float M_PressedOnToNormalOff_Start{ 0.628857136F };

    // Marker: PressedOnToNormalOff_End.
    static constexpr float M_PressedOnToNormalOff_End{ 0.680285692F };

    // Marker: PressedOffToPressedOn_Start.
    static constexpr float M_PressedOffToPressedOn_Start{ 0.68599999F };

    // Marker: PressedOffToPressedOn_End.
    static constexpr float M_PressedOffToPressedOn_End{ 0.737428546F };

    // Marker: PressedOffToPointerOverOn_Start.
    static constexpr float M_PressedOffToPointerOverOn_Start{ 0.743142843F };

    // Marker: PressedOffToPointerOverOn_End.
    static constexpr float M_PressedOffToPointerOverOn_End{ 0.851714313F };

    // Marker: PressedOffToNormalOn_Start.
    static constexpr float M_PressedOffToNormalOn_Start{ 0.857428551F };

    // Marker: PressedOffToNormalOn_End.
    static constexpr float M_PressedOffToNormalOn_End{ 0.966000021F };

    // Marker: NormalIndeterminate.
    static constexpr float M_NormalIndeterminate{ 0.971714258F };

    // Marker: PointerOverIndeterminate.
    static constexpr float M_PointerOverIndeterminate{ 0.983142853F };

    // Marker: PressedIndeterminate.
    static constexpr float M_PressedIndeterminate{ 0.994571447F };

    // Theme property: Foreground.
    static inline const winrt::Windows::UI::Color c_themeForeground{ 0xFF, 0x00, 0x00, 0x00 };


    winrt::Windows::UI::Color Foreground();
    void Foreground(winrt::Windows::UI::Color value);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor,
        winrt::Windows::Foundation::IInspectable& diagnostics);

    // Gets the number of frames in the animation.
    double FrameCount();

    // Gets the framerate of the animation.
    double Framerate();

    // Gets the duration of the animation.
    winrt::Windows::Foundation::TimeSpan Duration();

    // Converts a zero-based frame number to the corresponding progress value denoting the
    // start of the frame.
    double FrameToProgress(double frameNumber);

    // Returns a map from marker names to corresponding progress values.
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> Markers();

    // Sets the color property with the given name, or does nothing if no such property
    // exists.
    void SetColorProperty(hstring const& propertyName, winrt::Windows::UI::Color value);

    // Sets the scalar property with the given name, or does nothing if no such property
    // exists.
    void SetScalarProperty(hstring const& propertyName, double value);
};