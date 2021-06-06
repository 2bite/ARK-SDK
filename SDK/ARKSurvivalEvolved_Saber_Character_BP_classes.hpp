#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Saber_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Saber_Character_BP.Saber_Character_BP_C
// 0x0028 (0x2290 - 0x2268)
class ASaber_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Saber_C*    DinoCharacterStatus_BP_Saber_C1;                          // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ResourceTypesToScale;                                     // 0x2270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ResourceTypeScales;                                       // 0x2280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Saber_Character_BP.Saber_Character_BP_C");
		return ptr;
	}


	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void UserConstructionScript();
	void ExecuteUbergraph_Saber_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
