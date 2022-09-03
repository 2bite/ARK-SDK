#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDefPlant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDefPlant.ProjDefPlant_C
// 0x0010 (0x0670 - 0x0660)
class AProjDefPlant_C : public APrimalProjectileDilo
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDefPlant.ProjDefPlant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDefPlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
