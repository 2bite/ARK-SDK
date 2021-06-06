#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionsUI_RequirementEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C
// 0x0020 (0x0280 - 0x0260)
class UMissionsUI_RequirementEntry_C : public UMissionRequirementEntryWidget
{
public:
	class UBorder*                                     Bullet;                                                   // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  DisplayTextBlock;                                         // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              InnerMainPanel;                                           // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MainPanel;                                                // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_MissionsUI_RequirementEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
