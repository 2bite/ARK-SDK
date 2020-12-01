#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DoubleDoorframe_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoubleDoorframe_Stone.BP_DoubleDoorframe_Stone_C
// 0x0010 (0x0AC8 - 0x0AB8)
class ABP_DoubleDoorframe_Stone_C : public ABase_DoubleDoorframe_C
{
public:
	class UStaticMeshComponent*                        RightPillar;                                              // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeftPillar;                                               // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoorframe_Stone.BP_DoubleDoorframe_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_DoubleDoorframe_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif