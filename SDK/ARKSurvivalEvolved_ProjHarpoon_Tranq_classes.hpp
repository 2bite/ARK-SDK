#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x000C (0x06B8 - 0x06AC)
class AProjHarpoon_Tranq_C : public AProjHarpoon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
