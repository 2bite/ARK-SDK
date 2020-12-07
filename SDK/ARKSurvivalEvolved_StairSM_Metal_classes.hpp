#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StairSM_Metal.StairSM_Metal_C
// 0x0008 (0x0AE8 - 0x0AE0)
class AStairSM_Metal_C : public AStairSM_Base_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1_1;                                            // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StairSM_Metal.StairSM_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StairSM_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
