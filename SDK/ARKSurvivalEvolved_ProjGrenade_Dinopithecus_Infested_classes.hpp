#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenade_Dinopithecus_Infested_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C
// 0x0008 (0x06F8 - 0x06F0)
class AProjGrenade_Dinopithecus_Infested_C : public AProjGrenade_Dinopithecus_C
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
