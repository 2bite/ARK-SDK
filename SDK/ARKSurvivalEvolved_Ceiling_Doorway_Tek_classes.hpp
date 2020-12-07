#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Doorway_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C
// 0x0008 (0x0AD8 - 0x0AD0)
class ACeiling_Doorway_Tek_C : public ACeiling_Doorway_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C");
		return ptr;
	}


	bool BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Doorway_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
