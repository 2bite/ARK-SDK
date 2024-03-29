#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ankylo_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ankylo_Character_BP.Ankylo_Character_BP_C
// 0x0010 (0x2298 - 0x2288)
class AAnkylo_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Ankylo_C*   DinoCharacterStatus_BP_Anklyo_C1;                         // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ankylo_Character_BP.Ankylo_Character_BP_C");
		return ptr;
	}


	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	float BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage);
	void UserConstructionScript();
	void ExecuteUbergraph_Ankylo_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
