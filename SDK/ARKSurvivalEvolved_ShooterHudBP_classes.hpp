#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShooterHudBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
// 0x0008 (0x0B50 - 0x0B48)
class AShooterHudBP_C : public AShooterHUD
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C");
		return ptr;
	}


	void GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams);
	void UserConstructionScript();
	void ExecuteUbergraph_ShooterHudBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
