#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjHarpoon_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjHarpoon_Tranq.ProjHarpoon_Tranq_C
// 0x000C (0x06A0 - 0x0694)
class AProjHarpoon_Tranq_C : public AProjHarpoon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjHarpoon_Tranq.ProjHarpoon_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjHarpoon_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif