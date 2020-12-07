#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pillar_Tek.Pillar_Tek_C
// 0x0008 (0x0AC8 - 0x0AC0)
class APillar_Tek_C : public APillar_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pillar_Tek.Pillar_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Pillar_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
