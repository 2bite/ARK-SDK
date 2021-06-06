#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_ShooterGame_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct HLNALocalizedAudioEntry.HLNALocalizedAudioEntry
// 0x0010
struct FHLNALocalizedAudioEntry
{
	TArray<struct FLocalizedSoundCueEntry>             LocalizedSoundCues_3_2B6DF2754EEFC3031810EAAA25F6A57D;    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
