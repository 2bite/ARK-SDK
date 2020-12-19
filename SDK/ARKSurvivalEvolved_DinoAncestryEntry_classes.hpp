#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAncestryEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DinoAncestryEntry.DinoAncestryEntry_C
// 0x0008 (0x0540 - 0x0538)
class UDinoAncestryEntry_C : public UDinoAncestryEntryWidget
{
public:
	class UImage*                                      ArrowIcon;                                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoAncestryEntry.DinoAncestryEntry_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAncestryEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
