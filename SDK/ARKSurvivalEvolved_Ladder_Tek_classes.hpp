#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ladder_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_Tek.Ladder_Tek_C
// 0x0008 (0x0B50 - 0x0B48)
class ALadder_Tek_C : public ALadderBaseBP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_Tek.Ladder_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ladder_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
