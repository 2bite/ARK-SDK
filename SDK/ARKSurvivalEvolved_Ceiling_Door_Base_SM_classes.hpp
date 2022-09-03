#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Door_Base_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C
// 0x0008 (0x0B78 - 0x0B70)
class ACeiling_Door_Base_SM_C : public ADoor_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Door_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
