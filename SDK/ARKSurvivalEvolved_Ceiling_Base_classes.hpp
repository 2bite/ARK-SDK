#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Base.Ceiling_Base_C
// 0x0010 (0x0AF8 - 0x0AE8)
class ACeiling_Base_C : public AStructureBaseBP_C
{
public:
	TArray<struct FName>                               AllowSnapRotationToStructuresWithTag;                     // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Base.Ceiling_Base_C");
		return ptr;
	}


	bool BPAllowSnapRotationForStructure(int* ThisSnapPointIndex, struct FName* ThisSnapPointName, class APrimalStructure** OtherStructure, int* OtherStructureSnapPointIndex, struct FName* OtherStructureSnapPointName);
	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
