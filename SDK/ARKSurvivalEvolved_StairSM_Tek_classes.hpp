#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StairSM_Tek.StairSM_Tek_C
// 0x0008 (0x0AC8 - 0x0AC0)
class AStairSM_Tek_C : public AStairSM_Base_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1_1;                                            // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StairSM_Tek.StairSM_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StairSM_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif